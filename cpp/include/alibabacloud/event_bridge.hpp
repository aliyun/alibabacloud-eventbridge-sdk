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

  explicit Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["accessKeyId"]));
    }
    if (m.find("accessKeySecret") != m.end() && !m["accessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["accessKeySecret"]));
    }
    if (m.find("securityToken") != m.end() && !m["securityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["securityToken"]));
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
      connectTimeout = make_shared<int>(boost::any_cast<int>(m["connectTimeout"]));
    }
    if (m.find("httpProxy") != m.end() && !m["httpProxy"].empty()) {
      httpProxy = make_shared<string>(boost::any_cast<string>(m["httpProxy"]));
    }
    if (m.find("httpsProxy") != m.end() && !m["httpsProxy"].empty()) {
      httpsProxy = make_shared<string>(boost::any_cast<string>(m["httpsProxy"]));
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

  explicit PutEventsResponseEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("specversion") != m.end() && !m["specversion"].empty()) {
      specversion = make_shared<string>(boost::any_cast<string>(m["specversion"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("datacontenttype") != m.end() && !m["datacontenttype"].empty()) {
      datacontenttype = make_shared<string>(boost::any_cast<string>(m["datacontenttype"]));
    }
    if (m.find("dataschema") != m.end() && !m["dataschema"].empty()) {
      dataschema = make_shared<string>(boost::any_cast<string>(m["dataschema"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("extensions") != m.end() && !m["extensions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extensions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extensions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["data"]));
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

  explicit PutEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
      for(auto item1:*entryList){
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("FailedEntryCount") != m.end() && !m["FailedEntryCount"].empty()) {
      failedEntryCount = make_shared<int>(boost::any_cast<int>(m["FailedEntryCount"]));
    }
    if (m.find("EntryList") != m.end() && !m["EntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["EntryList"].type()) {
        vector<PutEventsResponseEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntryList"])){
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

  CreateEventBusRequest() {}

  explicit CreateEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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

  explicit CreateEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
  }


  virtual ~CreateEventBusResponse() = default;
};
class EventTypeEntry : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> shortName{};
  shared_ptr<string> groupName{};

  EventTypeEntry() {}

  explicit EventTypeEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!eventSourceName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSourceName is required.")));
    }
    if (!shortName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("shortName is required.")));
    }
    if (!groupName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("groupName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (shortName) {
      res["ShortName"] = boost::any(*shortName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("ShortName") != m.end() && !m["ShortName"].empty()) {
      shortName = make_shared<string>(boost::any_cast<string>(m["ShortName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~EventTypeEntry() = default;
};
class EBAliyunOfficialEventSourceEntry : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> arn{};
  shared_ptr<string> status{};
  shared_ptr<long> ctime{};
  shared_ptr<string> eventBusName{};
  shared_ptr<vector<EventTypeEntry>> eventTypes{};

  EBAliyunOfficialEventSourceEntry() {}

  explicit EBAliyunOfficialEventSourceEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!arn) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("arn is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!ctime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ctime is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!eventTypes) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventTypes is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (arn) {
      res["ARN"] = boost::any(*arn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventTypes) {
      vector<boost::any> temp1;
      for(auto item1:*eventTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTypes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ARN") != m.end() && !m["ARN"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["ARN"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<long>(boost::any_cast<long>(m["Ctime"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventTypes") != m.end() && !m["EventTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTypes"].type()) {
        vector<EventTypeEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventTypeEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventTypes = make_shared<vector<EventTypeEntry>>(expect1);
      }
    }
  }


  virtual ~EBAliyunOfficialEventSourceEntry() = default;
};
class ListAliyunOfficialRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<int> limit{};

  ListAliyunOfficialRequest() {}

  explicit ListAliyunOfficialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
  }


  virtual ~ListAliyunOfficialRequest() = default;
};
class ListAliyunOfficialResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EBAliyunOfficialEventSourceEntry>> eventSourceList{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  ListAliyunOfficialResponse() {}

  explicit ListAliyunOfficialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventSourceList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSourceList is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nextToken is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("total is required.")));
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
    if (eventSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*eventSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventSourceList"] = boost::any(temp1);
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventSourceList") != m.end() && !m["EventSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventSourceList"].type()) {
        vector<EBAliyunOfficialEventSourceEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EBAliyunOfficialEventSourceEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventSourceList = make_shared<vector<EBAliyunOfficialEventSourceEntry>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }


  virtual ~ListAliyunOfficialResponse() = default;
};
class SourceRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> virtualHostName{};
  shared_ptr<string> queueName{};

  SourceRabbitMQParameters() {}

  explicit SourceRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!virtualHostName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("virtualHostName is required.")));
    }
    if (!queueName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("queueName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (virtualHostName) {
      res["VirtualHostName"] = boost::any(*virtualHostName);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      virtualHostName = make_shared<string>(boost::any_cast<string>(m["VirtualHostName"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
  }


  virtual ~SourceRabbitMQParameters() = default;
};
class SourceMNSParameters : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> queueName{};
  shared_ptr<bool> isBase64Decode{};

  SourceMNSParameters() {}

  explicit SourceMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!isBase64Decode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("isBase64Decode is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (isBase64Decode) {
      res["IsBase64Decode"] = boost::any(*isBase64Decode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("IsBase64Decode") != m.end() && !m["IsBase64Decode"].empty()) {
      isBase64Decode = make_shared<bool>(boost::any_cast<bool>(m["IsBase64Decode"]));
    }
  }


  virtual ~SourceMNSParameters() = default;
};
class SourceRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> tag{};
  shared_ptr<int> timestamp{};
  shared_ptr<string> offset{};
  shared_ptr<string> groupID{};

  SourceRocketMQParameters() {}

  explicit SourceRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!groupID) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("groupID is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (groupID) {
      res["GroupID"] = boost::any(*groupID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<int>(boost::any_cast<int>(m["Timestamp"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("GroupID") != m.end() && !m["GroupID"].empty()) {
      groupID = make_shared<string>(boost::any_cast<string>(m["GroupID"]));
    }
  }


  virtual ~SourceRocketMQParameters() = default;
};
class SourceKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<string> InstanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> consumerGroup{};
  shared_ptr<string> offsetRest{};

  SourceKafkaParameters() {}

  explicit SourceKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!consumerGroup) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("consumerGroup is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (InstanceId) {
      res["InstanceId"] = boost::any(*InstanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (consumerGroup) {
      res["ConsumerGroup"] = boost::any(*consumerGroup);
    }
    if (offsetRest) {
      res["OffsetRest"] = boost::any(*offsetRest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      InstanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("ConsumerGroup") != m.end() && !m["ConsumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["ConsumerGroup"]));
    }
    if (m.find("OffsetRest") != m.end() && !m["OffsetRest"].empty()) {
      offsetRest = make_shared<string>(boost::any_cast<string>(m["OffsetRest"]));
    }
  }


  virtual ~SourceKafkaParameters() = default;
};
class EBUserDefinedEventSourceEntry : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> arn{};
  shared_ptr<string> status{};
  shared_ptr<long> ctime{};
  shared_ptr<string> eventBusName{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<SourceKafkaParameters> sourceKafkaParameters{};

  EBUserDefinedEventSourceEntry() {}

  explicit EBUserDefinedEventSourceEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!sourceRocketMQParameters) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sourceRocketMQParameters is required.")));
    }
    if (!sourceKafkaParameters) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sourceKafkaParameters is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (arn) {
      res["ARN"] = boost::any(*arn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ctime) {
      res["Ctime"] = boost::any(*ctime);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ARN") != m.end() && !m["ARN"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["ARN"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Ctime") != m.end() && !m["Ctime"].empty()) {
      ctime = make_shared<long>(boost::any_cast<long>(m["Ctime"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        SourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<SourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        SourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<SourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        SourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<SourceKafkaParameters>(model1);
      }
    }
  }


  virtual ~EBUserDefinedEventSourceEntry() = default;
};
class ListUserDefinedRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> limit{};

  ListUserDefinedRequest() {}

  explicit ListUserDefinedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
  }


  virtual ~ListUserDefinedRequest() = default;
};
class ListUserDefinedResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EBUserDefinedEventSourceEntry>> eventSources{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  ListUserDefinedResponse() {}

  explicit ListUserDefinedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (eventSources) {
      vector<boost::any> temp1;
      for(auto item1:*eventSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventSources"] = boost::any(temp1);
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventSources") != m.end() && !m["EventSources"].empty()) {
      if (typeid(vector<boost::any>) == m["EventSources"].type()) {
        vector<EBUserDefinedEventSourceEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EBUserDefinedEventSourceEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventSources = make_shared<vector<EBUserDefinedEventSourceEntry>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }


  virtual ~ListUserDefinedResponse() = default;
};
class DeleteEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  DeleteEventBusRequest() {}

  explicit DeleteEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
  }


  virtual ~DeleteEventBusRequest() = default;
};
class DeleteEventBusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DeleteEventBusResponse() {}

  explicit DeleteEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~DeleteEventBusResponse() = default;
};
class GetEventBusRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};

  GetEventBusRequest() {}

  explicit GetEventBusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  GetEventBusResponse() {}

  explicit GetEventBusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBusARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusARN is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!createTimestamp) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("createTimestamp is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
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

  explicit ListEventBusesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      namePrefix = make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
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

  EventBusEntry() {}

  explicit EventBusEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!eventBusARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusARN is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!createTimestamp) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("createTimestamp is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
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

  explicit ListEventBusesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBuses) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBuses is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nextToken is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("total is required.")));
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
      for(auto item1:*eventBuses){
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBuses") != m.end() && !m["EventBuses"].empty()) {
      if (typeid(vector<boost::any>) == m["EventBuses"].type()) {
        vector<EventBusEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventBuses"])){
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

  explicit EBTargetParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!resourceKey) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceKey is required.")));
    }
    if (!form) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("form is required.")));
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
      resourceKey = make_shared<string>(boost::any_cast<string>(m["ResourceKey"]));
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

  explicit TargetEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!type) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("type is required.")));
    }
    if (!endpoint) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endpoint is required.")));
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
      for(auto item1:*paramList){
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
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<EBTargetParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
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

  CreateRuleRequest() {}

  explicit CreateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    Darabonba::Model::validateMaxLength("eventBusName", eventBusName, 127);
    Darabonba::Model::validateMinLength("eventBusName", eventBusName, 1);
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
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
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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


  virtual ~CreateRuleRequest() = default;
};
class TracedEvent : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventSource{};
  shared_ptr<long> eventReceivedTime{};

  TracedEvent() {}

  explicit TracedEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
    if (!eventSource) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSource is required.")));
    }
    if (!eventReceivedTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventReceivedTime is required.")));
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
    if (eventSource) {
      res["EventSource"] = boost::any(*eventSource);
    }
    if (eventReceivedTime) {
      res["EventReceivedTime"] = boost::any(*eventReceivedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventReceivedTime") != m.end() && !m["EventReceivedTime"].empty()) {
      eventReceivedTime = make_shared<long>(boost::any_cast<long>(m["EventReceivedTime"]));
    }
  }


  virtual ~TracedEvent() = default;
};
class QueryEventByEventIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSource{};
  shared_ptr<string> eventId{};

  QueryEventByEventIdRequest() {}

  explicit QueryEventByEventIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~QueryEventByEventIdRequest() = default;
};
class QueryEventByEventIdResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<TracedEvent>> tracedEvents{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  QueryEventByEventIdResponse() {}

