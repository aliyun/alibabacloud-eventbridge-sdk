// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EVENTBRIDGE_H_
#define ALIBABACLOUD_EVENTBRIDGE_H_

#include <alibabacloud/credential.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EventBridge {
class Config : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<int> readTimeout{};
  shared_ptr<int> connectTimeout{};
  shared_ptr<string> httpProxy{};
  shared_ptr<string> httpsProxy{};
  shared_ptr<Alibabacloud_Credential::Client> credential{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> noProxy{};
  shared_ptr<int> maxIdleConns{};

  Config() {}

  explicit Config(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    Darabonba::Model::validatePattern("regionId", regionId, "^[a-zA-Z0-9_-]+$");
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["accessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["accessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (securityToken) {
      res["securityToken"] = boost::any(*securityToken);
    }
    if (protocol) {
      res["protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (readTimeout) {
      res["readTimeout"] = boost::any(*readTimeout);
    }
    if (connectTimeout) {
      res["connectTimeout"] = boost::any(*connectTimeout);
    }
    if (httpProxy) {
      res["httpProxy"] = boost::any(*httpProxy);
    }
    if (httpsProxy) {
      res["httpsProxy"] = boost::any(*httpsProxy);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (noProxy) {
      res["noProxy"] = boost::any(*noProxy);
    }
    if (maxIdleConns) {
      res["maxIdleConns"] = boost::any(*maxIdleConns);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKeyId") != m.end() && !m["accessKeyId"].empty()) {
      accessKeyId =
          make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret =
          make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken =
          make_shared<string>(boost::any_cast<string>(m["securityToken"]));
    }
    if (m.find("protocol") != m.end() && !m["protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["protocol"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("readTimeout") != m.end() && !m["readTimeout"].empty()) {
      readTimeout = make_shared<int>(boost::any_cast<int>(m["readTimeout"]));
    }
    if (m.find("connectTimeout") != m.end() && !m["connectTimeout"].empty()) {
      connectTimeout =
          make_shared<int>(boost::any_cast<int>(m["connectTimeout"]));
    }
    if (m.find("httpProxy") != m.end() && !m["httpProxy"].empty()) {
      httpProxy = make_shared<string>(boost::any_cast<string>(m["httpProxy"]));
    }
    if (m.find("httpsProxy") != m.end() && !m["httpsProxy"].empty()) {
      httpsProxy =
          make_shared<string>(boost::any_cast<string>(m["httpsProxy"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("noProxy") != m.end() && !m["noProxy"].empty()) {
      noProxy = make_shared<string>(boost::any_cast<string>(m["noProxy"]));
    }
    if (m.find("maxIdleConns") != m.end() && !m["maxIdleConns"].empty()) {
      maxIdleConns = make_shared<int>(boost::any_cast<int>(m["maxIdleConns"]));
    }
  }

  virtual ~Config() = default;
};
class PutEventsResponseEntry : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> traceId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  PutEventsResponseEntry() {}

  explicit PutEventsResponseEntry(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (traceId) {
      res["TraceId"] = boost::any(*traceId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("TraceId") != m.end() && !m["TraceId"].empty()) {
      traceId = make_shared<string>(boost::any_cast<string>(m["TraceId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage =
          make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }

  virtual ~PutEventsResponseEntry() = default;
};
class CloudEvent : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> source{};
  shared_ptr<string> specversion{};
  shared_ptr<string> type{};
  shared_ptr<string> datacontenttype{};
  shared_ptr<string> dataschema{};
  shared_ptr<string> subject{};
  shared_ptr<string> time{};
  shared_ptr<map<string, boost::any>> extensions{};
  shared_ptr<vector<uint8_t>> data{};

  CloudEvent() {}

  explicit CloudEvent(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!source) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("source is required.")));
    }
    Darabonba::Model::validateMaxLength("source", source, 128);
    if (!type) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("type is required.")));
    }
    Darabonba::Model::validateMaxLength("type", type, 64);
    Darabonba::Model::validateMaxLength("time", time, 64);
    if (!extensions) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("extensions is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (specversion) {
      res["specversion"] = boost::any(*specversion);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (datacontenttype) {
      res["datacontenttype"] = boost::any(*datacontenttype);
    }
    if (dataschema) {
      res["dataschema"] = boost::any(*dataschema);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (extensions) {
      res["extensions"] = boost::any(*extensions);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("specversion") != m.end() && !m["specversion"].empty()) {
      specversion =
          make_shared<string>(boost::any_cast<string>(m["specversion"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("datacontenttype") != m.end() && !m["datacontenttype"].empty()) {
      datacontenttype =
          make_shared<string>(boost::any_cast<string>(m["datacontenttype"]));
    }
    if (m.find("dataschema") != m.end() && !m["dataschema"].empty()) {
      dataschema =
          make_shared<string>(boost::any_cast<string>(m["dataschema"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("extensions") != m.end() && !m["extensions"].empty()) {
      map<string, boost::any> map1 =
          boost::any_cast<map<string, boost::any>>(m["extensions"]);
      map<string, boost::any> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<vector<uint8_t>>(
          boost::any_cast<vector<uint8_t>>(m["data"]));
    }
  }

  virtual ~CloudEvent() = default;
};
class PutEventsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<int> failedEntryCount{};
  shared_ptr<vector<PutEventsResponseEntry>> entryList{};

  PutEventsResponse() {}

  explicit PutEventsResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (failedEntryCount) {
      res["FailedEntryCount"] = boost::any(*failedEntryCount);
    }
    if (entryList) {
      vector<boost::any> temp1;
      for (auto item1 : *entryList) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntryList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("FailedEntryCount") != m.end() &&
        !m["FailedEntryCount"].empty()) {
      failedEntryCount =
          make_shared<int>(boost::any_cast<int>(m["FailedEntryCount"]));
    }
    if (m.find("EntryList") != m.end() && !m["EntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["EntryList"].type()) {
        vector<PutEventsResponseEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["EntryList"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            PutEventsResponseEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entryList = make_shared<vector<PutEventsResponseEntry>>(expect1);
      }
    }
  }

  virtual ~PutEventsResponse() = default;
};
class CreateEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> description{};
  shared_ptr<map<string, string>> tags{};

  CreateEventBusRequest() {}

  explicit CreateEventBusRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    Darabonba::Model::validateMaxLength("eventBusName", eventBusName, 127);
    Darabonba::Model::validateMinLength("eventBusName", eventBusName, 1);
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~CreateEventBusRequest() = default;
};
class CreateEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventBusARN{};

  CreateEventBusResponse() {}

  explicit CreateEventBusResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN =
          make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
  }

  virtual ~CreateEventBusResponse() = default;
};
class DeleteEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  DeleteEventBusRequest() {}

  explicit DeleteEventBusRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }

  virtual ~DeleteEventBusRequest() = default;
};
class DeleteEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DeleteEventBusResponse() {}

  explicit DeleteEventBusResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }

  virtual ~DeleteEventBusResponse() = default;
};
class GetEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  GetEventBusRequest() {}

  explicit GetEventBusRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }

  virtual ~GetEventBusRequest() = default;
};
class GetEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventBusARN{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> description{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<map<string, string>> tags{};

  GetEventBusResponse() {}

  explicit GetEventBusResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBusARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusARN is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("description is required.")));
    }
    if (!createTimestamp) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("createTimestamp is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN =
          make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp =
          make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~GetEventBusResponse() = default;
};
class ListEventBusesRequest : public Darabonba::Model {
public:
  shared_ptr<string> namePrefix{};
  shared_ptr<int> limit{};
  shared_ptr<string> nextToken{};

