// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using Tea;
using Tea.Utils;
using Xunit;

namespace Alibabacloud.Sample
{
    public class Client 
    {

        /**
        * Create client  初始化公共请求参数
        */
        public static AlibabaCloud.SDK.EventBridge.EventBridgeClient CreateClient()
        {
            AlibabaCloud.SDK.EventBridge.Models.Config config = new AlibabaCloud.SDK.EventBridge.Models.Config();
            // 您的AccessKey ID
            config.AccessKeyId = "<accessKeyId>";
            // 您的AccessKey Secret
            config.AccessKeySecret = "<accessKeySecret>";
            // 您的可用区ID
            config.Endpoint = "<endpoint>";
            return new AlibabaCloud.SDK.EventBridge.EventBridgeClient(config);
        }

        public static void CreateEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateEventBusRequest createEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateEventBusRequest();
                createEventBusRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.CreateEventBusResponse response = client.CreateEventBus(createEventBusRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------Create bus success --------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void DeleteEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                //delete
                AlibabaCloud.SDK.EventBridge.Models.DeleteEventBusRequest deleteEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.DeleteEventBusRequest();
                deleteEventBusRequest.EventBusName = "demo-bus";
                client.DeleteEventBus(deleteEventBusRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------Delete bus success --------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void GetEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.GetEventBusRequest describeEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.GetEventBusRequest();
                describeEventBusRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.GetEventBusResponse deScribeResponse = client.GetEventBus(describeEventBusRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------describe bus success --------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(deScribeResponse.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void ListEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListEventBusesRequest listEventBusesRequest = new AlibabaCloud.SDK.EventBridge.Models.ListEventBusesRequest();
                listEventBusesRequest.Limit = 100;
                AlibabaCloud.SDK.EventBridge.Models.ListEventBusesResponse response = client.ListEventBuses(listEventBusesRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------list bus success --------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void CreateEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateRuleRequest createEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateRuleRequest();
                AlibabaCloud.SDK.EventBridge.Models.TargetEntry targetEntry = new AlibabaCloud.SDK.EventBridge.Models.TargetEntry();
                targetEntry.Id = "1234";
                targetEntry.Endpoint = "http://www.baidu.com";
                List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry> targetEntryList = new List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry>
                {
                    targetEntry
                };
                //targetEntryList[0] =targetEntry;
                createEventRuleRequest.RuleName = "myRule3";
                createEventRuleRequest.EventBusName = "demo-bus";
                createEventRuleRequest.FilterPattern = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}";
                createEventRuleRequest.Status = "enable";
                createEventRuleRequest.Targets = targetEntryList;
                AlibabaCloud.SDK.EventBridge.Models.CreateRuleResponse response = client.CreateRule(createEventRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------create rule success--------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void DeleteEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DeleteRuleRequest deleteRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.DeleteRuleRequest();
                deleteRuleRequest.RuleName = "myRule3";
                deleteRuleRequest.EventBusName = "demo-bus";
                client.DeleteRule(deleteRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------delete rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void EnableEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.EnableRuleRequest enableEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.EnableRuleRequest();
                enableEventRuleRequest.RuleName = "myRule3";
                enableEventRuleRequest.EventBusName = "demo-bus";
                client.EnableRule(enableEventRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------enable rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void DisableEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DisableRuleRequest disableEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.DisableRuleRequest();
                disableEventRuleRequest.RuleName = "myRule3";
                disableEventRuleRequest.EventBusName = "demo-bus";
                client.DisableRule(disableEventRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------disable rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void DescribeEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.GetRuleRequest describeEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.GetRuleRequest();
                describeEventRuleRequest.RuleName = "myRule3";
                describeEventRuleRequest.EventBusName = "demo-bus";
                client.GetRule(describeEventRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------describe rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void ListEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListRulesRequest listEventRulesRequest = new AlibabaCloud.SDK.EventBridge.Models.ListRulesRequest();
                listEventRulesRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.ListRulesResponse response = client.ListRules(listEventRulesRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------listRules rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void UpdateEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.UpdateRuleRequest updateEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.UpdateRuleRequest();
                updateEventRuleRequest.EventBusName = "demo-bus";
                updateEventRuleRequest.RuleName = "myRule3";
                updateEventRuleRequest.FilterPattern = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}";
                client.UpdateRule(updateEventRuleRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------update rule success--------------------");
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void TestEventPattern_False(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest request = new AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest();
                string pattern = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [1]\n" + "    }\n" + "}";
                string jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
            "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n"  +
            "        \"dataschema\":\"http://taobao.com/test.json\",\n" +
            "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
            "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
            "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}";
                request.Event = jsonData;
                request.EventPattern = pattern;
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternResponse testEventPatternResponse = client.TestEventPattern(request);
                AlibabaCloud.TeaConsole.Client.Log("--------------------test event pattern --------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(testEventPatternResponse.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void TestEventPattern_True(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest request = new AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest();
                string pattern = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [2]\n"+ "    }\n" + "}";
                string jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
            "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n" +
            "        \"dataschema\":\"http://taobao.com/test.json\",\n" +
            "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
            "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
            "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}";
                request.Event = jsonData;
                request.EventPattern = pattern;
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternResponse testEventPatternResponse = client.TestEventPattern(request);
                AlibabaCloud.TeaConsole.Client.Log("--------------------test event pattern --------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(testEventPatternResponse.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void AddTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateTargetsRequest addTargetsRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateTargetsRequest();
                addTargetsRequest.EventBusName = "demo-bus";
                addTargetsRequest.RuleName = "myRule3";
                AlibabaCloud.SDK.EventBridge.Models.TargetEntry targetEntry = new AlibabaCloud.SDK.EventBridge.Models.TargetEntry();
                targetEntry.Id = "1234";
                targetEntry.Endpoint = "http://www.baidu.com";
                List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry> list = new List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry>
                {
                    targetEntry
                };
                addTargetsRequest.Targets = list;
                AlibabaCloud.SDK.EventBridge.Models.CreateTargetsResponse response = client.CreateTargets(addTargetsRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------Add targets success--------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void RemoveTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsRequest removeTargetsResponse = new AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsRequest();
                removeTargetsResponse.EventBusName = "demo-bus";
                removeTargetsResponse.RuleName = "myRule3";
                List<string> list = new List<string>
                {
                    "1234"
                };
                removeTargetsResponse.TargetIds = list;
                AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsResponse response = client.DeleteTargets(removeTargetsResponse);
                AlibabaCloud.TeaConsole.Client.Log("--------------------remove targets success--------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        public static void ListTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListTargetsRequest listTargetsRequest = new AlibabaCloud.SDK.EventBridge.Models.ListTargetsRequest();
                listTargetsRequest.EventBusName = "demo-bus";
                listTargetsRequest.RuleName = "myRule3";
                AlibabaCloud.SDK.EventBridge.Models.ListTargetsResponse response = client.ListTargets(listTargetsRequest);
                AlibabaCloud.TeaConsole.Client.Log("--------------------list targets success--------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        /**
        * PutEvents
        */
        public static void PutEvents(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            AlibabaCloud.SDK.EventBridge.Models.CloudEvent event_ = new AlibabaCloud.SDK.EventBridge.Models.CloudEvent();
            event_.Datacontenttype = "application/json";
            event_.Data = AlibabaCloud.TeaUtil.Common.ToBytes("test");
            event_.Id = "a5074581-7e74-4e4c-868f-47e7afdf8445";
            event_.Source = "acs.oss";
            event_.Specversion = "1.0";
            event_.Type = "oss:ObjectCreated:PostObject";
            event_.Time = "2020-08-24T13:54:05.965Asia/Shanghai";
            event_.Subject = "1.0";
            event_.Type = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg";
            event_.Extensions = new Dictionary<string, object>
            {
                {"aliyuneventbusname", "demo-bus"},
            };
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.PutEventsResponse resp = client.PutEvents(new List<AlibabaCloud.SDK.EventBridge.Models.CloudEvent>
                {
                    event_
                });
                AlibabaCloud.TeaConsole.Client.Log("--------------------Publish event to the aliyun EventBus--------------------");
                AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                AlibabaCloud.TeaConsole.Client.Log(error.Message);
            }
        }

        [Fact]
        public static void TestEventBridge()
        {
            AlibabaCloud.SDK.EventBridge.EventBridgeClient client = Client.CreateClient();
            Client.CreateEventBusSample(client);
            Client.PutEvents(client);
            Client.GetEventBusSample(client);
            Client.ListEventBusSample(client);
            Client.CreateEventRuleSample(client);
            Client.EnableEventRuleSample(client);
            Client.DisableEventRuleSample(client);
            Client.DescribeEventRuleSample(client);
            Client.ListEventRuleSample(client);
            Client.UpdateEventRuleSample(client);
            Client.TestEventPattern_False(client);
            Client.TestEventPattern_True(client);
            Client.AddTargetsSample(client);
            Client.ListTargetsSample(client);
            Client.RemoveTargetsSample(client);
            Client.DeleteEventRuleSample(client);
            Client.DeleteEventBusSample(client);
        }


    }
}
