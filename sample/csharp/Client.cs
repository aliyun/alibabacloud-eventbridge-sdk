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

        public static AlibabaCloud.SDK.EventBridge.EventBridgeClient CreateClient()
        {
            AlibabaCloud.SDK.EventBridge.Models.Config config = new AlibabaCloud.SDK.EventBridge.Models.Config();
            config.AccessKeyId = "<accessKeyId>";
            config.AccessKeySecret = "<accessKeySecret>";
            config.Endpoint = "<endpoint>";
            return new AlibabaCloud.SDK.EventBridge.EventBridgeClient(config);
        }

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
        }


    }
}