  ListEventBusesRequest() {}

  explicit ListEventBusesRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namePrefix) {
      res["NamePrefix"] = boost::any(*namePrefix);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamePrefix") != m.end() && !m["NamePrefix"].empty()) {
      namePrefix =
          make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }

  virtual ~ListEventBusesRequest() = default;
};
class EventBusEntry : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventBusARN{};
  shared_ptr<string> description{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<map<string, string>> tags{};

  EventBusEntry() {}

  explicit EventBusEntry(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!eventBusARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusARN is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("description is required.")));
    }
    if (!createTimestamp) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("createTimestamp is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventBusARN) {
      res["EventBusARN"] = boost::any(*eventBusARN);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN =
          make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp =
          make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~EventBusEntry() = default;
};
class ListEventBusesResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EventBusEntry>> eventBuses{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  ListEventBusesResponse() {}

  explicit ListEventBusesResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBuses) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBuses is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("nextToken is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("total is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (eventBuses) {
      vector<boost::any> temp1;
      for (auto item1 : *eventBuses) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventBuses"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBuses") != m.end() && !m["EventBuses"].empty()) {
      if (typeid(vector<boost::any>) == m["EventBuses"].type()) {
        vector<EventBusEntry> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["EventBuses"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventBusEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventBuses = make_shared<vector<EventBusEntry>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }

  virtual ~ListEventBusesResponse() = default;
};
class EBTargetParam : public Darabonba::Model {
public:
  shared_ptr<string> resourceKey{};
  shared_ptr<string> form{};
  shared_ptr<string> value{};
  shared_ptr<string> template_{};

  EBTargetParam() {}

  explicit EBTargetParam(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!resourceKey) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceKey is required.")));
    }
    if (!form) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("form is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceKey) {
      res["ResourceKey"] = boost::any(*resourceKey);
    }
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceKey") != m.end() && !m["ResourceKey"].empty()) {
      resourceKey =
          make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
  }

  virtual ~EBTargetParam() = default;
};
class TargetEntry : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> type{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> pushRetryStrategy{};
  shared_ptr<vector<EBTargetParam>> paramList{};

