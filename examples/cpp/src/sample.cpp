// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/event_bridge.hpp>
#include <alibabacloud/sample.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Sample;

Alibabacloud_EventBridge::Client Alibabacloud_Sample::Client::createClient() {
  shared_ptr<Alibabacloud_EventBridge::Config> config =
      std::make_shared<Alibabacloud_EventBridge::Config>();
  // AccessKey ID
  config->accessKeyId = std::make_shared<string>("<accessKeyId>");
  // AccessKey Secret
  config->accessKeySecret = std::make_shared<string>("<accessKeySecret>");
  // 接入点
  config->endpoint = std::make_shared<string>("sdfsf.eventbridge.cn-hangzhou.aliyuncs.com");
  return Alibabacloud_EventBridge::Client(config);
}

void Alibabacloud_Sample::Client::createEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateEventBusRequest>
        createEventBusRequest =
            std::make_shared<Alibabacloud_EventBridge::CreateEventBusRequest>();
    createEventBusRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::CreateEventBusResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::CreateEventBusResponse>(
            client->createEventBus(createEventBusRequest));
    cout <<
        "--------------------Create bus success --------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::deleteEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    // delete
    shared_ptr<Alibabacloud_EventBridge::DeleteEventBusRequest>
        deleteEventBusRequest =
            std::make_shared<Alibabacloud_EventBridge::DeleteEventBusRequest>();
    deleteEventBusRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DeleteEventBusResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::DeleteEventBusResponse>(
            client->deleteEventBus(deleteEventBusRequest));
    cout << "--------------------Delete bus success --------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::getEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::GetEventBusRequest>
        getEventBusRequest =
            std::make_shared<Alibabacloud_EventBridge::GetEventBusRequest>();
    getEventBusRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::GetEventBusResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::GetEventBusResponse>(
            client->getEventBus(getEventBusRequest));
    cout << "--------------------get event bus success --------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::listEventBusesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListEventBusesRequest>
        listEventBusesRequest =
            std::make_shared<Alibabacloud_EventBridge::ListEventBusesRequest>();
    listEventBusesRequest->limit = std::make_shared<int>(100);
    shared_ptr<Alibabacloud_EventBridge::ListEventBusesResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::ListEventBusesResponse>(
            client->listEventBuses(listEventBusesRequest));
    cout << "--------------------list bus success --------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::createEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateRuleRequest>
        createEventRuleRequest =
            std::make_shared<Alibabacloud_EventBridge::CreateRuleRequest>();
    shared_ptr<Alibabacloud_EventBridge::TargetEntry> targetEntry =
        std::make_shared<Alibabacloud_EventBridge::TargetEntry>();
    targetEntry->id = std::make_shared<string>("dingtalk.target");
    targetEntry->endpoint = std::make_shared<string>(
        "https://oapi.dingtalk.com/robot/"
        "send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460");
    targetEntry->type = std::make_shared<string>("acs.dingtalk");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param1 =
        std::make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param1->resourceKey = std::make_shared<string>("URL");
    param1->form = std::make_shared<string>("CONSTANT");
    param1->value = std::make_shared<string>(
        "https://oapi.dingtalk.com/robot/"
        "send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param2 =
        std::make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param2->resourceKey = std::make_shared<string>("SecretKey");
    param2->form = std::make_shared<string>("CONSTANT");
    param2->value = std::make_shared<string>(
        "SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param3 =
        std::make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param3->resourceKey = std::make_shared<string>("Body");
    param3->form = std::make_shared<string>("TEMPLATE");
    param3->value = std::make_shared<string>(
        string("{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}"));
    param3->template_ =
        std::make_shared<string>("{\"msgtype\": \" text \",\" text \": {\" content \": \"Hello：$ { key } \"}}");
    shared_ptr<vector<Alibabacloud_EventBridge::EBTargetParam>> paramList =
        std::make_shared<vector<Alibabacloud_EventBridge::EBTargetParam>>(
            vector<Alibabacloud_EventBridge::EBTargetParam>(
                {*param1, *param2, *param3}));
    targetEntry->paramList = paramList;
    shared_ptr<vector<Alibabacloud_EventBridge::TargetEntry>> targetEntryList =
        std::make_shared<vector<Alibabacloud_EventBridge::TargetEntry>>(
            vector<Alibabacloud_EventBridge::TargetEntry>({*targetEntry}));
    createEventRuleRequest->targets = targetEntryList;
    createEventRuleRequest->ruleName = std::make_shared<string>("myRule");
    createEventRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    createEventRuleRequest->filterPattern =
        std::make_shared<string>(string("{\"source\":[\"acs.oss\"],\"type\":[\"oss:"
                                   "ObjectCreated:UploadPart\"]}"));
    createEventRuleRequest->status = std::make_shared<string>("enable");
    shared_ptr<Alibabacloud_EventBridge::CreateRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::CreateRuleResponse>(
            client->createRule(createEventRuleRequest));
    cout << "--------------------create rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::deleteEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DeleteRuleRequest> deleteRuleRequest =
        std::make_shared<Alibabacloud_EventBridge::DeleteRuleRequest>();
    deleteRuleRequest->ruleName = std::make_shared<string>("myRule");
    deleteRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DeleteRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::DeleteRuleResponse>(
            client->deleteRule(deleteRuleRequest));
    cout << "--------------------delete rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::enableEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::EnableRuleRequest>
        enableEventRuleRequest =
            std::make_shared<Alibabacloud_EventBridge::EnableRuleRequest>();
    enableEventRuleRequest->ruleName = std::make_shared<string>("myRule");
    enableEventRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::EnableRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::EnableRuleResponse>(
            client->enableRule(enableEventRuleRequest));
    cout << "--------------------enable rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::disableEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DisableRuleRequest>
        disableEventRuleRequest =
            std::make_shared<Alibabacloud_EventBridge::DisableRuleRequest>();
    disableEventRuleRequest->ruleName = std::make_shared<string>("myRule");
    disableEventRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DisableRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::DisableRuleResponse>(
            client->disableRule(disableEventRuleRequest));
    cout << "--------------------disable rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::getEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::GetRuleRequest> getEventRuleRequest =
        std::make_shared<Alibabacloud_EventBridge::GetRuleRequest>();
    getEventRuleRequest->ruleName = std::make_shared<string>("myRule");
    getEventRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::GetRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::GetRuleResponse>(
            client->getRule(getEventRuleRequest));
    cout << "--------------------get rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::listEventRulesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListRulesRequest>
        listEventRulesRequest =
            std::make_shared<Alibabacloud_EventBridge::ListRulesRequest>();
    listEventRulesRequest->eventBusName = std::make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::ListRulesResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::ListRulesResponse>(
            client->listRules(listEventRulesRequest));
    cout << "--------------------listRules rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::updateEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::UpdateRuleRequest>
        updateEventRuleRequest =
            std::make_shared<Alibabacloud_EventBridge::UpdateRuleRequest>();
    updateEventRuleRequest->eventBusName = std::make_shared<string>("demo-bus");
    updateEventRuleRequest->ruleName = std::make_shared<string>("myRule");
    updateEventRuleRequest->filterPattern =
        std::make_shared<string>(string("{\"source\":[\"acs.oss\"],\"type\":[\"oss:"
                                   "BucketQueried:GetBucketStat\"]}"));
    shared_ptr<Alibabacloud_EventBridge::UpdateRuleResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::UpdateRuleResponse>(
            client->updateRule(updateEventRuleRequest));
    cout << "--------------------update rule success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::testEventPattern_False(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternRequest> request =
        std::make_shared<Alibabacloud_EventBridge::TestEventPatternRequest>();
    shared_ptr<string> pattern =
        std::make_shared<string>(string("{\n    \"source\": [\"acs.oss\"],\n    "
                                   "\"data\": {\n      \"b\": [1]\n    }\n}"));
    shared_ptr<string> jsonData = std::make_shared<string>(string("{ \
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\", \
        \"source\":\"acs.oss\", \
        \"type\":\"oss:ObjectCreated:PostObject\", \
        \"dataschema\":\"http://taobao.com/test.json\", \
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\", \
        \"aliyuneventbusname\":\"demo-bus\", \
        \"data\":{ \
        \\\"a\\\":\\\"test\\\", \
        \"b\":1}}"));
    request->event = jsonData;
    request->eventPattern = pattern;
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::TestEventPatternResponse>(
            client->testEventPattern(request));
    cout << "--------------------test event pattern --------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
        std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::testEventPattern_True(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternRequest> request =
        std::make_shared<Alibabacloud_EventBridge::TestEventPatternRequest>();
    shared_ptr<string> pattern =
        std::make_shared<string>(string("{\n    \"source\": [\"acs.oss\"],\n    "
                                   "\"data\": {\n      \"b\": [2]\n    }\n}"));
    shared_ptr<string> jsonData = std::make_shared<string>(string("{\
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\
        \"source\":\"acs.oss\",        \
        \"type\":\"oss:ObjectCreated:PostObject\",\
        \"dataschema\":\"http://taobao.com/test.json\",\
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\
        \"aliyuneventbusname\":\"demo-bus\",\
        \"data\":{\
            \"a\":\"test\",\
            \"b\":1}}\
        "));
    request->event = jsonData;
    request->eventPattern = pattern;
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::TestEventPatternResponse>(
            client->testEventPattern(request));
    cout << "--------------------test event pattern --------------------" << endl;
    cout <<
        std::make_shared<string>(Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap()))) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::createTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateTargetsRequest>
        createTargetsRequest =
            std::make_shared<Alibabacloud_EventBridge::CreateTargetsRequest>();
    createTargetsRequest->eventBusName = std::make_shared<string>("demo-bus");
    createTargetsRequest->ruleName = std::make_shared<string>("myRule");
    shared_ptr<Alibabacloud_EventBridge::TargetEntry> targetEntry =
        std::make_shared<Alibabacloud_EventBridge::TargetEntry>();
    targetEntry->id = std::make_shared<string>("1234");
    targetEntry->endpoint = std::make_shared<string>("http://www.baidu.com");
    shared_ptr<vector<Alibabacloud_EventBridge::TargetEntry>> list =
        std::make_shared<vector<Alibabacloud_EventBridge::TargetEntry>>(
            vector<Alibabacloud_EventBridge::TargetEntry>({*targetEntry}));
    createTargetsRequest->targets = list;
    shared_ptr<Alibabacloud_EventBridge::CreateTargetsResponse> response =
        std::make_shared<Alibabacloud_EventBridge::CreateTargetsResponse>(
            client->createTargets(createTargetsRequest));
    cout << "--------------------Create targets success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(response->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::removeTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DeleteTargetsRequest>
        removeTargetsRequest =
            std::make_shared<Alibabacloud_EventBridge::DeleteTargetsRequest>();
    removeTargetsRequest->eventBusName = std::make_shared<string>("demo-bus");
    removeTargetsRequest->ruleName = std::make_shared<string>("myRule");
    shared_ptr<vector<string>> list =
        std::make_shared<vector<string>>(vector<string>({"dingtalk.target"}));
    removeTargetsRequest->targetIds = list;
    shared_ptr<Alibabacloud_EventBridge::DeleteTargetsResponse> response =
        std::make_shared<Alibabacloud_EventBridge::DeleteTargetsResponse>(
            client->deleteTargets(removeTargetsRequest));
    cout << "--------------------remove targets success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(response->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::listTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListTargetsRequest>
        listTargetsRequest =
            std::make_shared<Alibabacloud_EventBridge::ListTargetsRequest>();
    listTargetsRequest->eventBusName = std::make_shared<string>("demo-bus");
    listTargetsRequest->ruleName = std::make_shared<string>("myRule");
    shared_ptr<Alibabacloud_EventBridge::ListTargetsResponse> response =
        std::make_shared<Alibabacloud_EventBridge::ListTargetsResponse>(
            client->listTargets(listTargetsRequest));
    cout << "--------------------list targets success--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(response->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::PutEvents(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::CloudEvent> event =
      std::make_shared<Alibabacloud_EventBridge::CloudEvent>();
  event->datacontenttype = std::make_shared<string>("application/json");
  event->data = std::make_shared<vector<uint8_t>>(
      Darabonba_Util::Client::toBytes(std::make_shared<string>("test")));
  event->id = std::make_shared<string>("a5074581-7e74-4e4c-868f-47e7afdf8445");
  event->source = std::make_shared<string>("acs.oss");
  event->specversion = std::make_shared<string>("1.0");
  event->type = std::make_shared<string>("oss:ObjectCreated:PostObject");
  event->time = std::make_shared<string>("2020-08-24T13:54:05.965Asia/Shanghai");
  event->subject = std::make_shared<string>("1.0");
  event->type = std::make_shared<string>(
      "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg");
  map<string, boost::any> extensions;
  extensions["aliyuneventbusname"] = "demo-bus";
  event->extensions = std::make_shared<map<string, boost::any>>(extensions);
  try {
    shared_ptr<Alibabacloud_EventBridge::PutEventsResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::PutEventsResponse>(
            client->putEvents(
                std::make_shared<vector<Alibabacloud_EventBridge::CloudEvent>>(
                    vector<Alibabacloud_EventBridge::CloudEvent>({*event}))));
    cout << "--------------------Publish event to the aliyun "
                            "EventBus--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap()));
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::queryEventTracesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventTracesRequest> request =
      std::make_shared<Alibabacloud_EventBridge::QueryEventTracesRequest>();
  request->eventId =
      std::make_shared<string>("afhbj4c3-72ce-g9j3-6hcj-0gia021eh5gg");
  request->eventBusName = std::make_shared<string>("demo-bus");
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventTracesResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::QueryEventTracesResponse>(
            client->queryEventTraces(request));
    cout << "--------------------queryEventTraces--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::queryEventByEventIdSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventByEventIdRequest> request =
      std::make_shared<Alibabacloud_EventBridge::QueryEventByEventIdRequest>();
  request->eventId =
      std::make_shared<string>("afhbj4c3-72ce-g9j3-6hcj-0gia021eh5gg");
  request->eventBusName = std::make_shared<string>("demo-bus");
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventByEventIdResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::QueryEventByEventIdResponse>(
            client->queryEventByEventId(request));
    cout << "--------------------queryEventByEventId--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

void Alibabacloud_Sample::Client::queryEventsByPeriodSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventsByPeriodRequest> request =
      std::make_shared<Alibabacloud_EventBridge::QueryEventsByPeriodRequest>();
  request->eventBusName = std::make_shared<string>("demo-bus");
  request->startTime = std::make_shared<long>(1612312407);
  request->endTime = std::make_shared<long>(1612322407);
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventsByPeriodResponse> resp =
        std::make_shared<Alibabacloud_EventBridge::QueryEventsByPeriodResponse>(
            client->queryEventsByPeriod(request));
    cout << "--------------------queryEventsByPeriod--------------------" << endl;
    cout << Darabonba_Util::Client::toJSONString(
            std::make_shared<map<string, boost::any>>(resp->toMap())) << endl;
  } catch ( const boost::exception& e ) {
    std::cerr << boost::diagnostic_information(e);
  }
}

int main(int argc, char *args[]) {
  shared_ptr<Alibabacloud_EventBridge::Client> client =
      std::make_shared<Alibabacloud_EventBridge::Client>(Client::createClient());
  Client::createEventBusSample(client);
  Client::PutEvents(client);
  Alibabacloud_Sample::Client::getEventBusSample(client);
  Client::listEventBusesSample(client);
  Client::createEventRuleSample(client);
  Client::enableEventRuleSample(client);
  Client::disableEventRuleSample(client);
  Client::getEventRuleSample(client);
  Client::listEventRulesSample(client);
  Client::updateEventRuleSample(client);
  Client::testEventPattern_False(client);
  Client::testEventPattern_True(client);
  Client::createTargetsSample(client);
  Client::listTargetsSample(client);
  Client::removeTargetsSample(client);
  Client::deleteEventRuleSample(client);
  Client::deleteEventBusSample(client);
  Client::queryEventTracesSample(client);
  Client::queryEventByEventIdSample(client);
  Client::queryEventsByPeriodSample(client);
}
