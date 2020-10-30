#ifndef ALIBABACLOUD_EVENT_BRIDGE_UTIL_TESTS_MOCK_H
#define ALIBABACLOUD_EVENT_BRIDGE_UTIL_TESTS_MOCK_H

#include <darabonba/core.hpp>

class CloudEvent : public Darabonba::Model {
public:
  CloudEvent() {}
  explicit CloudEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!source) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("source is required.")));
    }
    Darabonba::Model::validateMaxLength("source", source, 128);
    if (!type) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("type is required.")));
    }
    Darabonba::Model::validateMaxLength("type", type, 64);
    Darabonba::Model::validateMaxLength("time", time, 64);
    Darabonba::Model::validatePattern("time", time, "[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\\\s\\\\S]*");
    if (!extensions) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("extensions is required.")));
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
    if (m.find("id") != m.end()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("source") != m.end()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("specversion") != m.end()) {
      specversion = make_shared<string>(boost::any_cast<string>(m["specversion"]));
    }
    if (m.find("type") != m.end()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("datacontenttype") != m.end()) {
      datacontenttype = make_shared<string>(boost::any_cast<string>(m["datacontenttype"]));
    }
    if (m.find("dataschema") != m.end()) {
      dataschema = make_shared<string>(boost::any_cast<string>(m["dataschema"]));
    }
    if (m.find("subject") != m.end()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("time") != m.end()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("extensions") != m.end()) {
      extensions = make_shared<map<string, boost::any>>(boost::any_cast<map<string, boost::any>>(m["extensions"]));
    }
    if (m.find("data") != m.end()) {
      data = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["data"]));
    }
  }

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

  ~CloudEvent() = default;
};

#endif //ALIBABACLOUD_EVENT_BRIDGE_UTIL_TESTS_MOCK_H