  TargetEntry() {}

  explicit TargetEntry(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!type) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("type is required.")));
    }
    if (!endpoint) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("endpoint is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for (auto item1 : *paramList) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("PushRetryStrategy") != m.end() &&
        !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy =
          make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<EBTargetParam> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["ParamList"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EBTargetParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<EBTargetParam>>(expect1);
      }
    }
  }

  virtual ~TargetEntry() = default;
};
class CreateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> description{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> status{};
  shared_ptr<string> filterPattern{};
  shared_ptr<vector<TargetEntry>> targets{};
  shared_ptr<map<string, string>> tags{};

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    Darabonba::Model::validateMaxLength("eventBusName", eventBusName, 127);
    Darabonba::Model::validateMinLength("eventBusName", eventBusName, 1);
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("targets is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (targets) {
      vector<boost::any> temp1;
      for (auto item1 : *targets) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern =
          make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Targets"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<TargetEntry>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~CreateRuleRequest() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> ruleARN{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("ruleARN is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
  }

  virtual ~CreateRuleResponse() = default;
};
class DeleteRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  DeleteRuleRequest() {}

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }

  virtual ~DeleteRuleRequest() = default;
};
class DeleteRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DeleteRuleResponse() {}

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }

  virtual ~DeleteRuleResponse() = default;
};
class DisableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  DisableRuleRequest() {}

  explicit DisableRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }

  virtual ~DisableRuleRequest() = default;
};
class DisableRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DisableRuleResponse() {}

  explicit DisableRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }

  virtual ~DisableRuleResponse() = default;
};
class EnableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  EnableRuleRequest() {}

  explicit EnableRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }

  virtual ~EnableRuleRequest() = default;
};
class EnableRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  EnableRuleResponse() {}

  explicit EnableRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }

  virtual ~EnableRuleResponse() = default;
};
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }

  virtual ~GetRuleRequest() = default;
};
class GetRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleARN{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> description{};
  shared_ptr<string> status{};
  shared_ptr<string> filterPattern{};
  shared_ptr<vector<TargetEntry>> targets{};
  shared_ptr<long> ctime{};
  shared_ptr<long> mtime{};
  shared_ptr<map<string, string>> tags{};

  GetRuleResponse() {}

