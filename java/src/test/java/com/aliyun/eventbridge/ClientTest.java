// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.CloudEvent;
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

import java.util.List;

public class ClientTest {

    /**
     * Create client  初始化公共请求参数
     */
    public static com.aliyun.eventbridge.EventBridge createClient() {
        Config config = new Config();
        config.setAccessKeyId("LTAI4G3Qaw8Mqso8tRav5L4r")
                .setAccessKeySecret("p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B")
                .setEndpoint("1186095474286448.eventbridge.cn-hangzhou.aliyuncs.com:7001");
        return new com.aliyun.eventbridge.EventBridgeClient(config);
    }

    /**
     * PutEvents
     */
    public static void PutEvents(com.aliyun.eventbridge.EventBridge client) {
        com.aliyun.eventbridge.models.CloudEvent event = new com.aliyun.eventbridge.models.CloudEvent();
        event.datacontenttype = "application/json";
        //event.data = com.aliyun.teautil.Common.toBytes("<note>\n" + "  <to>Tove</to>\n" + "  <from>Jani</from>\n"
        //    + "  <heading>Reminder</heading>\n" + "  <body>Don't forget me this weekend!</body>\n" + "</note>");
        event.data = com.aliyun.teautil.Common.toBytes("test");
        event.id = "a5074581-7e74-4e4c-868f-47e7afdf8445";
        event.source = "acs.jingluo";
        event.specversion = "1.0";
        event.type = "oss:ObjectCreated:PostObject";
        event.time = "2020-08-24T13:54:05.965Asia/Shanghai";
        event.subject = "1.0";
        event.type = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg";
        event.extensions = TeaConverter.buildMap(new TeaPair("aliyuneventbusname", "jingluo"));

        List<CloudEvent> cloudEventList = Lists.newArrayList();
        cloudEventList.add(event);
        try {
            com.aliyun.eventbridge.models.PutEventsResponse resp = client.putEvents(cloudEventList);
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
            describeEventBusRequest.eventBusName = "demo-bus2";
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
            param1.setResourceKey("queue");
            param1.setForm("CONSTANT");
            param1.setValue("jingluo");

            EBTargetParam param2 = new EBTargetParam();
            param2.setResourceKey("Body");
            param2.setForm("CONSTANT");
            param2.setValue("Demo Sample");

            List<EBTargetParam> paramList = Lists.newArrayList(param1, param2);
            TargetEntry targetEntry = new TargetEntry();
            targetEntry.setType("acs.mns.queue");
            targetEntry.setId("2Kq4XzNQcH15gNzvAGNdbx71Em");
            targetEntry.setEndpoint("acs:mns:cn-hangzhou:1186095474286448:queues/queue");
            targetEntry.setParamList(paramList);

            java.util.List<TargetEntry> targetEntryList = java.util.Arrays.asList(targetEntry);
            createEventRuleRequest.ruleName = "myRule33";
            createEventRuleRequest.eventBusName = "jingluo";
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

    /*public static void saveAndStartEventStreaming(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.SaveAndStartEventStreamingRequest saveAndStartEventStreamingRequest
                    = new com.aliyun.eventbridge.models.SaveAndStartEventStreamingRequest();
            saveAndStartEventStreamingRequest.setName("active-active");
            saveAndStartEventStreamingRequest.setDescription("RocketMQ 多活");
            saveAndStartEventStreamingRequest.setFilterPattern("{\"data\":{\"userProperties\":[\"${instanceId}\"]}}");
            // add event source
            EBEventSourceEntry ebEventSourceEntry = new EBEventSourceEntry();
            ebEventSourceEntry.setName("cross-rocketmq-998877");
            ebEventSourceEntry.setNew(Boolean.TRUE);
            ebEventSourceEntry.setDescription("cross event rocketmq.");
            ebEventSourceEntry.setExternalSourceType("RocketMQ");
            Map<String, Object> externalSourceConfig = Maps.newHashMap();
            externalSourceConfig.put("InstanceId", "MQ_INST_1186095474286448_BXZDcQsk");
            externalSourceConfig.put("Tag", "");
            externalSourceConfig.put("RegionId", "cn-zhangjiakou");
            externalSourceConfig.put("Topic", "source-rmq");
            externalSourceConfig.put("Offset", "CONSUME_FROM_LAST_OFFSET");
            ebEventSourceEntry.setExternalSourceConfig(externalSourceConfig);
            saveAndStartEventStreamingRequest.setEbEventSourceEntry(ebEventSourceEntry);

            // add targets
            List<TargetEntry> targets = Lists.newArrayList();

            EBTargetParam param1 = new EBTargetParam();
            param1.setResourceKey("InstanceId");
            param1.setForm("CONSTANT");
            param1.setValue("MQ_INST_1186095474286448_BXiMFgZY");

            EBTargetParam param2 = new EBTargetParam();
            param2.setResourceKey("Topic");
            param2.setForm("CONSTANT");
            param2.setValue("connect");

            EBTargetParam param3 = new EBTargetParam();
            param3.setResourceKey("Body");
            param3.setForm("JSONPATH");
            param3.setValue("$.data.body");

            EBTargetParam param4 = new EBTargetParam();
            param4.setResourceKey("Properties");
            param4.setForm("TEMPLATE");
            param4.setValue("{\"userProperties\":\"$.data.userProperties\"}");
            param4.setTemplate("{\"EB_SYS_EMBED_OBJECT\":\"${userProperties}\",\"SYS-active-active\":\"${instanceId}\"}");

            EBTargetParam param5 = new EBTargetParam();
            param5.setResourceKey("Keys");
            param5.setForm("JSONPATH");
            param5.setValue("$.data.systemProperties.Keys");

            EBTargetParam param6 = new EBTargetParam();
            param6.setResourceKey("Tags");
            param6.setForm("JSONPATH");
            param6.setValue("$.data.systemProperties.Tags");

            List<EBTargetParam> paramList = Lists.newArrayList(param1, param2, param3, param4, param5, param6);
            TargetEntry targetEntry = new TargetEntry();
            targetEntry.setType("acs.rocketmq");
            targetEntry.setId("2Kq4XzNQcH15gNzvAGNdbx71Em");
            targetEntry.setEndpoint("acs:mq:cn-hangzhou:1186095474286448:/instances/${instanceId}/topic/${topic}");
            targetEntry.setParamList(paramList);

            targets.add(targetEntry);
            saveAndStartEventStreamingRequest.setTargets(targets);

            com.aliyun.eventbridge.models.SaveAndStartEventStreamingResponse response
                    = client.saveAndStartEventStreaming(saveAndStartEventStreamingRequest);
            System.out.println("--------------------sanve adn start event streaming--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void deleteEventStreaming(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.DeleteEventStreamingRequest deleteEventStreamingRequest
                    = new com.aliyun.eventbridge.models.DeleteEventStreamingRequest();
            deleteEventStreamingRequest.setName("active-active");

            DeleteEventStreamingResponse response = client.deleteEventStreaming(deleteEventStreamingRequest);
            System.out.println("--------------------delete event streaming--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }

    public static void listEventStreamingMetrics(com.aliyun.eventbridge.EventBridge client) {
        try {
            com.aliyun.eventbridge.models.ListEventStreamingMetricsRequest listEventStreamingMetricsRequest
                    = new com.aliyun.eventbridge.models.ListEventStreamingMetricsRequest();
            listEventStreamingMetricsRequest.setNames(Lists.newArrayList("active-active"));

            ListEventStreamingMetricsResponse response = client.listEventStreamingMetrics(
                    listEventStreamingMetricsRequest);
            System.out.println("--------------------List event streaming metrics--------------------");
            System.out.println(com.aliyun.teautil.Common.toJSONString(TeaModel.buildMap(response)));
        } catch (Exception error) {
            System.out.println(error.getMessage());
        }
    }*/

    public static void main(String[] args) {
        //System.out.println("{\"source\":[\"acs.arms\"]}");
        EventBridge client = createClient();
        //saveAndStartEventStreaming(client);
        //deleteEventStreaming(client);
        //listEventStreamingMetrics(client);
        //        createEventBusSample(client);
        //deleteEventBusSample(client);
        getEventBusSample(client);
        //        listEventBusSample(client);
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
