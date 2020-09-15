// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge;

import java.util.List;

import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.CreateEventBusResponse;
import com.aliyun.eventbridge.models.DeleteEventBusResponse;
import com.aliyun.eventbridge.models.DeleteRuleResponse;
import com.aliyun.eventbridge.models.DisableRuleResponse;
import com.aliyun.eventbridge.models.EBTargetParam;
import com.aliyun.eventbridge.models.EnableRuleResponse;
import com.aliyun.eventbridge.models.TargetEntry;
import com.aliyun.eventbridge.models.UpdateRuleResponse;
import com.aliyun.tea.TeaConverter;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.TeaPair;
import com.google.common.collect.Lists;

public class ClientTest {

    /**
     * Create client  初始化公共请求参数
     */
    public static com.aliyun.eventbridge.EventBridge createClient() {
        Config config = new Config();
        config.setAccessKeyId(System.getenv("accessKeyId"))
            .setAccessKeySecret(System.getenv("accessKeySecret"))
            .setEndpoint(System.getenv("endpoint"));
        return new com.aliyun.eventbridge.EventBridgeClient(config);
    }

    /**
     * PutEvents
     */
    public static void PutEvents(com.aliyun.eventbridge.EventBridge client) {
        com.aliyun.eventbridge.models.CloudEvent event = new com.aliyun.eventbridge.models.CloudEvent();
        event.datacontenttype = "application/json";
        event.data = com.aliyun.teautil.Common.toBytes("test");
        event.id = "a5074581-7e74-4e4c-868f-47e7afdf8445";
        event.source = "acs.oss";
        event.specversion = "1.0";
        event.type = "oss:ObjectCreated:PostObject";
        event.time = "2020-08-24T13:54:05.965Asia/Shanghai";
        event.subject = "1.0";
        event.type = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg";
        event.extensions = TeaConverter.buildMap(new TeaPair("aliyuneventbusname", "demo-bus"));
        try {
            com.aliyun.eventbridge.models.PutEventsResponse resp = client.putEvents(java.util.Arrays.asList(event));
            System.out.println("--------------------Publish event to the aliyun EventBus--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(resp)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void createEventBusSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.CreateEventBusRequest createEventBusRequest
                = new com.aliyun.eventbridge.models.CreateEventBusRequest();
            createEventBusRequest.eventBusName = "demo-bus";
            createEventBusRequest.description = "testcase";
            com.aliyun.eventbridge.models.CreateEventBusResponse response = client.createEventBus(
                createEventBusRequest);
            System.out.println("--------------------Create bus success --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            error.printStackTrace();
            System.out.println(error.getMessage());
        }
    }

    public static void deleteEventBusSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            String eventBusName = "demo-bus";
            //create
            com.aliyun.eventbridge.models.CreateEventBusRequest createEventBusRequest
                = new com.aliyun.eventbridge.models.CreateEventBusRequest();
            createEventBusRequest.eventBusName = eventBusName;
            CreateEventBusResponse createEventBusResponse = client.createEventBus(createEventBusRequest);
            System.out.println("--------------------create bus success --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(createEventBusResponse)));
            //delete
            com.aliyun.eventbridge.models.DeleteEventBusRequest deleteEventBusRequest
                = new com.aliyun.eventbridge.models.DeleteEventBusRequest();
            deleteEventBusRequest.eventBusName = eventBusName;
            DeleteEventBusResponse deleteEventBusResponse = client.deleteEventBus(deleteEventBusRequest);
            System.out.println("--------------------Delete bus success --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(deleteEventBusResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void getEventBusSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.GetEventBusRequest describeEventBusRequest
                = new com.aliyun.eventbridge.models.GetEventBusRequest();
            describeEventBusRequest.eventBusName = "demo-bus";
            com.aliyun.eventbridge.models.GetEventBusResponse deScribeResponse = client.getEventBus(
                describeEventBusRequest);
            System.out.println("--------------------describe bus success --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(deScribeResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void listEventBusSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.ListEventBusesRequest listEventBusesRequest
                = new com.aliyun.eventbridge.models.ListEventBusesRequest();
            listEventBusesRequest.limit = 100;
            com.aliyun.eventbridge.models.ListEventBusesResponse response = client.listEventBuses(
                listEventBusesRequest);
            System.out.println("--------------------list bus success --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void createEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.CreateRuleRequest createEventRuleRequest
                = new com.aliyun.eventbridge.models.CreateRuleRequest();
            EBTargetParam param1 = new EBTargetParam();
            param1.setResourceKey("url");
            param1.setForm("CONSTANT");
            param1.setValue("http://11.164.24.5:8080/sample");

            EBTargetParam param2 = new EBTargetParam();
            param2.setResourceKey("Body");
            param2.setForm("CONSTANT");
            param2.setValue("Demo Sample");

            List<EBTargetParam> paramList = Lists.newArrayList(param1, param2);
            TargetEntry targetEntry = new TargetEntry();
            targetEntry.setType("type");
            targetEntry.setId("2Kq4XzNQcH15gNzvAGNdbx71Em");
            targetEntry.setEndpoint("http://11.164.24.5:8080/sample");
            targetEntry.setParamList(paramList);

            java.util.List<TargetEntry> targetEntryList = java.util.Arrays.asList(targetEntry);
            createEventRuleRequest.ruleName = "myRule3";
            createEventRuleRequest.eventBusName = "demo-bus";
            createEventRuleRequest.filterPattern
                = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}";
            createEventRuleRequest.status = "enable";
            createEventRuleRequest.targets = targetEntryList;
            com.aliyun.eventbridge.models.CreateRuleResponse response = client.createRule(createEventRuleRequest);
            System.out.println("--------------------create rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void deleteEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.DeleteRuleRequest deleteRuleRequest
                = new com.aliyun.eventbridge.models.DeleteRuleRequest();
            deleteRuleRequest.ruleName = "myRule3";
            deleteRuleRequest.eventBusName = "demo-bus";
            DeleteRuleResponse deleteRuleResponse = client.deleteRule(deleteRuleRequest);
            System.out.println("--------------------delete rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(deleteRuleResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void enableEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.EnableRuleRequest enableEventRuleRequest
                = new com.aliyun.eventbridge.models.EnableRuleRequest();
            enableEventRuleRequest.ruleName = "myRule3";
            enableEventRuleRequest.eventBusName = "demo-bus";
            EnableRuleResponse enableRuleResponse = client.enableRule(enableEventRuleRequest);
            System.out.println("--------------------enable rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(enableRuleResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void disableEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.DisableRuleRequest disableEventRuleRequest
                = new com.aliyun.eventbridge.models.DisableRuleRequest();
            disableEventRuleRequest.ruleName = "myRule3";
            disableEventRuleRequest.eventBusName = "demo-bus";
            DisableRuleResponse disableRuleResponse = client.disableRule(disableEventRuleRequest);
            System.out.println("--------------------disable rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(disableRuleResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void describeEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.GetRuleRequest describeEventRuleRequest
                = new com.aliyun.eventbridge.models.GetRuleRequest();
            describeEventRuleRequest.ruleName = "myRule3";
            describeEventRuleRequest.eventBusName = "demo-bus";
            com.aliyun.eventbridge.models.GetRuleResponse response = client.getRule(describeEventRuleRequest);
            System.out.println("--------------------describe rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void listEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.ListRulesRequest listEventRulesRequest
                = new com.aliyun.eventbridge.models.ListRulesRequest();
            listEventRulesRequest.eventBusName = "demo-bus";
            com.aliyun.eventbridge.models.ListRulesResponse response = client.listRules(listEventRulesRequest);
            System.out.println("--------------------list event rule--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void updateEventRuleSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.UpdateRuleRequest updateEventRuleRequest
                = new com.aliyun.eventbridge.models.UpdateRuleRequest();
            updateEventRuleRequest.eventBusName = "demo-bus";
            updateEventRuleRequest.ruleName = "myRule3";
            updateEventRuleRequest.filterPattern
                = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}";
            UpdateRuleResponse updateRuleResponse = client.updateRule(updateEventRuleRequest);
            System.out.println("--------------------update rule success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(updateRuleResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void testEventPattern_False(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.TestEventPatternRequest request
                = new com.aliyun.eventbridge.models.TestEventPatternRequest();
            String pattern = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [1]\n"
                + "    }\n" + "}";
            String jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n"
                + "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n"
                + "        \"dataschema\":\"http://taobao.com/test.json\",\n"
                + "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n"
                + "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n"
                + "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}";
            request.event = jsonData;
            request.eventPattern = pattern;
            com.aliyun.eventbridge.models.TestEventPatternResponse testEventPatternResponse = client.testEventPattern(
                request);
            System.out.println("--------------------test event pattern --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(testEventPatternResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void testEventPattern_True(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.TestEventPatternRequest request
                = new com.aliyun.eventbridge.models.TestEventPatternRequest();
            String pattern = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [2]\n"
                + "    }\n" + "}";
            String jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n"
                + "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n"
                + "        \"dataschema\":\"http://taobao.com/test.json\",\n"
                + "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n"
                + "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n"
                + "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}";
            request.event = jsonData;
            request.eventPattern = pattern;
            com.aliyun.eventbridge.models.TestEventPatternResponse testEventPatternResponse = client.testEventPattern(
                request);
            System.out.println("--------------------test event pattern --------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(testEventPatternResponse)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void addTargetsSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.CreateTargetsRequest addTargetsRequest
                = new com.aliyun.eventbridge.models.CreateTargetsRequest();
            addTargetsRequest.eventBusName = "demo-bus";
            addTargetsRequest.ruleName = "myRule3";
            com.aliyun.eventbridge.models.TargetEntry targetEntry = new com.aliyun.eventbridge.models.TargetEntry();
            targetEntry.id = "12345";
            targetEntry.endpoint = "http://www.baidu.com";
            java.util.List<com.aliyun.eventbridge.models.TargetEntry> list = java.util.Arrays.asList(targetEntry);
            addTargetsRequest.targets = list;
            com.aliyun.eventbridge.models.CreateTargetsResponse response = client.createTargets(addTargetsRequest);
            System.out.println("--------------------Add targets success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
            describeEventRuleSample(client);
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void removeTargetsSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.DeleteTargetsRequest removeTargetsResponse
                = new com.aliyun.eventbridge.models.DeleteTargetsRequest();
            removeTargetsResponse.eventBusName = "demo-bus";
            removeTargetsResponse.ruleName = "myRule3";
            java.util.List<String> list = java.util.Arrays.asList("12345");
            removeTargetsResponse.targetIds = list;
            com.aliyun.eventbridge.models.DeleteTargetsResponse response = client.deleteTargets(removeTargetsResponse);
            System.out.println("--------------------remove targets success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
            describeEventRuleSample(client);
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void listTargetsSample(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.ListTargetsRequest listTargetsRequest
                = new com.aliyun.eventbridge.models.ListTargetsRequest();
            listTargetsRequest.eventBusName = "demo-bus";
            listTargetsRequest.ruleName = "myRule3";
            com.aliyun.eventbridge.models.ListTargetsResponse response = client.listTargets(listTargetsRequest);
            System.out.println("--------------------list targets success--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void main(String[] args) {
        EventBridge client = createClient();
        //createEventBusSample(client);
        //deleteEventBusSample(client);
        //getEventBusSample(client);
        //listEventBusSample(client);
        //createEventRuleSample(client);
        //deleteEventRuleSample(client);
        //enableEventRuleSample(client);
        //disableEventRuleSample(client);
        //describeEventRuleSample(client);
        //listEventRuleSample(client);
        //updateEventRuleSample(client);
        //testEventPattern_False(client);
        //testEventPattern_True(client);
        //addTargetsSample(client);
        //removeTargetsSample(client);
        //listTargetsSample(client);
    }
}