  explicit GetRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("ruleARN is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("description is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!filterPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("filterPattern is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("targets is required.")));
    }
    if (!ctime) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("ctime is required.")));
    }
    if (!mtime) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("mtime is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (targets) {
      vector<boost::any> temp1;
      for (auto item1 : *targets) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (mtime) {
      res["Mtime"] = boost::any(*mtime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern =
          make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Targets"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<TargetEntry>>(expect1);
      }
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<long>(boost::any_cast<long>(m["Ctime"]));
    }
    if (m.find("Mtime") != m.end() && !m["Mtime"].empty()) {
      mtime = make_shared<long>(boost::any_cast<long>(m["Mtime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~GetRuleResponse() = default;
};
class ListRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleNamePrefix{};
  shared_ptr<int> limit{};
  shared_ptr<string> nextToken{};

  ListRulesRequest() {}

  explicit ListRulesRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleNamePrefix) {
      res["RuleNamePrefix"] = boost::any(*ruleNamePrefix);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleNamePrefix") != m.end() && !m["RuleNamePrefix"].empty()) {
      ruleNamePrefix =
          make_shared<string>(boost::any_cast<string>(m["RuleNamePrefix"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }

  virtual ~ListRulesRequest() = default;
};
class EventRuleDTO : public Darabonba::Model {
public:
  shared_ptr<string> ruleARN{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> description{};
  shared_ptr<string> status{};
  shared_ptr<string> filterPattern{};
  shared_ptr<vector<TargetEntry>> targets{};
  shared_ptr<long> ctime{};
  shared_ptr<long> mtime{};
  shared_ptr<map<string, string>> tags{};

  EventRuleDTO() {}

  explicit EventRuleDTO(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("ruleARN is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("description is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!filterPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("filterPattern is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("targets is required.")));
    }
    if (!ctime) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("ctime is required.")));
    }
    if (!mtime) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("mtime is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleARN) {
      res["RuleARN"] = boost::any(*ruleARN);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (targets) {
      vector<boost::any> temp1;
      for (auto item1 : *targets) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (mtime) {
      res["Mtime"] = boost::any(*mtime);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern =
          make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Targets"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<TargetEntry>>(expect1);
      }
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<long>(boost::any_cast<long>(m["Ctime"]));
    }
    if (m.find("Mtime") != m.end() && !m["Mtime"].empty()) {
      mtime = make_shared<long>(boost::any_cast<long>(m["Mtime"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~EventRuleDTO() = default;
};
class ListRulesResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<EventRuleDTO>> rules{};
  shared_ptr<int> total{};

  ListRulesResponse() {}

  explicit ListRulesResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("nextToken is required.")));
    }
    if (!rules) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("rules is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("total is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (rules) {
      vector<boost::any> temp1;
      for (auto item1 : *rules) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<EventRuleDTO> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Rules"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventRuleDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<EventRuleDTO>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }

  virtual ~ListRulesResponse() = default;
};
class UpdateRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> description{};
  shared_ptr<string> status{};
  shared_ptr<string> filterPattern{};
  shared_ptr<map<string, string>> tags{};

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description =
          make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern =
          make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, string> map1 =
          boost::any_cast<map<string, string>>(m["Tags"]);
      map<string, string> toMap1;
      for (auto item : map1) {
        toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
  }

  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  UpdateRuleResponse() {}

  explicit UpdateRuleResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }

  virtual ~UpdateRuleResponse() = default;
};
class CreateTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<vector<TargetEntry>> targets{};

  CreateTargetsRequest() {}

  explicit CreateTargetsRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("targets is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targets) {
      vector<boost::any> temp1;
      for (auto item1 : *targets) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Targets"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<TargetEntry>>(expect1);
      }
    }
  }

  virtual ~CreateTargetsRequest() = default;
};
class TargetResultEntry : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> entryId{};

  TargetResultEntry() {}

  explicit TargetResultEntry(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!errorCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorCode is required.")));
    }
    if (!errorMessage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorMessage is required.")));
    }
    if (!entryId) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("entryId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (entryId) {
      res["EntryId"] = boost::any(*entryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage =
          make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
  }

  virtual ~TargetResultEntry() = default;
};
class CreateTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<int> errorEntriesCount{};
  shared_ptr<vector<TargetResultEntry>> errorEntries{};

  CreateTargetsResponse() {}

  explicit CreateTargetsResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!errorEntriesCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorEntriesCount is required.")));
    }
    if (!errorEntries) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorEntries is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (errorEntriesCount) {
      res["ErrorEntriesCount"] = boost::any(*errorEntriesCount);
    }
    if (errorEntries) {
      vector<boost::any> temp1;
      for (auto item1 : *errorEntries) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorEntries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("ErrorEntriesCount") != m.end() &&
        !m["ErrorEntriesCount"].empty()) {
      errorEntriesCount =
          make_shared<int>(boost::any_cast<int>(m["ErrorEntriesCount"]));
    }
    if (m.find("ErrorEntries") != m.end() && !m["ErrorEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorEntries"].type()) {
        vector<TargetResultEntry> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["ErrorEntries"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetResultEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorEntries = make_shared<vector<TargetResultEntry>>(expect1);
      }
    }
  }

  virtual ~CreateTargetsResponse() = default;
};
class DeleteTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<vector<string>> targetIds{};

  DeleteTargetsRequest() {}

  explicit DeleteTargetsRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
    if (!targetIds) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("targetIds is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (targetIds) {
      res["TargetIds"] = boost::any(*targetIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TargetIds") != m.end() && !m["TargetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetIds"].type()) {
        vector<boost::any> vec1 =
            boost::any_cast<vector<boost::any>>(m["TargetIds"]);
        for (auto item : vec1) {
          toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetIds = make_shared<vector<string>>(toVec1);
    }
  }

  virtual ~DeleteTargetsRequest() = default;
};
class DeleteTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<int> errorEntriesCount{};
  shared_ptr<vector<TargetResultEntry>> errorEntries{};

  DeleteTargetsResponse() {}

  explicit DeleteTargetsResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!errorEntriesCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorEntriesCount is required.")));
    }
    if (!errorEntries) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("errorEntries is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (errorEntriesCount) {
      res["ErrorEntriesCount"] = boost::any(*errorEntriesCount);
    }
    if (errorEntries) {
      vector<boost::any> temp1;
      for (auto item1 : *errorEntries) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorEntries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("ErrorEntriesCount") != m.end() &&
        !m["ErrorEntriesCount"].empty()) {
      errorEntriesCount =
          make_shared<int>(boost::any_cast<int>(m["ErrorEntriesCount"]));
    }
    if (m.find("ErrorEntries") != m.end() && !m["ErrorEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorEntries"].type()) {
        vector<TargetResultEntry> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["ErrorEntries"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetResultEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorEntries = make_shared<vector<TargetResultEntry>>(expect1);
      }
    }
  }

  virtual ~DeleteTargetsResponse() = default;
};
class ListTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};
  shared_ptr<int> limit{};

  ListTargetsRequest() {}

  explicit ListTargetsRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("ruleName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
  }

  virtual ~ListTargetsRequest() = default;
};
class ListTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<TargetEntry>> targets{};

  ListTargetsResponse() {}

  explicit ListTargetsResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("targets is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (targets) {
      vector<boost::any> temp1;
      for (auto item1 : *targets) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for (auto item1 : boost::any_cast<vector<boost::any>>(m["Targets"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            TargetEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<TargetEntry>>(expect1);
      }
    }
  }

  virtual ~ListTargetsResponse() = default;
};
class TestEventPatternRequest : public Darabonba::Model {
public:
  shared_ptr<string> event{};
  shared_ptr<string> eventPattern{};

