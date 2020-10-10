using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Text;

using AlibabaCloud.EventBridgeUtil;

using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

using Tea;
using Tea.Utils;

using Xunit;

namespace tests
{
    public class CommonTest
    {

        [Fact]
        public void TestGetStringToSign()
        {
            TeaRequest request = new TeaRequest();
            request.Method = "GET";
            request.Pathname = "/";
            request.Headers["accept"] = "application/json";

            Assert.Equal("GET\n\n\n\n/", Common.GetStringToSign(request));

            request.Headers["content-md5"] = "md5";
            request.Headers["content-type"] = "application/json";
            request.Headers["date"] = "date";
            Assert.Equal("GET\nmd5\napplication/json\ndate\n/", Common.GetStringToSign(request));

            request.Headers["x-acs-custom-key"] = "any value";
            Assert.Equal("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/", Common.GetStringToSign(request));

            request.Query["key"] = "val ue with space";
            Assert.Equal("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/?key=val ue with space", Common.GetStringToSign(request));
        }

        [Fact]
        public void TestGetSignature()
        {
            Assert.Equal("OmuTAr79tpI6CRoAdmzKRq5lHs0=", Common.GetSignature("stringtosign", "secret"));
        }

        string JSON_OBJECT_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":{\"bus\":\"demo\"}}]";

        string JSON_OBJECT_EMPTY_EVENT = "[{\"data\":{\"bus\":\"demo\"}}]";

        string JSON_ARRAY_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":[{\"bus\":\"demo\"}," +
            "{\"bus\":\"demo\"}]}]";

        string JSON_STRING_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":\"string\"}]";

        string JSON_NUMBER_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":100}]";

        string JSON_BOOLEAN_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":true}]";

        string BASE64_EVENT = "[{\"datacontenttype\":\"application/octet-stream\",\"data_base64\":\"eyAiYnVzIjoiZGVtbyIgfQ==\"}]";

        string EXTENSION_EVENT = "[{\"datacontenttype\":\"application/octet-stream\",\"data_base64\":\"eyAiYnVzIjoiZGVtbyIgfQ==\",\"key\":\"value\"}]";

        [Fact]
        public void Test_JsonObjectSerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("{ \"bus\":\"demo\" }")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_OBJECT_EVENT, jsonStr);
        }

        [Fact]
        public void Test_JsonObjectEmptySerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Data = Encoding.UTF8.GetBytes("{ \"bus\":\"demo\" }")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_OBJECT_EMPTY_EVENT, jsonStr);
        }

        [Fact]
        public void Test_JsonArraySerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("[{\"bus\":\"demo\"},{\"bus\":\"demo\"}]")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_ARRAY_EVENT, jsonStr);
        }

        [Fact]
        public void Test_JsonStringSerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("string")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_STRING_EVENT, jsonStr);
        }

        [Fact]
        public void Test_JsonNumberSerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("100")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_NUMBER_EVENT, jsonStr);
        }

        [Fact]
        public void Test_JsonBooleanSerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/json",
                Data = Encoding.UTF8.GetBytes("true")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(JSON_BOOLEAN_EVENT, jsonStr);
        }

        [Fact]
        public void Test_Base64Serialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/octet-stream",
                Data = Encoding.UTF8.GetBytes("{ \"bus\":\"demo\" }")
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(BASE64_EVENT, jsonStr);
        }

        [Fact]
        public void Test_ExtensionSerialize()
        {
            CloudEvent cloudEvent = new CloudEvent
            {
                Datacontenttype = "application/octet-stream",
                Data = Encoding.UTF8.GetBytes("{ \"bus\":\"demo\" }"),
                Extensions = new Dictionary<string, object>
                { { "key", "value" }
                }
            };
            List<CloudEvent> cloudEventList = new List<CloudEvent>
            {
                cloudEvent
            };

            var obj = Common.Serialize(cloudEventList);
            string jsonStr = JsonConvert.SerializeObject(obj);
            Assert.Equal(EXTENSION_EVENT, jsonStr);
        }

        [Fact]
        public void Test_StartWith()
        {
            Assert.True(Common.StartWith("eventbridge", "event"));
            Assert.False(Common.StartWith("eventbridge", "evenc"));
        }

        public class CloudEvent : TeaModel
        {
            [NameInMap("id")]
            [Validation(Required = true)]
            public string Id { get; set; }

            [NameInMap("source")]
            [Validation(Required = true, MaxLength = 128)]
            public string Source { get; set; }

            [NameInMap("specversion")]
            [Validation(Required = false)]
            public string Specversion { get; set; }

            [NameInMap("type")]
            [Validation(Required = true, MaxLength = 64)]
            public string Type { get; set; }

            [NameInMap("datacontenttype")]
            [Validation(Required = false)]
            public string Datacontenttype { get; set; }

            [NameInMap("dataschema")]
            [Validation(Required = false)]
            public string Dataschema { get; set; }

            [NameInMap("subject")]
            [Validation(Required = false)]
            public string Subject { get; set; }

            [NameInMap("time")]
            [Validation(Required = false, MaxLength = 64, Pattern = "[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*")]
            public string Time { get; set; }

            [NameInMap("extensions")]
            [Validation(Required = true)]
            public Dictionary<string, object> Extensions { get; set; }

            [NameInMap("data")]
            [Validation(Required = false)]
            public byte[] Data { get; set; }

        }

    }
}
