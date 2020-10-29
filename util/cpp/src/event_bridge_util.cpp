#include "crypt/base64.h"
#include "crypt/hmac.h"
#include "crypt/sha1.h"
#include <alibabacloud/event_bridge_util.hpp>
#include <boost/any.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <darabonba/core.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_EventBridgeUtil;

string get(map<string, string> m, const string &key) {
  string value;
  if (m.find(key) != m.end()) {
    value = m[key];
  }
  return value;
}

string uppercase(string str) {
  std::transform(str.begin(), str.end(), str.begin(),
                 [](unsigned char c) { return std::toupper(c); });
  return str;
}

bool start_with(string src, string prefix) {
  auto res = std::mismatch(prefix.begin(), prefix.end(), src.begin());
  return res.first == prefix.end();
}

// trim from start (in place)
void ltrim(std::string &s) {
  s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !std::isspace(ch);
          }));
}

// trim from end (in place)
void rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(),
                       [](unsigned char ch) { return !std::isspace(ch); })
              .base(),
          s.end());
}

// trim from both ends (in place)
void trim(std::string &s) {
  ltrim(s);
  rtrim(s);
}

std::string implode(const std::vector<std::string> &vec,
                    const std::string &glue) {
  string res;
  int n = 0;
  for (const auto &str : vec) {
    if (n == 0) {
      res = str;
    } else {
      res += glue + str;
    }
    n++;
  }
  return res;
}

string getCanonicalizedHeaders(const map<string, string> &headers,
                               const string &prefix = "x-acs-") {
  std::stringstream result;
  for (const auto &item : headers) {
    if (start_with(item.first, prefix)) {
      string v = item.second;
      trim(v);
      result << item.first << ":" << v << "\n";
    }
  }
  return result.str();
}

string getCanonicalizedResource(string pathname, map<string, string> query) {
  if (query.empty()) {
    return pathname;
  }
  vector<string> tmp;
  tmp.reserve(query.size());
  for (const auto &item : query) {
    tmp.push_back(string(item.first) + "=" + item.second);
  }
  return pathname + "?" + implode(tmp, "&");
}

string hmacsha1(const std::string &src, const std::string &key) {
  boost::uint8_t hash_val[sha1::HASH_SIZE];
  hmac<sha1>::calc(src, key, hash_val);
  return base64::encode_from_array(hash_val, sha1::HASH_SIZE);
}

string Alibabacloud_EventBridgeUtil::Client::getStringToSign(
    shared_ptr<Darabonba::Request> request) {
  string pathname = request->pathname;
  map<string, string> query = request->query;
  map<string, string> headers = request->headers;
  string content_md5 = get(headers, "content-md5");
  string content_type = get(headers, "content-type");
  string date = get(headers, "date");

  std::stringstream result;
  result << uppercase(request->method) << "\n"
         << content_md5 << "\n"
         << content_type << "\n"
         << date << "\n";
  result << getCanonicalizedHeaders(headers);
  result << getCanonicalizedResource(pathname, query);
  return result.str();
}

string Alibabacloud_EventBridgeUtil::Client::getSignature(
    shared_ptr<string> stringToSign, shared_ptr<string> secret) {
  string src = !stringToSign ? "" : *stringToSign;
  string sec = !secret ? "" : *secret;
  return hmacsha1(src, sec);
}

boost::any parse_json(boost::property_tree::ptree pt) {
  if (pt.empty()) {
    if (pt.data() == "true" || pt.data() == "false") {
      return boost::any(pt.get_value<bool>());
    }
    return boost::any(pt.data());
  }
  vector<boost::any> vec;
  map<string, boost::any> m;
  for (const auto &it : pt) {
    if (!it.first.empty()) {
      m[it.first] = parse_json(it.second);
    } else {
      vec.push_back(parse_json(it.second));
    }
  }
  return vec.empty() ? boost::any(m) : boost::any(vec);
}

boost::any parseJSON(const shared_ptr<string> &val) {
  string v = !val ? "" : *val;
  stringstream ss(v);
  using namespace boost::property_tree;
  ptree pt;
  read_json(ss, pt);
  return parse_json(pt);
}

boost::any Alibabacloud_EventBridgeUtil::Client::serialize(
    const shared_ptr<void> &events) {
  vector<map<string, boost::any>> result;
  shared_ptr<vector<shared_ptr<Darabonba::Model>>> vec =
      static_pointer_cast<vector<shared_ptr<Darabonba::Model>>>(events);
  for (auto &event : *vec) {
    map<string, boost::any> mm = event->toMap();
    if (mm.find("datacontenttype") == mm.end()) {
      mm["datacontenttype"] = string("application/json");
    }
    string content_type = boost::any_cast<string>(mm["datacontenttype"]);
    if (content_type.empty()) {
      content_type = "application/json";
      mm["datacontenttype"] = boost::any(content_type);
    }
    if (mm.find("data") != mm.end() && !mm["data"].empty()) {
      vector<uint8_t> bytes = boost::any_cast<vector<uint8_t>>(mm["data"]);
      string data(bytes.begin(), bytes.end());
      if (content_type == "application/json" || content_type == "text/json") {
        try {
          mm["data"] = parseJSON(make_shared<string>(data));
        } catch (std::exception &e) {
          mm["data"] = data;
        }
      } else {
        mm["data_base64"] = base64::encode_from_string(data);
        mm.erase("data");
      }
    }
    if (mm.find("extensions") != mm.end()) {
      map<string, boost::any> ext =
          boost::any_cast<map<string, boost::any>>(mm["extensions"]);
      for (auto item : ext) {
        mm[item.first] = item.second;
      }
      mm.erase("extensions");
    }
    result.push_back(mm);
  }
  return result;
}

bool Alibabacloud_EventBridgeUtil::Client::startWith(
    shared_ptr<string> origin, shared_ptr<string> prefix) {
  string o = !origin ? "" : *origin;
  string p = !prefix ? "" : *prefix;
  return start_with(o, p);
}