  TestEventPatternRequest() {}

  explicit TestEventPatternRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!event) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("event is required.")));
    }
    Darabonba::Model::validateMaxLength("event", event, 2048);
    if (!eventPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventPattern is required.")));
    }
    Darabonba::Model::validateMaxLength("eventPattern", eventPattern, 2048);
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (eventPattern) {
      res["EventPattern"] = boost::any(*eventPattern);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("EventPattern") != m.end() && !m["EventPattern"].empty()) {
      eventPattern =
          make_shared<string>(boost::any_cast<string>(m["EventPattern"]));
    }
  }

  virtual ~TestEventPatternRequest() = default;
};
class TestEventPatternResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<bool> result{};

  TestEventPatternResponse() {}

  explicit TestEventPatternResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!result) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("result is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() &&
        !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(
          boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }

  virtual ~TestEventPatternResponse() = default;
};
class QueryEventTracesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};

  QueryEventTracesRequest() {}

  explicit QueryEventTracesRequest(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }

  virtual ~QueryEventTracesRequest() = default;
};
class EventTrace : public Darabonba::Model {
public:
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> action{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> actionTime{};

  EventTrace() {}

  explicit EventTrace(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!resourceOwnerId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("resourceOwnerId is required.")));
    }
    if (!action) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("action is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!actionTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("actionTime is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (actionTime) {
      res["ActionTime"] = boost::any(*actionTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId =
          make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("ActionTime") != m.end() && !m["ActionTime"].empty()) {
      actionTime =
          make_shared<string>(boost::any_cast<string>(m["ActionTime"]));
    }
  }

  virtual ~EventTrace() = default;
};
class QueryEventTracesResponse : public Darabonba::Model {
public:
  shared_ptr<vector<EventTrace>> eventTraceList{};