  explicit QueryEventByEventIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (tracedEvents) {
      vector<boost::any> temp1;
      for(auto item1:*tracedEvents){
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("TracedEvents") != m.end() && !m["TracedEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["TracedEvents"].type()) {
        vector<TracedEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TracedEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TracedEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tracedEvents = make_shared<vector<TracedEvent>>(expect1);
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
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<int> limit{};
  shared_ptr<int> nextToken{};

  QueryEventsByPeriodRequest() {}

  explicit QueryEventsByPeriodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!startTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startTime is required.")));
    }
    if (!endTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endTime is required.")));
    }
    if (!limit) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("limit is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nextToken is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSource") != m.end() && !m["EventSource"].empty()) {
      eventSource = make_shared<string>(boost::any_cast<string>(m["EventSource"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<int>(boost::any_cast<int>(m["NextToken"]));
    }
  }


  virtual ~QueryEventsByPeriodRequest() = default;
};
class QueryEventsByPeriodResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<TracedEvent>> tracedEvents{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  QueryEventsByPeriodResponse() {}

  explicit QueryEventsByPeriodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (tracedEvents) {
      vector<boost::any> temp1;
      for(auto item1:*tracedEvents){
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("TracedEvents") != m.end() && !m["TracedEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["TracedEvents"].type()) {
        vector<TracedEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TracedEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TracedEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tracedEvents = make_shared<vector<TracedEvent>>(expect1);
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
class EventTrace : public Darabonba::Model {
public:
  shared_ptr<string> resourceOwnerId{};
  shared_ptr<string> action{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventBusName{};
  shared_ptr<string> actionTime{};

  EventTrace() {}

  explicit EventTrace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!resourceOwnerId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerId is required.")));
    }
    if (!action) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("action is required.")));
    }
    if (!eventId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventId is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!actionTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("actionTime is required.")));
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
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("ActionTime") != m.end() && !m["ActionTime"].empty()) {
      actionTime = make_shared<string>(boost::any_cast<string>(m["ActionTime"]));
    }
  }


  virtual ~EventTrace() = default;
};
class QueryEventTracesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventId{};

  QueryEventTracesRequest() {}

