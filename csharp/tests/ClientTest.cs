using System;
using System.Collections.Generic;
using System.Text;
using AlibabaCloud.SDK.EventBridge;
using AlibabaCloud.SDK.EventBridge.Models;
using Xunit;

namespace tests
{
    public class ClientTest
    {
        [Fact]
        public void TestAPI()
        {
            Config config = new Config
            {
                AccessKeyId = Environment.GetEnvironmentVariable("EventBridge_AccessKey"),
                AccessKeySecret = Environment.GetEnvironmentVariable("EventBridge_AccessSecret"),
                Endpoint = "11.158.193.236:7001"
            };

            var cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("test"),
                Id = "a5074581-7e74-4e4c-868f-47e7afdf8445",
                Source = "acs.oss",
                Specversion = "1.0",
                Type = "oss:ObjectCreated:PostObject",
                Time = "2020-08-24T13:54:05.965Z",
                Subject = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg",
                Extensions = new Dictionary<string, object> { { "aliyuneventbusname", "demo-bus" } }
            };

            var client = new EventBridgeClient(config);
            var resp = client.PutEvents(new List<CloudEvent> { cloudEvent });

            Assert.NotNull(resp);
        }
    }
}
