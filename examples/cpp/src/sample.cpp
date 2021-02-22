// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/event_bridge.hpp>
#include <alibabacloud/sample.hpp>
#include <darabonba/console.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Sample;

Alibabacloud_EventBridge::Client Alibabacloud_Sample::Client::createClient() {
  shared_ptr<Alibabacloud_EventBridge::Config> config =
      make_shared<Alibabacloud_EventBridge::Config>();
  // AccessKey ID
  config->accessKeyId = make_shared<string>("<accessKeyId>");
  // AccessKey Secret
  config->accessKeySecret = make_shared<string>("<accessKeySecret>");
  // 接入点
  config->endpoint = make_shared<string>("<endpoint>");
  return Alibabacloud_EventBridge::Client(config);
}

void Alibabacloud_Sample::Client::createEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateEventBusRequest>
        createEventBusRequest =
            make_shared<Alibabacloud_EventBridge::CreateEventBusRequest>();
    createEventBusRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::CreateEventBusResponse> resp =
        make_shared<Alibabacloud_EventBridge::CreateEventBusResponse>(
            client->createEventBus(createEventBusRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------Create bus success --------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::deleteEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    // delete
    shared_ptr<Alibabacloud_EventBridge::DeleteEventBusRequest>
        deleteEventBusRequest =
            make_shared<Alibabacloud_EventBridge::DeleteEventBusRequest>();
    deleteEventBusRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DeleteEventBusResponse> resp =
        make_shared<Alibabacloud_EventBridge::DeleteEventBusResponse>(
            client->deleteEventBus(deleteEventBusRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------Delete bus success --------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::getEventBusSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::GetEventBusRequest>
        getEventBusRequest =
            make_shared<Alibabacloud_EventBridge::GetEventBusRequest>();
    getEventBusRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::GetEventBusResponse> resp =
        make_shared<Alibabacloud_EventBridge::GetEventBusResponse>(
            client->getEventBus(getEventBusRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------get event bus success --------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::listEventBusesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListEventBusesRequest>
        listEventBusesRequest =
            make_shared<Alibabacloud_EventBridge::ListEventBusesRequest>();
    listEventBusesRequest->limit = make_shared<int>(100);
    shared_ptr<Alibabacloud_EventBridge::ListEventBusesResponse> resp =
        make_shared<Alibabacloud_EventBridge::ListEventBusesResponse>(
            client->listEventBuses(listEventBusesRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------list bus success --------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::createEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateRuleRequest>
        createEventRuleRequest =
            make_shared<Alibabacloud_EventBridge::CreateRuleRequest>();
    shared_ptr<Alibabacloud_EventBridge::TargetEntry> targetEntry =
        make_shared<Alibabacloud_EventBridge::TargetEntry>();
    targetEntry->id = make_shared<string>("dingtalk.target");
    targetEntry->endpoint = make_shared<string>(
        "https://oapi.dingtalk.com/robot/"
        "send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460");
    targetEntry->type = make_shared<string>("acs.dingtalk");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param1 =
        make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param1->resourceKey = make_shared<string>("URL");
    param1->form = make_shared<string>("CONSTANT");
    param1->value = make_shared<string>(
        "https://oapi.dingtalk.com/robot/"
        "send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param2 =
        make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param2->resourceKey = make_shared<string>("SecretKey");
    param2->form = make_shared<string>("CONSTANT");
    param2->value = make_shared<string>(
        "SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234");
    shared_ptr<Alibabacloud_EventBridge::EBTargetParam> param3 =
        make_shared<Alibabacloud_EventBridge::EBTargetParam>();
    param3->resourceKey = make_shared<string>("Body");
    param3->form = make_shared<string>("TEMPLATE");
    param3->value = make_shared<string>(
        string("{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}"));
    param3->template_ =
        make_shared<string>("{" msgtype ": " text "," text ": {" content
                            ": " Hello：$ { key } "}}");
    shared_ptr<vector<Alibabacloud_EventBridge::EBTargetParam>> paramList =
        make_shared<vector<Alibabacloud_EventBridge::EBTargetParam>>(
            vector<Alibabacloud_EventBridge::EBTargetParam>(
                {param1, param2, param3}));
    targetEntry->paramList = paramList;
    shared_ptr<vector<Alibabacloud_EventBridge::TargetEntry>> targetEntryList =
        make_shared<vector<Alibabacloud_EventBridge::TargetEntry>>(
            vector<Alibabacloud_EventBridge::TargetEntry>({targetEntry}));
    createEventRuleRequest->targets = targetEntryList;
    createEventRuleRequest->ruleName = make_shared<string>("myRule");
    createEventRuleRequest->eventBusName = make_shared<string>("demo-bus");
    createEventRuleRequest->filterPattern =
        make_shared<string>(string("{\"source\":[\"acs.oss\"],\"type\":[\"oss:"
                                   "ObjectCreated:UploadPart\"]}"));
    createEventRuleRequest->status = make_shared<string>("enable");
    shared_ptr<Alibabacloud_EventBridge::CreateRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::CreateRuleResponse>(
            client->createRule(createEventRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------create rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::deleteEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DeleteRuleRequest> deleteRuleRequest =
        make_shared<Alibabacloud_EventBridge::DeleteRuleRequest>();
    deleteRuleRequest->ruleName = make_shared<string>("myRule");
    deleteRuleRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DeleteRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::DeleteRuleResponse>(
            client->deleteRule(deleteRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------delete rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::enableEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::EnableRuleRequest>
        enableEventRuleRequest =
            make_shared<Alibabacloud_EventBridge::EnableRuleRequest>();
    enableEventRuleRequest->ruleName = make_shared<string>("myRule");
    enableEventRuleRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::EnableRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::EnableRuleResponse>(
            client->enableRule(enableEventRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------enable rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::disableEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DisableRuleRequest>
        disableEventRuleRequest =
            make_shared<Alibabacloud_EventBridge::DisableRuleRequest>();
    disableEventRuleRequest->ruleName = make_shared<string>("myRule");
    disableEventRuleRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::DisableRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::DisableRuleResponse>(
            client->disableRule(disableEventRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------disable rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::getEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::GetRuleRequest> getEventRuleRequest =
        make_shared<Alibabacloud_EventBridge::GetRuleRequest>();
    getEventRuleRequest->ruleName = make_shared<string>("myRule");
    getEventRuleRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::GetRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::GetRuleResponse>(
            client->getRule(getEventRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------get rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::listEventRulesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListRulesRequest>
        listEventRulesRequest =
            make_shared<Alibabacloud_EventBridge::ListRulesRequest>();
    listEventRulesRequest->eventBusName = make_shared<string>("demo-bus");
    shared_ptr<Alibabacloud_EventBridge::ListRulesResponse> resp =
        make_shared<Alibabacloud_EventBridge::ListRulesResponse>(
            client->listRules(listEventRulesRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------listRules rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::updateEventRuleSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::UpdateRuleRequest>
        updateEventRuleRequest =
            make_shared<Alibabacloud_EventBridge::UpdateRuleRequest>();
    updateEventRuleRequest->eventBusName = make_shared<string>("demo-bus");
    updateEventRuleRequest->ruleName = make_shared<string>("myRule");
    updateEventRuleRequest->filterPattern =
        make_shared<string>(string("{\"source\":[\"acs.oss\"],\"type\":[\"oss:"
                                   "BucketQueried:GetBucketStat\"]}"));
    shared_ptr<Alibabacloud_EventBridge::UpdateRuleResponse> resp =
        make_shared<Alibabacloud_EventBridge::UpdateRuleResponse>(
            client->updateRule(updateEventRuleRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------update rule success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::testEventPattern_False(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternRequest> request =
        make_shared<Alibabacloud_EventBridge::TestEventPatternRequest>();
    shared_ptr<string> pattern =
        make_shared<string>(string("{\n    \"source\": [\"acs.oss\"],\n    "
                                   "\"data\": {\n      \"b\": [1]\n    }\n}"));
    shared_ptr<string> jsonData = make_shared<string>(string("{
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",
        \"source\":\"acs.oss\",
        \"type\":\"oss:ObjectCreated:PostObject\",
        \"dataschema\":\"http://taobao.com/test.json\",
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",
        \"aliyuneventbusname\":\"demo-bus\",
        \"data\":{
            \"a\":\"test\",
            \"b\":1
  }
}
"));
    request->event = jsonData;
request->eventPattern = pattern;
shared_ptr<Alibabacloud_EventBridge::TestEventPatternResponse> resp =
    make_shared<Alibabacloud_EventBridge::TestEventPatternResponse>(
        client->testEventPattern(request));
Darabonba_Console::Client::log(make_shared<string>(
    "--------------------test event pattern --------------------"));
Darabonba_Console::Client::log(
    make_shared<string>(Darabonba_Util::Client::toJSONString(
        make_shared<map<string, boost::any>>(resp->toMap()))));
}
catch (std::exception &error) {
  Darabonba_Console::Client::log(error.message);
}
}

void Alibabacloud_Sample::Client::testEventPattern_True(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::TestEventPatternRequest> request =
        make_shared<Alibabacloud_EventBridge::TestEventPatternRequest>();
    shared_ptr<string> pattern =
        make_shared<string>(string("{\n    \"source\": [\"acs.oss\"],\n    "
                                   "\"data\": {\n      \"b\": [2]\n    }\n}"));
    shared_ptr<string> jsonData = make_shared<string>(string("{
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",
        \"source\":\"acs.oss\",        
        \"type\":\"oss:ObjectCreated:PostObject\",
        \"dataschema\":\"http://taobao.com/test.json\",
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",
        \"aliyuneventbusname\":\"demo-bus\",
        \"data\":{
            \"a\":\"test\",
            \"b\":1
  }
}
"));
    request->event = jsonData;
request->eventPattern = pattern;
shared_ptr<Alibabacloud_EventBridge::TestEventPatternResponse> resp =
    make_shared<Alibabacloud_EventBridge::TestEventPatternResponse>(
        client->testEventPattern(request));
Darabonba_Console::Client::log(make_shared<string>(
    "--------------------test event pattern --------------------"));
Darabonba_Console::Client::log(
    make_shared<string>(Darabonba_Util::Client::toJSONString(
        make_shared<map<string, boost::any>>(resp->toMap()))));
}
catch (std::exception &error) {
  Darabonba_Console::Client::log(error.message);
}
}

void Alibabacloud_Sample::Client::createTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::CreateTargetsRequest>
        createTargetsRequest =
            make_shared<Alibabacloud_EventBridge::CreateTargetsRequest>();
    createTargetsRequest->eventBusName = make_shared<string>("demo-bus");
    createTargetsRequest->ruleName = make_shared<string>("myRule");
    shared_ptr<Alibabacloud_EventBridge::TargetEntry> targetEntry =
        make_shared<Alibabacloud_EventBridge::TargetEntry>();
    targetEntry->id = make_shared<string>("1234");
    targetEntry->endpoint = make_shared<string>("http://www.baidu.com");
    shared_ptr<vector<Alibabacloud_EventBridge::TargetEntry>> list =
        make_shared<vector<Alibabacloud_EventBridge::TargetEntry>>(
            vector<Alibabacloud_EventBridge::TargetEntry>({targetEntry}));
    createTargetsRequest->targets = list;
    shared_ptr<Alibabacloud_EventBridge::CreateTargetsResponse> response =
        make_shared<Alibabacloud_EventBridge::CreateTargetsResponse>(
            client->createTargets(createTargetsRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------Create targets success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(response->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::removeTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::DeleteTargetsRequest>
        removeTargetsRequest =
            make_shared<Alibabacloud_EventBridge::DeleteTargetsRequest>();
    removeTargetsRequest->eventBusName = make_shared<string>("demo-bus");
    removeTargetsRequest->ruleName = make_shared<string>("myRule");
    shared_ptr<vector<string>> list =
        make_shared<vector<string>>(vector<string>({"dingtalk.target"}));
    removeTargetsRequest->targetIds = list;
    shared_ptr<Alibabacloud_EventBridge::DeleteTargetsResponse> response =
        make_shared<Alibabacloud_EventBridge::DeleteTargetsResponse>(
            client->deleteTargets(removeTargetsRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------remove targets success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(response->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::listTargetsSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  try {
    shared_ptr<Alibabacloud_EventBridge::ListTargetsRequest>
        listTargetsRequest =
            make_shared<Alibabacloud_EventBridge::ListTargetsRequest>();
    listTargetsRequest->eventBusName = make_shared<string>("demo-bus");
    listTargetsRequest->ruleName = make_shared<string>("myRule");
    shared_ptr<Alibabacloud_EventBridge::ListTargetsResponse> response =
        make_shared<Alibabacloud_EventBridge::ListTargetsResponse>(
            client->listTargets(listTargetsRequest));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------list targets success--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(response->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::PutEvents(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::CloudEvent> event =
      make_shared<Alibabacloud_EventBridge::CloudEvent>();
  event->datacontenttype = make_shared<string>("application/json");
  event->data = make_shared<vector<uint8_t>>(
      Darabonba_Util::Client::toBytes(make_shared<string>("test")));
  event->id = make_shared<string>("a5074581-7e74-4e4c-868f-47e7afdf8445");
  event->source = make_shared<string>("acs.oss");
  event->specversion = make_shared<string>("1.0");
  event->type = make_shared<string>("oss:ObjectCreated:PostObject");
  event->time = make_shared<string>("2020-08-24T13:54:05.965Asia/Shanghai");
  event->subject = make_shared<string>("1.0");
  event->type = make_shared<string>(
      "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg");
  event->extensions = make_shared<map<string, string>>(
      map<string, string>({{"aliyuneventbusname", "demo-bus"}}));
  try {
    shared_ptr<Alibabacloud_EventBridge::PutEventsResponse> resp =
        make_shared<Alibabacloud_EventBridge::PutEventsResponse>(
            client->putEvents(
                make_shared<vector<Alibabacloud_EventBridge::CloudEvent>>(
                    vector<Alibabacloud_EventBridge::CloudEvent>({event}))));
    Darabonba_Console::Client::log(
        make_shared<string>("--------------------Publish event to the aliyun "
                            "EventBus--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::queryEventTracesSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventTracesRequest> request =
      make_shared<Alibabacloud_EventBridge::QueryEventTracesRequest>();
  request->eventId =
      make_shared<string>("afhbj4c3-72ce-g9j3-6hcj-0gia021eh5gg");
  request->eventBusName = make_shared<string>("demo-bus");
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventTracesResponse> resp =
        make_shared<Alibabacloud_EventBridge::QueryEventTracesResponse>(
            client->queryEventTraces(request));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------queryEventTraces--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::queryEventByEventIdSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventByEventIdRequest> request =
      make_shared<Alibabacloud_EventBridge::QueryEventByEventIdRequest>();
  request->eventId =
      make_shared<string>("afhbj4c3-72ce-g9j3-6hcj-0gia021eh5gg");
  request->eventBusName = make_shared<string>("demo-bus");
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventByEventIdResponse> resp =
        make_shared<Alibabacloud_EventBridge::QueryEventByEventIdResponse>(
            client->queryEventByEventId(request));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------queryEventByEventId--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::queryEventsByPeriodSample(
    shared_ptr<Alibabacloud_EventBridge::Client> client) {
  shared_ptr<Alibabacloud_EventBridge::QueryEventsByPeriodRequest> request =
      make_shared<Alibabacloud_EventBridge::QueryEventsByPeriodRequest>();
  request->eventBusName = make_shared<string>("demo-bus");
  request->startTime = make_shared<int>(1612312407);
  request->endTime = make_shared<int>(1612322407);
  try {
    shared_ptr<Alibabacloud_EventBridge::QueryEventsByPeriodResponse> resp =
        make_shared<Alibabacloud_EventBridge::QueryEventsByPeriodResponse>(
            client->queryEventsByPeriod(request));
    Darabonba_Console::Client::log(make_shared<string>(
        "--------------------queryEventsByPeriod--------------------"));
    Darabonba_Console::Client::log(
        make_shared<string>(Darabonba_Util::Client::toJSONString(
            make_shared<map<string, boost::any>>(resp->toMap()))));
  } catch (std::exception &error) {
    Darabonba_Console::Client::log(error.message);
  }
}

void Alibabacloud_Sample::Client::main(shared_ptr<vector<string>> args) {
  shared_ptr<Alibabacloud_EventBridge::Client> client =
      make_shared<Alibabacloud_EventBridge::Client>(Client::createClient());
  Client::createEventBusSample(client);
  Client::PutEvents(client);
  Client::getEventBusSample(client);
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