  explicit QueryEventTracesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~QueryEventTracesRequest() = default;
};
class QueryEventTracesResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EventTrace>> eventTraceList{};

  QueryEventTracesResponse() {}

  explicit QueryEventTracesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (eventTraceList) {
      vector<boost::any> temp1;
      for(auto item1:*eventTraceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventTraceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventTraceList") != m.end() && !m["EventTraceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventTraceList"].type()) {
        vector<EventTrace> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventTraceList"])){
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
class DeleteEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  DeleteEventStreamingRequest() {}

  explicit DeleteEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~DeleteEventStreamingRequest() = default;
};
class DeleteEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DeleteEventStreamingResponse() {}

  explicit DeleteEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~DeleteEventStreamingResponse() = default;
};
class GetEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  GetEventStreamingRequest() {}

  explicit GetEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~GetEventStreamingRequest() = default;
};
class Source : public Darabonba::Model {
public:
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters{};
  shared_ptr<SourceKafkaParameters> sourceKafkaParameters{};

  Source() {}

  explicit Source(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceKafkaParameters) {
      res["SourceKafkaParameters"] = sourceKafkaParameters ? boost::any(sourceKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        SourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<SourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        SourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<SourceRocketMQParameters>(model1);
      }
    }
    if (m.find("SourceKafkaParameters") != m.end() && !m["SourceKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceKafkaParameters"].type()) {
        SourceKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceKafkaParameters"]));
        sourceKafkaParameters = make_shared<SourceKafkaParameters>(model1);
      }
    }
  }


  virtual ~Source() = default;
};
class TargetParameter : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> form{};
  shared_ptr<string> template_{};

  TargetParameter() {}

  explicit TargetParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (form) {
      res["Form"] = boost::any(*form);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
  }


  virtual ~TargetParameter() = default;
};
class SinkMNSParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> QueueName{};
  shared_ptr<TargetParameter> body{};

  SinkMNSParameters() {}

  explicit SinkMNSParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QueueName) {
      res["QueueName"] = QueueName ? boost::any(QueueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        QueueName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<TargetParameter>(model1);
      }
    }
  }


  virtual ~SinkMNSParameters() = default;
};
class SinkRabbitMQParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> instanceId{};
  shared_ptr<TargetParameter> virtualHostName{};
  shared_ptr<TargetParameter> targetType{};
  shared_ptr<TargetParameter> exchange{};
  shared_ptr<TargetParameter> routingKey{};
  shared_ptr<TargetParameter> queueName{};
  shared_ptr<TargetParameter> body{};
  shared_ptr<TargetParameter> messageId{};
  shared_ptr<TargetParameter> properties{};

  SinkRabbitMQParameters() {}

  explicit SinkRabbitMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (virtualHostName) {
      res["VirtualHostName"] = virtualHostName ? boost::any(virtualHostName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = targetType ? boost::any(targetType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (exchange) {
      res["Exchange"] = exchange ? boost::any(exchange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (routingKey) {
      res["RoutingKey"] = routingKey ? boost::any(routingKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = queueName ? boost::any(queueName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (messageId) {
      res["MessageId"] = messageId ? boost::any(messageId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("VirtualHostName") != m.end() && !m["VirtualHostName"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualHostName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualHostName"]));
        virtualHostName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetType"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetType"]));
        targetType = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Exchange") != m.end() && !m["Exchange"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exchange"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exchange"]));
        exchange = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("RoutingKey") != m.end() && !m["RoutingKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoutingKey"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoutingKey"]));
        routingKey = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      if (typeid(map<string, boost::any>) == m["QueueName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QueueName"]));
        queueName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      if (typeid(map<string, boost::any>) == m["MessageId"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MessageId"]));
        messageId = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<TargetParameter>(model1);
      }
    }
  }


  virtual ~SinkRabbitMQParameters() = default;
};
class SinkKafkaParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> instanceId{};
  shared_ptr<TargetParameter> topic{};
  shared_ptr<TargetParameter> acks{};
  shared_ptr<TargetParameter> key{};
  shared_ptr<TargetParameter> value{};

  SinkKafkaParameters() {}

  explicit SinkKafkaParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (acks) {
      res["Acks"] = acks ? boost::any(acks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      res["Key"] = key ? boost::any(key->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Acks") != m.end() && !m["Acks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Acks"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Acks"]));
        acks = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      if (typeid(map<string, boost::any>) == m["Key"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Key"]));
        key = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<TargetParameter>(model1);
      }
    }
  }


  virtual ~SinkKafkaParameters() = default;
};
class SinkRocketMQParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> instanceId{};
  shared_ptr<TargetParameter> topic{};
  shared_ptr<TargetParameter> body{};
  shared_ptr<TargetParameter> properties{};
  shared_ptr<TargetParameter> keys{};
  shared_ptr<TargetParameter> tags{};

  SinkRocketMQParameters() {}

  explicit SinkRocketMQParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (properties) {
      res["Properties"] = properties ? boost::any(properties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["Topic"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Topic"]));
        topic = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      if (typeid(map<string, boost::any>) == m["Properties"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Properties"]));
        properties = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<TargetParameter>(model1);
      }
    }
  }


  virtual ~SinkRocketMQParameters() = default;
};
class SinkFcParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> serviceName{};
  shared_ptr<TargetParameter> functionName{};
  shared_ptr<TargetParameter> body{};
  shared_ptr<TargetParameter> qualifier{};
  shared_ptr<TargetParameter> invocationType{};
  shared_ptr<TargetParameter> batchSize{};
  shared_ptr<map<string, boost::any>> extendConfig{};

  SinkFcParameters() {}

  explicit SinkFcParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = serviceName ? boost::any(serviceName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionName) {
      res["FunctionName"] = functionName ? boost::any(functionName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (qualifier) {
      res["Qualifier"] = qualifier ? boost::any(qualifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invocationType) {
      res["InvocationType"] = invocationType ? boost::any(invocationType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (batchSize) {
      res["BatchSize"] = batchSize ? boost::any(batchSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extendConfig) {
      res["ExtendConfig"] = boost::any(*extendConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceName"]));
        serviceName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionName"]));
        functionName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Qualifier") != m.end() && !m["Qualifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Qualifier"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Qualifier"]));
        qualifier = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("InvocationType") != m.end() && !m["InvocationType"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationType"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationType"]));
        invocationType = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchSize"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchSize"]));
        batchSize = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("ExtendConfig") != m.end() && !m["ExtendConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendConfig = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SinkFcParameters() = default;
};
class SinkOdpsParameters : public Darabonba::Model {
public:
  shared_ptr<TargetParameter> project{};
  shared_ptr<TargetParameter> table{};
  shared_ptr<TargetParameter> roleName{};
  shared_ptr<TargetParameter> format{};
  shared_ptr<TargetParameter> mode{};
  shared_ptr<TargetParameter> partitionWindowType{};
  shared_ptr<TargetParameter> timeZone{};
  shared_ptr<TargetParameter> useStreaming{};
  shared_ptr<map<string, boost::any>> extendConfig{};

  SinkOdpsParameters() {}

  explicit SinkOdpsParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (table) {
      res["Table"] = table ? boost::any(table->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleName) {
      res["RoleName"] = roleName ? boost::any(roleName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (format) {
      res["Format"] = format ? boost::any(format->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mode) {
      res["Mode"] = mode ? boost::any(mode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (partitionWindowType) {
      res["PartitionWindowType"] = partitionWindowType ? boost::any(partitionWindowType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeZone) {
      res["TimeZone"] = timeZone ? boost::any(timeZone->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (useStreaming) {
      res["UseStreaming"] = useStreaming ? boost::any(useStreaming->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extendConfig) {
      res["ExtendConfig"] = boost::any(*extendConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(map<string, boost::any>) == m["Table"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Table"]));
        table = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleName"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleName"]));
        roleName = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      if (typeid(map<string, boost::any>) == m["Format"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Format"]));
        format = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      if (typeid(map<string, boost::any>) == m["Mode"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Mode"]));
        mode = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("PartitionWindowType") != m.end() && !m["PartitionWindowType"].empty()) {
      if (typeid(map<string, boost::any>) == m["PartitionWindowType"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PartitionWindowType"]));
        partitionWindowType = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      if (typeid(map<string, boost::any>) == m["TimeZone"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TimeZone"]));
        timeZone = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("UseStreaming") != m.end() && !m["UseStreaming"].empty()) {
      if (typeid(map<string, boost::any>) == m["UseStreaming"].type()) {
        TargetParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UseStreaming"]));
        useStreaming = make_shared<TargetParameter>(model1);
      }
    }
    if (m.find("ExtendConfig") != m.end() && !m["ExtendConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendConfig = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SinkOdpsParameters() = default;
};
class Sink : public Darabonba::Model {
public:
  shared_ptr<SinkMNSParameters> sinkMNSParameters{};
  shared_ptr<SinkRabbitMQParameters> sinkRabbitMQParameters{};
  shared_ptr<SinkKafkaParameters> sinkKafkaParameters{};
  shared_ptr<SinkRocketMQParameters> sinkRocketMQParameters{};
  shared_ptr<SinkFcParameters> sinkFcParameters{};
  shared_ptr<SinkOdpsParameters> sinkOdpsParameters{};

  Sink() {}

  explicit Sink(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sinkMNSParameters) {
      res["SinkMNSParameters"] = sinkMNSParameters ? boost::any(sinkMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRabbitMQParameters) {
      res["SinkRabbitMQParameters"] = sinkRabbitMQParameters ? boost::any(sinkRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkKafkaParameters) {
      res["SinkKafkaParameters"] = sinkKafkaParameters ? boost::any(sinkKafkaParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkRocketMQParameters) {
      res["SinkRocketMQParameters"] = sinkRocketMQParameters ? boost::any(sinkRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkFcParameters) {
      res["SinkFcParameters"] = sinkFcParameters ? boost::any(sinkFcParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sinkOdpsParameters) {
      res["SinkOdpsParameters"] = sinkOdpsParameters ? boost::any(sinkOdpsParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SinkMNSParameters") != m.end() && !m["SinkMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkMNSParameters"].type()) {
        SinkMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkMNSParameters"]));
        sinkMNSParameters = make_shared<SinkMNSParameters>(model1);
      }
    }
    if (m.find("SinkRabbitMQParameters") != m.end() && !m["SinkRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRabbitMQParameters"].type()) {
        SinkRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRabbitMQParameters"]));
        sinkRabbitMQParameters = make_shared<SinkRabbitMQParameters>(model1);
      }
    }
    if (m.find("SinkKafkaParameters") != m.end() && !m["SinkKafkaParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkKafkaParameters"].type()) {
        SinkKafkaParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkKafkaParameters"]));
        sinkKafkaParameters = make_shared<SinkKafkaParameters>(model1);
      }
    }
    if (m.find("SinkRocketMQParameters") != m.end() && !m["SinkRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkRocketMQParameters"].type()) {
        SinkRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkRocketMQParameters"]));
        sinkRocketMQParameters = make_shared<SinkRocketMQParameters>(model1);
      }
    }
    if (m.find("SinkFcParameters") != m.end() && !m["SinkFcParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkFcParameters"].type()) {
        SinkFcParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkFcParameters"]));
        sinkFcParameters = make_shared<SinkFcParameters>(model1);
      }
    }
    if (m.find("SinkOdpsParameters") != m.end() && !m["SinkOdpsParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SinkOdpsParameters"].type()) {
        SinkOdpsParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SinkOdpsParameters"]));
        sinkOdpsParameters = make_shared<SinkOdpsParameters>(model1);
      }
    }
  }


  virtual ~Sink() = default;
};
class RetryStrategy : public Darabonba::Model {
public:
  shared_ptr<string> pushRetryStrategy{};
  shared_ptr<int> maximumEventAgeInSeconds{};
  shared_ptr<int> maximumRetryAttempts{};

  RetryStrategy() {}

  explicit RetryStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pushRetryStrategy) {
      res["PushRetryStrategy"] = boost::any(*pushRetryStrategy);
    }
    if (maximumEventAgeInSeconds) {
      res["MaximumEventAgeInSeconds"] = boost::any(*maximumEventAgeInSeconds);
    }
    if (maximumRetryAttempts) {
      res["MaximumRetryAttempts"] = boost::any(*maximumRetryAttempts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PushRetryStrategy") != m.end() && !m["PushRetryStrategy"].empty()) {
      pushRetryStrategy = make_shared<string>(boost::any_cast<string>(m["PushRetryStrategy"]));
    }
    if (m.find("MaximumEventAgeInSeconds") != m.end() && !m["MaximumEventAgeInSeconds"].empty()) {
      maximumEventAgeInSeconds = make_shared<int>(boost::any_cast<int>(m["MaximumEventAgeInSeconds"]));
    }
    if (m.find("MaximumRetryAttempts") != m.end() && !m["MaximumRetryAttempts"].empty()) {
      maximumRetryAttempts = make_shared<int>(boost::any_cast<int>(m["MaximumRetryAttempts"]));
    }
  }


  virtual ~RetryStrategy() = default;
};
class DeadLetterQueue : public Darabonba::Model {
public:
  shared_ptr<string> arn{};

  DeadLetterQueue() {}

  explicit DeadLetterQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~DeadLetterQueue() = default;
};
class RunOptions : public Darabonba::Model {
public:
  shared_ptr<int> maximumTasks{};
  shared_ptr<RetryStrategy> retryStrategy{};
  shared_ptr<string> errorsTolerance{};
  shared_ptr<DeadLetterQueue> deadLetterQueue{};

  RunOptions() {}

  explicit RunOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maximumTasks) {
      res["MaximumTasks"] = boost::any(*maximumTasks);
    }
    if (retryStrategy) {
      res["RetryStrategy"] = retryStrategy ? boost::any(retryStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorsTolerance) {
      res["ErrorsTolerance"] = boost::any(*errorsTolerance);
    }
    if (deadLetterQueue) {
      res["DeadLetterQueue"] = deadLetterQueue ? boost::any(deadLetterQueue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaximumTasks") != m.end() && !m["MaximumTasks"].empty()) {
      maximumTasks = make_shared<int>(boost::any_cast<int>(m["MaximumTasks"]));
    }
    if (m.find("RetryStrategy") != m.end() && !m["RetryStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetryStrategy"].type()) {
        RetryStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetryStrategy"]));
        retryStrategy = make_shared<RetryStrategy>(model1);
      }
    }
    if (m.find("ErrorsTolerance") != m.end() && !m["ErrorsTolerance"].empty()) {
      errorsTolerance = make_shared<string>(boost::any_cast<string>(m["ErrorsTolerance"]));
    }
    if (m.find("DeadLetterQueue") != m.end() && !m["DeadLetterQueue"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeadLetterQueue"].type()) {
        DeadLetterQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeadLetterQueue"]));
        deadLetterQueue = make_shared<DeadLetterQueue>(model1);
      }
    }
  }


  virtual ~RunOptions() = default;
};
class GetEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> description{};
  shared_ptr<Source> source{};
  shared_ptr<string> filterPattern{};
  shared_ptr<Sink> sink{};
  shared_ptr<RunOptions> runOptions{};
  shared_ptr<string> tag{};
  shared_ptr<string> status{};

  GetEventStreamingResponse() {}

  explicit GetEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!source) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("source is required.")));
    }
    if (!filterPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("filterPattern is required.")));
    }
    if (!sink) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sink is required.")));
    }
    if (!runOptions) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("runOptions is required.")));
    }
    if (!tag) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("tag is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
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
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        Source model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<Source>(model1);
      }
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        Sink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<Sink>(model1);
      }
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        RunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<RunOptions>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetEventStreamingResponse() = default;
};
class EventStreamingMetric : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<double> tps{};
  shared_ptr<long> delayTime{};
  shared_ptr<long> diffOffset{};
  shared_ptr<long> lastDateSyncTime{};
  shared_ptr<long> lastHeartBeat{};
  shared_ptr<string> status{};

  EventStreamingMetric() {}

  explicit EventStreamingMetric(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tps) {
      res["TPS"] = boost::any(*tps);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (diffOffset) {
      res["DiffOffset"] = boost::any(*diffOffset);
    }
    if (lastDateSyncTime) {
      res["LastDateSyncTime"] = boost::any(*lastDateSyncTime);
    }
    if (lastHeartBeat) {
      res["LastHeartBeat"] = boost::any(*lastHeartBeat);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TPS") != m.end() && !m["TPS"].empty()) {
      tps = make_shared<double>(boost::any_cast<double>(m["TPS"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("DiffOffset") != m.end() && !m["DiffOffset"].empty()) {
      diffOffset = make_shared<long>(boost::any_cast<long>(m["DiffOffset"]));
    }
    if (m.find("LastDateSyncTime") != m.end() && !m["LastDateSyncTime"].empty()) {
      lastDateSyncTime = make_shared<long>(boost::any_cast<long>(m["LastDateSyncTime"]));
    }
    if (m.find("LastHeartBeat") != m.end() && !m["LastHeartBeat"].empty()) {
      lastHeartBeat = make_shared<long>(boost::any_cast<long>(m["LastHeartBeat"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EventStreamingMetric() = default;
};
class ListEventStreamingMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> eventStreamingNames{};

  ListEventStreamingMetricsRequest() {}

  explicit ListEventStreamingMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingNames) {
      res["EventStreamingNames"] = boost::any(*eventStreamingNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingNames") != m.end() && !m["EventStreamingNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EventStreamingNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EventStreamingNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      eventStreamingNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListEventStreamingMetricsRequest() = default;
};
class ListEventStreamingMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EventStreamingMetric>> eventStreamingMetrics{};

  ListEventStreamingMetricsResponse() {}

  explicit ListEventStreamingMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventStreamingMetrics) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingMetrics is required.")));
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
    if (eventStreamingMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*eventStreamingMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventStreamingMetrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventStreamingMetrics") != m.end() && !m["EventStreamingMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["EventStreamingMetrics"].type()) {
        vector<EventStreamingMetric> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventStreamingMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EventStreamingMetric model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventStreamingMetrics = make_shared<vector<EventStreamingMetric>>(expect1);
      }
    }
  }


  virtual ~ListEventStreamingMetricsResponse() = default;
};
class EBEventSourceEntry : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> New_{};
  shared_ptr<string> description{};
  shared_ptr<string> externalSourceType{};
  shared_ptr<map<string, boost::any>> externalSourceConfig{};

  EBEventSourceEntry() {}

  explicit EBEventSourceEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!New_) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("New is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!externalSourceType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("externalSourceType is required.")));
    }
    if (!externalSourceConfig) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("externalSourceConfig is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (New_) {
      res["IsNew"] = boost::any(*New_);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (externalSourceType) {
      res["ExternalSourceType"] = boost::any(*externalSourceType);
    }
    if (externalSourceConfig) {
      res["ExternalSourceConfig"] = boost::any(*externalSourceConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IsNew") != m.end() && !m["IsNew"].empty()) {
      New_ = make_shared<bool>(boost::any_cast<bool>(m["IsNew"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExternalSourceType") != m.end() && !m["ExternalSourceType"].empty()) {
      externalSourceType = make_shared<string>(boost::any_cast<string>(m["ExternalSourceType"]));
    }
    if (m.find("ExternalSourceConfig") != m.end() && !m["ExternalSourceConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExternalSourceConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      externalSourceConfig = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~EBEventSourceEntry() = default;
};
class SaveAndStartEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> EBEventSourceEntry{};
  shared_ptr<string> filterPattern{};
  shared_ptr<vector<TargetEntry>> targets{};

  SaveAndStartEventStreamingRequest() {}

  explicit SaveAndStartEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (EBEventSourceEntry) {
      res["EBEventSourceEntry"] = boost::any(*EBEventSourceEntry);
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EBEventSourceEntry") != m.end() && !m["EBEventSourceEntry"].empty()) {
      EBEventSourceEntry = make_shared<string>(boost::any_cast<string>(m["EBEventSourceEntry"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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


  virtual ~SaveAndStartEventStreamingRequest() = default;
};
class SaveAndStartEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventStreamingARN{};

  SaveAndStartEventStreamingResponse() {}

  explicit SaveAndStartEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventStreamingARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingARN is required.")));
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
    if (eventStreamingARN) {
      res["EventStreamingARN"] = boost::any(*eventStreamingARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventStreamingARN") != m.end() && !m["EventStreamingARN"].empty()) {
      eventStreamingARN = make_shared<string>(boost::any_cast<string>(m["EventStreamingARN"]));
    }
  }


  virtual ~SaveAndStartEventStreamingResponse() = default;
};
class CreateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> ruleARN{};

  CreateRuleResponse() {}

  explicit CreateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleARN is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
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

  explicit DeleteRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  explicit DeleteRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~DeleteRuleResponse() = default;
};
class DisableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  DisableRuleRequest() {}

  explicit DisableRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  explicit DisableRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~DisableRuleResponse() = default;
};
class EnableRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  EnableRuleRequest() {}

  explicit EnableRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  explicit EnableRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~EnableRuleResponse() = default;
};
class UpdateEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> description{};
  shared_ptr<Source> Source{};
  shared_ptr<string> filterPattern{};
  shared_ptr<Sink> Sink{};
  shared_ptr<RunOptions> runOptions{};
  shared_ptr<string> tag{};

  UpdateEventStreamingRequest() {}

  explicit UpdateEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (Source) {
      res["Source"] = Source ? boost::any(Source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (Sink) {
      res["Sink"] = Sink ? boost::any(Sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        Source model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        Source = make_shared<Source>(model1);
      }
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        Sink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        Sink = make_shared<Sink>(model1);
      }
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        RunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<RunOptions>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~UpdateEventStreamingRequest() = default;
};
class UpdateEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  UpdateEventStreamingResponse() {}

  explicit UpdateEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~UpdateEventStreamingResponse() = default;
};
class StartEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  StartEventStreamingRequest() {}

  explicit StartEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~StartEventStreamingRequest() = default;
};
class StartEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  StartEventStreamingResponse() {}

  explicit StartEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~StartEventStreamingResponse() = default;
};
class PauseEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};

  PauseEventStreamingRequest() {}

  explicit PauseEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventStreamingName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventStreamingName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
  }


  virtual ~PauseEventStreamingRequest() = default;
};
class PauseEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  PauseEventStreamingResponse() {}

  explicit PauseEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~PauseEventStreamingResponse() = default;
};
class EBEventStreamingEntry : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> description{};
  shared_ptr<Source> source{};
  shared_ptr<string> filterPattern{};
  shared_ptr<Sink> sink{};
  shared_ptr<RunOptions> runOptions{};
  shared_ptr<string> tag{};
  shared_ptr<string> status{};

  EBEventStreamingEntry() {}

  explicit EBEventStreamingEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        Source model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<Source>(model1);
      }
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        Sink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<Sink>(model1);
      }
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        RunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<RunOptions>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EBEventStreamingEntry() = default;
};
class ListEventStreamingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> namePrefix{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sinkType{};
  shared_ptr<int> limit{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> tag{};

  ListEventStreamingsRequest() {}

  explicit ListEventStreamingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namePrefix) {
      res["NamePrefix"] = boost::any(*namePrefix);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamePrefix") != m.end() && !m["NamePrefix"].empty()) {
      namePrefix = make_shared<string>(boost::any_cast<string>(m["NamePrefix"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<int>(boost::any_cast<int>(m["Limit"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListEventStreamingsRequest() = default;
};
class ListEventStreamingsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<vector<EBEventStreamingEntry>> eventStreamings{};
  shared_ptr<string> nextToken{};
  shared_ptr<int> total{};

  ListEventStreamingsResponse() {}

  explicit ListEventStreamingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (eventStreamings) {
      vector<boost::any> temp1;
      for(auto item1:*eventStreamings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventStreamings"] = boost::any(temp1);
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventStreamings") != m.end() && !m["EventStreamings"].empty()) {
      if (typeid(vector<boost::any>) == m["EventStreamings"].type()) {
        vector<EBEventStreamingEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventStreamings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EBEventStreamingEntry model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventStreamings = make_shared<vector<EBEventStreamingEntry>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<int>(boost::any_cast<int>(m["Total"]));
    }
  }


  virtual ~ListEventStreamingsResponse() = default;
};
class CreateEventStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventStreamingName{};
  shared_ptr<string> description{};
  shared_ptr<Source> source{};
  shared_ptr<string> filterPattern{};
  shared_ptr<Sink> sink{};
  shared_ptr<RunOptions> runOptions{};
  shared_ptr<string> tag{};

  CreateEventStreamingRequest() {}

  explicit CreateEventStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventStreamingName) {
      res["EventStreamingName"] = boost::any(*eventStreamingName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filterPattern) {
      res["FilterPattern"] = boost::any(*filterPattern);
    }
    if (sink) {
      res["Sink"] = sink ? boost::any(sink->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runOptions) {
      res["RunOptions"] = runOptions ? boost::any(runOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventStreamingName") != m.end() && !m["EventStreamingName"].empty()) {
      eventStreamingName = make_shared<string>(boost::any_cast<string>(m["EventStreamingName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        Source model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<Source>(model1);
      }
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Sink") != m.end() && !m["Sink"].empty()) {
      if (typeid(map<string, boost::any>) == m["Sink"].type()) {
        Sink model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Sink"]));
        sink = make_shared<Sink>(model1);
      }
    }
    if (m.find("RunOptions") != m.end() && !m["RunOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["RunOptions"].type()) {
        RunOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RunOptions"]));
        runOptions = make_shared<RunOptions>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateEventStreamingRequest() = default;
};
class CreateEventStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventStreamingARN{};

  CreateEventStreamingResponse() {}

  explicit CreateEventStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (eventStreamingARN) {
      res["EventStreamingARN"] = boost::any(*eventStreamingARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventStreamingARN") != m.end() && !m["EventStreamingARN"].empty()) {
      eventStreamingARN = make_shared<string>(boost::any_cast<string>(m["EventStreamingARN"]));
    }
  }


  virtual ~CreateEventStreamingResponse() = default;
};
class CreateEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceRocketMQParameters> SourceRocketMQParameters{};

  CreateEventSourceRequest() {}

  explicit CreateEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventSourceName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSourceName is required.")));
    }
    Darabonba::Model::validateMaxLength("eventSourceName", eventSourceName, 127);
    Darabonba::Model::validateMinLength("eventSourceName", eventSourceName, 1);
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (SourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = SourceRocketMQParameters ? boost::any(SourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        SourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<SourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        SourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        SourceRocketMQParameters = make_shared<SourceRocketMQParameters>(model1);
      }
    }
  }


  virtual ~CreateEventSourceRequest() = default;
};
class CreateEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventSourceARN{};

  CreateEventSourceResponse() {}

  explicit CreateEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (eventSourceARN) {
      res["EventSourceARN"] = boost::any(*eventSourceARN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventSourceARN") != m.end() && !m["EventSourceARN"].empty()) {
      eventSourceARN = make_shared<string>(boost::any_cast<string>(m["EventSourceARN"]));
    }
  }


  virtual ~CreateEventSourceResponse() = default;
};
class DeleteEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> eventSourceName{};

  DeleteEventSourceRequest() {}

  explicit DeleteEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventSourceName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSourceName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
  }


  virtual ~DeleteEventSourceRequest() = default;
};
class DeleteEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  DeleteEventSourceResponse() {}

  explicit DeleteEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~DeleteEventSourceResponse() = default;
};
class UpdateEventSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventSourceName{};
  shared_ptr<string> description{};
  shared_ptr<string> eventBusName{};
  shared_ptr<SourceRabbitMQParameters> sourceRabbitMQParameters{};
  shared_ptr<SourceMNSParameters> sourceMNSParameters{};
  shared_ptr<SourceRocketMQParameters> sourceRocketMQParameters{};

  UpdateEventSourceRequest() {}

  explicit UpdateEventSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventSourceName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventSourceName is required.")));
    }
    Darabonba::Model::validateMaxLength("eventSourceName", eventSourceName, 127);
    Darabonba::Model::validateMinLength("eventSourceName", eventSourceName, 1);
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSourceName) {
      res["EventSourceName"] = boost::any(*eventSourceName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eventBusName) {
      res["EventBusName"] = boost::any(*eventBusName);
    }
    if (sourceRabbitMQParameters) {
      res["SourceRabbitMQParameters"] = sourceRabbitMQParameters ? boost::any(sourceRabbitMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceMNSParameters) {
      res["SourceMNSParameters"] = sourceMNSParameters ? boost::any(sourceMNSParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceRocketMQParameters) {
      res["SourceRocketMQParameters"] = sourceRocketMQParameters ? boost::any(sourceRocketMQParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSourceName") != m.end() && !m["EventSourceName"].empty()) {
      eventSourceName = make_shared<string>(boost::any_cast<string>(m["EventSourceName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("SourceRabbitMQParameters") != m.end() && !m["SourceRabbitMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRabbitMQParameters"].type()) {
        SourceRabbitMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRabbitMQParameters"]));
        sourceRabbitMQParameters = make_shared<SourceRabbitMQParameters>(model1);
      }
    }
    if (m.find("SourceMNSParameters") != m.end() && !m["SourceMNSParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceMNSParameters"].type()) {
        SourceMNSParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceMNSParameters"]));
        sourceMNSParameters = make_shared<SourceMNSParameters>(model1);
      }
    }
    if (m.find("SourceRocketMQParameters") != m.end() && !m["SourceRocketMQParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceRocketMQParameters"].type()) {
        SourceRocketMQParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceRocketMQParameters"]));
        sourceRocketMQParameters = make_shared<SourceRocketMQParameters>(model1);
      }
    }
  }


  virtual ~UpdateEventSourceRequest() = default;
};
class UpdateEventSourceResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  UpdateEventSourceResponse() {}

  explicit UpdateEventSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~UpdateEventSourceResponse() = default;
};
class GetRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventBusName{};
  shared_ptr<string> ruleName{};

  GetRuleRequest() {}

  explicit GetRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  GetRuleResponse() {}

  explicit GetRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleARN is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!filterPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("filterPattern is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
    }
    if (!ctime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ctime is required.")));
    }
    if (!mtime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("mtime is required.")));
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
      for(auto item1:*targets){
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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

  explicit ListRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleNamePrefix") != m.end() && !m["RuleNamePrefix"].empty()) {
      ruleNamePrefix = make_shared<string>(boost::any_cast<string>(m["RuleNamePrefix"]));
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

  EventRuleDTO() {}

  explicit EventRuleDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!ruleARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleARN is required.")));
    }
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
    }
    if (!description) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("description is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!filterPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("filterPattern is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
    }
    if (!ctime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ctime is required.")));
    }
    if (!mtime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("mtime is required.")));
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
      for(auto item1:*targets){
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleARN") != m.end() && !m["RuleARN"].empty()) {
      ruleARN = make_shared<string>(boost::any_cast<string>(m["RuleARN"]));
    }
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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

  explicit ListRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!nextToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nextToken is required.")));
    }
    if (!rules) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("rules is required.")));
    }
    if (!total) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("total is required.")));
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
      for(auto item1:*rules){
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<EventRuleDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
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

  UpdateRuleRequest() {}

  explicit UpdateRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FilterPattern") != m.end() && !m["FilterPattern"].empty()) {
      filterPattern = make_shared<string>(boost::any_cast<string>(m["FilterPattern"]));
    }
  }


  virtual ~UpdateRuleRequest() = default;
};
class UpdateRuleResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};

  UpdateRuleResponse() {}

  explicit UpdateRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
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

  explicit CreateTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
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
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBusName") != m.end() && !m["EventBusName"].empty()) {
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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
class CreateTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<string> eventBusARN{};

  CreateTargetsResponse() {}

  explicit CreateTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!eventBusARN) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusARN is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("EventBusARN") != m.end() && !m["EventBusARN"].empty()) {
      eventBusARN = make_shared<string>(boost::any_cast<string>(m["EventBusARN"]));
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

  explicit DeleteTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
    }
    if (!targetIds) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targetIds is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("TargetIds") != m.end() && !m["TargetIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TargetIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TargetIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      targetIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteTargetsRequest() = default;
};
class TargetResultEntry : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> entryId{};

  TargetResultEntry() {}

  explicit TargetResultEntry(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!errorCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("errorCode is required.")));
    }
    if (!errorMessage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("errorMessage is required.")));
    }
    if (!entryId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("entryId is required.")));
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
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
  }


  virtual ~TargetResultEntry() = default;
};
class DeleteTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<int> errorEntriesCount{};
  shared_ptr<vector<TargetResultEntry>> errorEntries{};

  DeleteTargetsResponse() {}

  explicit DeleteTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!errorEntriesCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("errorEntriesCount is required.")));
    }
    if (!errorEntries) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("errorEntries is required.")));
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
      for(auto item1:*errorEntries){
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("ErrorEntriesCount") != m.end() && !m["ErrorEntriesCount"].empty()) {
      errorEntriesCount = make_shared<int>(boost::any_cast<int>(m["ErrorEntriesCount"]));
    }
    if (m.find("ErrorEntries") != m.end() && !m["ErrorEntries"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorEntries"].type()) {
        vector<TargetResultEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorEntries"])){
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

  explicit ListTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!eventBusName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventBusName is required.")));
    }
    if (!ruleName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ruleName is required.")));
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
      eventBusName = make_shared<string>(boost::any_cast<string>(m["EventBusName"]));
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

  explicit ListTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!targets) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("targets is required.")));
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
      for(auto item1:*targets){
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<TargetEntry> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
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

  explicit TestEventPatternRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!event) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("event is required.")));
    }
    Darabonba::Model::validateMaxLength("event", event, 2048);
    if (!eventPattern) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("eventPattern is required.")));
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
      eventPattern = make_shared<string>(boost::any_cast<string>(m["EventPattern"]));
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

  explicit TestEventPatternResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!result) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("result is required.")));
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
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~TestEventPatternResponse() = default;
};
class QueryEventBridgeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceOwnerAccountId{};

  QueryEventBridgeStatusRequest() {}

  explicit QueryEventBridgeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerAccountId) {
      res["ResourceOwnerAccountId"] = boost::any(*resourceOwnerAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
  }


  virtual ~QueryEventBridgeStatusRequest() = default;
};
class QueryEventBridgeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceOwnerAccountId{};
  shared_ptr<bool> defaultBusEnable{};

  QueryEventBridgeStatusResponse() {}

  explicit QueryEventBridgeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resourceOwnerAccountId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resourceOwnerAccountId is required.")));
    }
    if (!defaultBusEnable) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("defaultBusEnable is required.")));
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
    if (defaultBusEnable) {
      res["DefaultBusEnable"] = boost::any(*defaultBusEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceOwnerAccountId") != m.end() && !m["ResourceOwnerAccountId"].empty()) {
      resourceOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccountId"]));
    }
    if (m.find("DefaultBusEnable") != m.end() && !m["DefaultBusEnable"].empty()) {
      defaultBusEnable = make_shared<bool>(boost::any_cast<bool>(m["DefaultBusEnable"]));
    }
  }


  virtual ~QueryEventBridgeStatusResponse() = default;
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
  explicit Client(const shared_ptr<Config>& config);
  map<string, boost::any> doRequest(shared_ptr<string> action,
                                    shared_ptr<string> protocol,
                                    shared_ptr<string> method,
                                    shared_ptr<string> pathname,
                                    shared_ptr<map<string, string>> query,
                                    const boost::any &body,
                                    shared_ptr<map<string, string>> headers,
                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEventsResponse putEvents(shared_ptr<vector<CloudEvent>> eventList);
  PutEventsResponse putEventsWithOptions(shared_ptr<vector<CloudEvent>> eventList, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutEventsResponse putEventsToAccount(shared_ptr<string> accoutid, shared_ptr<vector<CloudEvent>> eventList);
  PutEventsResponse putEventsToAccountWithOptions(shared_ptr<string> accoutid, shared_ptr<vector<CloudEvent>> eventList, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventBusResponse createEventBus(shared_ptr<CreateEventBusRequest> request);
  CreateEventBusResponse createEventBusWithOptions(shared_ptr<CreateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAliyunOfficialResponse listAliyunOfficialEventSources(shared_ptr<ListAliyunOfficialRequest> request);
  ListAliyunOfficialResponse listAliyunOfficialEventSourcesWithOptions(shared_ptr<ListAliyunOfficialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserDefinedResponse listUserDefinedEventSources(shared_ptr<ListUserDefinedRequest> request);
  ListUserDefinedResponse listUserDefinedEventSourcesWithOptions(shared_ptr<ListUserDefinedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventBusResponse deleteEventBus(shared_ptr<DeleteEventBusRequest> request);
  DeleteEventBusResponse deleteEventBusWithOptions(shared_ptr<DeleteEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventBusResponse getEventBus(shared_ptr<GetEventBusRequest> request);
  GetEventBusResponse getEventBusWithOptions(shared_ptr<GetEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventBusesResponse listEventBuses(shared_ptr<ListEventBusesRequest> request);
  ListEventBusesResponse listEventBusesWithOptions(shared_ptr<ListEventBusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventByEventIdResponse queryEventByEventId(shared_ptr<QueryEventByEventIdRequest> request);
  QueryEventByEventIdResponse queryEventByEventIdWithOptions(shared_ptr<QueryEventByEventIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventsByPeriodResponse queryEventsByPeriod(shared_ptr<QueryEventsByPeriodRequest> request);
  QueryEventsByPeriodResponse queryEventsByPeriodWithOptions(shared_ptr<QueryEventsByPeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventTracesResponse queryEventTraces(shared_ptr<QueryEventTracesRequest> request);
  QueryEventTracesResponse queryEventTracesWithOptions(shared_ptr<QueryEventTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventStreamingResponse deleteEventStreaming(shared_ptr<DeleteEventStreamingRequest> request);
  DeleteEventStreamingResponse deleteEventStreamingWithOptions(shared_ptr<DeleteEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEventStreamingResponse getEventStreaming(shared_ptr<GetEventStreamingRequest> request);
  GetEventStreamingResponse getEventStreamingWithOptions(shared_ptr<GetEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEventStreamingMetricsResponse listEventStreamingMetrics(shared_ptr<ListEventStreamingMetricsRequest> request);
  ListEventStreamingMetricsResponse listEventStreamingMetricsWithOptions(shared_ptr<ListEventStreamingMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveAndStartEventStreamingResponse saveAndStartEventStreaming(shared_ptr<SaveAndStartEventStreamingRequest> request);
  SaveAndStartEventStreamingResponse saveAndStartEventStreamingWithOptions(shared_ptr<SaveAndStartEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRuleResponse createRule(shared_ptr<CreateRuleRequest> request);
  CreateRuleResponse createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRuleResponse deleteRule(shared_ptr<DeleteRuleRequest> request);
  DeleteRuleResponse deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableRuleResponse disableRule(shared_ptr<DisableRuleRequest> request);
  DisableRuleResponse disableRuleWithOptions(shared_ptr<DisableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableRuleResponse enableRule(shared_ptr<EnableRuleRequest> request);
  EnableRuleResponse enableRuleWithOptions(shared_ptr<EnableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventStreamingResponse updateEventStreaming(shared_ptr<UpdateEventStreamingRequest> request);
  UpdateEventStreamingResponse updateEventStreamingWithOptions(shared_ptr<UpdateEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartEventStreamingResponse startEventStreaming(shared_ptr<StartEventStreamingRequest> request);
  StartEventStreamingResponse startEventStreamingsWithOptions(shared_ptr<StartEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseEventStreamingResponse pauseEventStreaming(shared_ptr<PauseEventStreamingRequest> request);
  PauseEventStreamingResponse pauseEventStreamingWithOptions(shared_ptr<PauseEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  listEventStreamingsResponse listEventStreamings(shared_ptr<listEventStreamingsRequest> request);
  listEventStreamingsResponse listEventStreamingsWithOptions(shared_ptr<listEventStreamingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventStreamingResponse createEventStreaming(shared_ptr<CreateEventStreamingRequest> request);
  CreateEventStreamingResponse createEventStreamingWithOptions(shared_ptr<CreateEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventSourceResponse createEventSource(shared_ptr<CreateEventSourceRequest> request);
  CreateEventSourceResponse createEventSourceWithOptions(shared_ptr<CreateEventSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventSourceResponse deleteEventSource(shared_ptr<DeleteEventSourceRequest> request);
  DeleteEventSourceResponse deleteEventSourceWithOptions(shared_ptr<DeleteEventSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventSourceResponse updateEventSource(shared_ptr<UpdateEventSourceRequest> request);
  UpdateEventSourceResponse updateEventSourceWithOptions(shared_ptr<UpdateEventSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRuleResponse getRule(shared_ptr<GetRuleRequest> request);
  GetRuleResponse getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRulesResponse listRules(shared_ptr<ListRulesRequest> request);
  ListRulesResponse listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRuleResponse updateRule(shared_ptr<UpdateRuleRequest> request);
  UpdateRuleResponse updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTargetsResponse createTargets(shared_ptr<CreateTargetsRequest> request);
  CreateTargetsResponse createTargetsWithOptions(shared_ptr<CreateTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTargetsResponse deleteTargets(shared_ptr<DeleteTargetsRequest> request);
  DeleteTargetsResponse deleteTargetsWithOptions(shared_ptr<DeleteTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTargetsResponse listTargets(shared_ptr<ListTargetsRequest> request);
  ListTargetsResponse listTargetsWithOptions(shared_ptr<ListTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestEventPatternResponse testEventPattern(shared_ptr<TestEventPatternRequest> request);
  TestEventPatternResponse testEventPatternWithOptions(shared_ptr<TestEventPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventBridgeStatusResponse queryEventBridgeStatus(shared_ptr<QueryEventBridgeStatusRequest> request);
  QueryEventBridgeStatusResponse queryEventBridgeStatusWithOptions(shared_ptr<QueryEventBridgeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EventBridge

#endif
