// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using Tea;
using Tea.Utils;

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
            // AccessKey ID
            config.AccessKeyId = "<accessKeyId>";
            // AccessKey Secret
            config.AccessKeySecret = "<accessKeySecret>";
            // 接入点
            config.Endpoint = "<endpoint>";
            return new AlibabaCloud.SDK.EventBridge.EventBridgeClient(config);
        }

        public static void CreateEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateEventBusRequest createEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateEventBusRequest();
                createEventBusRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.CreateEventBusResponse resp = client.CreateEventBus(createEventBusRequest);
                Console.WriteLine("--------------------Create bus success --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void DeleteEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                //delete
                AlibabaCloud.SDK.EventBridge.Models.DeleteEventBusRequest deleteEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.DeleteEventBusRequest();
                deleteEventBusRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.DeleteEventBusResponse resp = client.DeleteEventBus(deleteEventBusRequest);
                Console.WriteLine("--------------------Delete bus success --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void GetEventBusSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.GetEventBusRequest getEventBusRequest = new AlibabaCloud.SDK.EventBridge.Models.GetEventBusRequest();
                getEventBusRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.GetEventBusResponse resp = client.GetEventBus(getEventBusRequest);
                Console.WriteLine("--------------------get event bus success --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void ListEventBusesSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListEventBusesRequest listEventBusesRequest = new AlibabaCloud.SDK.EventBridge.Models.ListEventBusesRequest();
                listEventBusesRequest.Limit = 100;
                AlibabaCloud.SDK.EventBridge.Models.ListEventBusesResponse resp = client.ListEventBuses(listEventBusesRequest);
                Console.WriteLine("--------------------list bus success --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void CreateEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateRuleRequest createEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateRuleRequest();
                AlibabaCloud.SDK.EventBridge.Models.TargetEntry targetEntry = new AlibabaCloud.SDK.EventBridge.Models.TargetEntry();
                targetEntry.Id = "dingtalk.target";
                targetEntry.Endpoint = "https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460";
                targetEntry.Type = "acs.dingtalk";
                AlibabaCloud.SDK.EventBridge.Models.EBTargetParam param1 = new AlibabaCloud.SDK.EventBridge.Models.EBTargetParam();
                param1.ResourceKey = "URL";
                param1.Form = "CONSTANT";
                param1.Value = "https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460";
                AlibabaCloud.SDK.EventBridge.Models.EBTargetParam param2 = new AlibabaCloud.SDK.EventBridge.Models.EBTargetParam();
                param2.ResourceKey = "SecretKey";
                param2.Form = "CONSTANT";
                param2.Value = "SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234";
                AlibabaCloud.SDK.EventBridge.Models.EBTargetParam param3 = new AlibabaCloud.SDK.EventBridge.Models.EBTargetParam();
                param3.ResourceKey = "Body";
                param3.Form = "TEMPLATE";
                param3.Value = "{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}";
                param3.Template = "{\"msgtype\": \"text\",\"text\": {\"content\": \"Hello：${key}\"}}";
                List<AlibabaCloud.SDK.EventBridge.Models.EBTargetParam> paramList = new List<AlibabaCloud.SDK.EventBridge.Models.EBTargetParam>
                {
                    param1,
                    param2,
                    param3
                };
                targetEntry.ParamList = paramList;
                List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry> targetEntryList = new List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry>
                {
                    targetEntry
                };
                createEventRuleRequest.Targets = targetEntryList;
                createEventRuleRequest.RuleName = "myRule";
                createEventRuleRequest.EventBusName = "demo-bus";
                createEventRuleRequest.FilterPattern = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}";
                createEventRuleRequest.Status = "enable";
                AlibabaCloud.SDK.EventBridge.Models.CreateRuleResponse resp = client.CreateRule(createEventRuleRequest);
                Console.WriteLine("--------------------create rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void DeleteEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DeleteRuleRequest deleteRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.DeleteRuleRequest();
                deleteRuleRequest.RuleName = "myRule";
                deleteRuleRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.DeleteRuleResponse resp = client.DeleteRule(deleteRuleRequest);
                Console.WriteLine("--------------------delete rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void EnableEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.EnableRuleRequest enableEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.EnableRuleRequest();
                enableEventRuleRequest.RuleName = "myRule";
                enableEventRuleRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.EnableRuleResponse resp = client.EnableRule(enableEventRuleRequest);
                Console.WriteLine("--------------------enable rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void DisableEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DisableRuleRequest disableEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.DisableRuleRequest();
                disableEventRuleRequest.RuleName = "myRule";
                disableEventRuleRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.DisableRuleResponse resp = client.DisableRule(disableEventRuleRequest);
                Console.WriteLine("--------------------disable rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void GetEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.GetRuleRequest getEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.GetRuleRequest();
                getEventRuleRequest.RuleName = "myRule";
                getEventRuleRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.GetRuleResponse resp = client.GetRule(getEventRuleRequest);
                Console.WriteLine("--------------------get rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void ListEventRulesSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListRulesRequest listEventRulesRequest = new AlibabaCloud.SDK.EventBridge.Models.ListRulesRequest();
                listEventRulesRequest.EventBusName = "demo-bus";
                AlibabaCloud.SDK.EventBridge.Models.ListRulesResponse resp = client.ListRules(listEventRulesRequest);
                Console.WriteLine("--------------------listRules rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void UpdateEventRuleSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.UpdateRuleRequest updateEventRuleRequest = new AlibabaCloud.SDK.EventBridge.Models.UpdateRuleRequest();
                updateEventRuleRequest.EventBusName = "demo-bus";
                updateEventRuleRequest.RuleName = "myRule";
                updateEventRuleRequest.FilterPattern = "{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}";
                AlibabaCloud.SDK.EventBridge.Models.UpdateRuleResponse resp = client.UpdateRule(updateEventRuleRequest);
                Console.WriteLine("--------------------update rule success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void TestEventPattern_False(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest request = new AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest();
                string pattern = "{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [1]\n    }\n}";
                string jsonData = "{" + 
"        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\"," + 
"        \"source\":\"acs.oss\"," + 
"        \"type\":\"oss:ObjectCreated:PostObject\"," + 
"        \"dataschema\":\"http://taobao.com/test.json\"," + 
"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\"," + 
"        \"aliyuneventbusname\":\"demo-bus\"," + 
"        \"data\":{" + 
"            \"a\":\"test\"," + 
"            \"b\":1" + 
"        }" + 
"}";
                request.Event = jsonData;
                request.EventPattern = pattern;
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternResponse resp = client.TestEventPattern(request);
                Console.WriteLine("--------------------test event pattern --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void TestEventPattern_True(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest request = new AlibabaCloud.SDK.EventBridge.Models.TestEventPatternRequest();
                string pattern = "{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [2]\n    }\n}";
                string jsonData = "{" + 
"        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\"," + 
"        \"source\":\"acs.oss\",        " + 
"        \"type\":\"oss:ObjectCreated:PostObject\"," + 
"        \"dataschema\":\"http://taobao.com/test.json\"," + 
"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\"," + 
"        \"aliyuneventbusname\":\"demo-bus\"," + 
"        \"data\":{" + 
"            \"a\":\"test\"," + 
"            \"b\":1" + 
"        }" + 
"}";
                request.Event = jsonData;
                request.EventPattern = pattern;
                AlibabaCloud.SDK.EventBridge.Models.TestEventPatternResponse resp = client.TestEventPattern(request);
                Console.WriteLine("--------------------test event pattern --------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void CreateTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.CreateTargetsRequest createTargetsRequest = new AlibabaCloud.SDK.EventBridge.Models.CreateTargetsRequest();
                createTargetsRequest.EventBusName = "demo-bus";
                createTargetsRequest.RuleName = "myRule";
                AlibabaCloud.SDK.EventBridge.Models.TargetEntry targetEntry = new AlibabaCloud.SDK.EventBridge.Models.TargetEntry();
                targetEntry.Id = "1234";
                targetEntry.Endpoint = "http://www.baidu.com";
                List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry> list = new List<AlibabaCloud.SDK.EventBridge.Models.TargetEntry>
                {
                    targetEntry
                };
                createTargetsRequest.Targets = list;
                AlibabaCloud.SDK.EventBridge.Models.CreateTargetsResponse response = client.CreateTargets(createTargetsRequest);
                Console.WriteLine("--------------------Create targets success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void RemoveTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsRequest removeTargetsRequest = new AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsRequest();
                removeTargetsRequest.EventBusName = "demo-bus";
                removeTargetsRequest.RuleName = "myRule";
                List<string> list = new List<string>
                {
                    "dingtalk.target"
                };
                removeTargetsRequest.TargetIds = list;
                AlibabaCloud.SDK.EventBridge.Models.DeleteTargetsResponse response = client.DeleteTargets(removeTargetsRequest);
                Console.WriteLine("--------------------remove targets success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        public static void ListTargetsSample(AlibabaCloud.SDK.EventBridge.EventBridgeClient client)
        {
            try
            {
                AlibabaCloud.SDK.EventBridge.Models.ListTargetsRequest listTargetsRequest = new AlibabaCloud.SDK.EventBridge.Models.ListTargetsRequest();
                listTargetsRequest.EventBusName = "demo-bus";
                listTargetsRequest.RuleName = "myRule";
                AlibabaCloud.SDK.EventBridge.Models.ListTargetsResponse response = client.ListTargets(listTargetsRequest);
                Console.WriteLine("--------------------list targets success--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(response.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
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
                Console.WriteLine("--------------------Publish event to the aliyun EventBus--------------------");
                Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
            }
            catch (TeaException error)
            {
                Console.WriteLine(error.Message);
            }
            catch (Exception _error)
            {
                TeaException error = new TeaException(new Dictionary<string, object>
                {
                    { "message", _error.Message }
                });
                Console.WriteLine(error.Message);
            }
        }

        static void Main(string[] args)
        {
            AlibabaCloud.SDK.EventBridge.EventBridgeClient client = Client.CreateClient();
            Client.CreateEventBusSample(client);
            Client.PutEvents(client);
            Client.GetEventBusSample(client);
            Client.ListEventBusesSample(client);
            Client.CreateEventRuleSample(client);
            Client.EnableEventRuleSample(client);
            Client.DisableEventRuleSample(client);
            Client.GetEventRuleSample(client);
            Client.ListEventRulesSample(client);
            Client.UpdateEventRuleSample(client);
            Client.TestEventPattern_False(client);
            Client.TestEventPattern_True(client);
            Client.CreateTargetsSample(client);
            Client.ListTargetsSample(client);
            Client.RemoveTargetsSample(client);
            Client.DeleteEventRuleSample(client);
            Client.DeleteEventBusSample(client);
        }

    }
}