  QueryEventTracesResponse() {}

  explicit QueryEventTracesResponse(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventTraceList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventTraceList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTraceList) {
      vector<boost::any> temp1;
      for (auto item1 : *eventTraceList) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTraceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTraceList") != m.end() && !m["EventTraceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTraceList"].type()) {
        vector<EventTrace> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["EventTraceList"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventTrace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTraceList = make_shared<vector<EventTrace>>(expect1);
      }
    }
  }

  virtual ~QueryEventTracesResponse() = default;
};
class QueryEventByEventIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventId{};

  QueryEventByEventIdRequest() {}

  explicit QueryEventByEventIdRequest(
      const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource =
          make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }

  virtual ~QueryEventByEventIdRequest() = default;
};
class TracedEvent : public Darabonba::Model {
public:
  shared_ptr<string> eventReceivedTime{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventBusName{};

  TracedEvent() {}

  explicit TracedEvent(const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventReceivedTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventReceivedTime is required.")));
    }
    if (!eventSource) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventSource is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventReceivedTime) {
      res["eventReceivedTime"] = boost::any(*eventReceivedTime);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eventReceivedTime") != m.end() &&
        !m["eventReceivedTime"].empty()) {
      eventReceivedTime =
          make_shared<string>(boost::any_cast<string>(m["eventReceivedTime"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource =
          make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }

  virtual ~TracedEvent() = default;
};
class QueryEventByEventIdResponse : public Darabonba::Model {
public:
  shared_ptr<vector<EventTrace>> tracedEvents{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  QueryEventByEventIdResponse() {}

  explicit QueryEventByEventIdResponse(
      const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!tracedEvents) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("tracedEvents is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("nextToken is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("total is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tracedEvents) {
      vector<boost::any> temp1;
      for (auto item1 : *tracedEvents) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TracedEvents"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TracedEvents") != m.end() && !m["TracedEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["TracedEvents"].type()) {
        vector<EventTrace> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["TracedEvents"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventTrace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tracedEvents = make_shared<vector<EventTrace>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }

  virtual ~QueryEventByEventIdResponse() = default;
};
class QueryEventsByPeriodRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSource{};
  shared_ptr<int> startTime{};
  shared_ptr<int> endTime{};
  shared_ptr<int> limit{};
  shared_ptr<string> nextToken{};

  QueryEventsByPeriodRequest() {}

  explicit QueryEventsByPeriodRequest(
      const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("eventBusName is required.")));
    }
    if (!startTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("startTime is required.")));
    }
    if (!endTime) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("endTime is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName =
          make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource =
          make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<int>(boost::any_cast<int>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<int>(boost::any_cast<int>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }

  virtual ~QueryEventsByPeriodRequest() = default;
};
class QueryEventsByPeriodResponse : public Darabonba::Model {
public:
  shared_ptr<vector<EventTrace>> tracedEvents{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  QueryEventsByPeriodResponse() {}

  explicit QueryEventsByPeriodResponse(
      const std::map<string, boost::any> &config)
      : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!tracedEvents) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("tracedEvents is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(
          std::runtime_error("nextToken is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(
          boost::enable_error_info(std::runtime_error("total is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tracedEvents) {
      vector<boost::any> temp1;
      for (auto item1 : *tracedEvents) {
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TracedEvents"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TracedEvents") != m.end() && !m["TracedEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["TracedEvents"].type()) {
        vector<EventTrace> expect1;
        for (auto item1 :
             boost::any_cast<vector<boost::any>>(m["TracedEvents"])) {
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventTrace model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tracedEvents = make_shared<vector<EventTrace>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }

  virtual ~QueryEventsByPeriodResponse() = default;
};
class Client {
public:
  shared_ptr<string> _protocol{};
  shared_ptr<int> _readTimeout{};
  shared_ptr<int> _connectTimeout{};
  shared_ptr<string> _httpProxy{};
  shared_ptr<string> _httpsProxy{};
  shared_ptr<string> _noProxy{};
  shared_ptr<int> _maxIdleConns{};
  shared_ptr<string> _endpoint{};
  shared_ptr<string> _regionId{};
  shared_ptr<Alibabacloud_Credential::Client> _credential{};
  explicit Client(const shared_ptr<Config> &config);
  map<string, boost::any>
  doRequest(shared_ptr<string> action, shared_ptr<string> protocol,
            shared_ptr<string> method, shared_ptr<string> pathname,
            shared_ptr<map<string, string>> query, const boost::any &body,
            shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEventsResponse putEvents(shared_ptr<vector<CloudEvent>> eventList);
  PutEventsResponse
  putEventsWithOptions(shared_ptr<vector<CloudEvent>> eventList,
                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventBusResponse
  createEventBus(shared_ptr<CreateEventBusRequest> request);
  CreateEventBusResponse
  createEventBusWithOptions(shared_ptr<CreateEventBusRequest> request,
                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventBusResponse
  deleteEventBus(shared_ptr<DeleteEventBusRequest> request);
  DeleteEventBusResponse
  deleteEventBusWithOptions(shared_ptr<DeleteEventBusRequest> request,
                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventBusResponse getEventBus(shared_ptr<GetEventBusRequest> request);
  GetEventBusResponse
  getEventBusWithOptions(shared_ptr<GetEventBusRequest> request,
                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventBusesResponse
  listEventBuses(shared_ptr<ListEventBusesRequest> request);
  ListEventBusesResponse
  listEventBusesWithOptions(shared_ptr<ListEventBusesRequest> request,
                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateRuleResponse
  createRuleWithOptions(shared_ptr<CreateRuleRequest> request,
                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteRuleResponse
  deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request,
                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRuleResponse disableRule(shared_ptr<DisableRuleRequest> request);
  DisableRuleResponse
  disableRuleWithOptions(shared_ptr<DisableRuleRequest> request,
                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRuleResponse enableRule(shared_ptr<EnableRuleRequest> request);
  EnableRuleResponse
  enableRuleWithOptions(shared_ptr<EnableRuleRequest> request,
                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  GetRuleResponse
  getRuleWithOptions(shared_ptr<GetRuleRequest> request,
                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListRulesResponse
  listRulesWithOptions(shared_ptr<ListRulesRequest> request,
                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleResponse updateRule(shared_ptr<UpdateRuleRequest> request);
  UpdateRuleResponse
  updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request,
                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTargetsResponse createTargets(shared_ptr<CreateTargetsRequest> request);
  CreateTargetsResponse
  createTargetsWithOptions(shared_ptr<CreateTargetsRequest> request,
                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTargetsResponse deleteTargets(shared_ptr<DeleteTargetsRequest> request);
  DeleteTargetsResponse
  deleteTargetsWithOptions(shared_ptr<DeleteTargetsRequest> request,
                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetsResponse listTargets(shared_ptr<ListTargetsRequest> request);
  ListTargetsResponse
  listTargetsWithOptions(shared_ptr<ListTargetsRequest> request,
                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestEventPatternResponse
  testEventPattern(shared_ptr<TestEventPatternRequest> request);
  TestEventPatternResponse testEventPatternWithOptions(
      shared_ptr<TestEventPatternRequest> request,
      shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventTracesResponse
  queryEventTraces(shared_ptr<QueryEventTracesRequest> request);
  QueryEventTracesResponse queryEventTracesWithOptions(
      shared_ptr<QueryEventTracesRequest> request,
      shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventByEventIdResponse
  queryEventByEventId(shared_ptr<QueryEventByEventIdRequest> request);
  QueryEventByEventIdResponse queryEventByEventIdWithOptions(
      shared_ptr<QueryEventByEventIdRequest> request,
      shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventsByPeriodResponse
  queryEventsByPeriod(shared_ptr<QueryEventsByPeriodRequest> request);
  QueryEventsByPeriodResponse queryEventsByPeriodWithOptions(
      shared_ptr<QueryEventsByPeriodRequest> request,
      shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EventBridge

#endif
