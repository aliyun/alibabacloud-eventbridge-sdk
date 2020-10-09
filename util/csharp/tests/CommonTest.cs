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

        [Fact]
        public void TestSerialize()
        {
            TestModel testModel = new TestModel
            {
                data = Encoding.UTF8.GetBytes("test"),
                datacontenttype = "text/plain"
            };

            TestModelExtension testModelExtension = new TestModelExtension
            {
                datacontenttype = "text/json",
                extensions = new Dictionary<string, object> { { "foo", "bar" } }
            };

            TestModel testModelJson = new TestModel
            {
                data = Encoding.UTF8.GetBytes("{\"bus\": \"demo\"}"),
                datacontenttype = "text/json"
            };

            TestModel testModelStr = new TestModel
            {
                data = Encoding.UTF8.GetBytes("demo"),
                datacontenttype = "text/json"
            };

            List<object> list = new List<object>();
            list.Add(testModel);
            list.Add(testModelExtension);
            list.Add(testModelJson);
            list.Add(testModelStr);

            var result = (List<Dictionary<string, object>>) Common.Serialize(list);
            Assert.NotNull(result);
            Assert.Equal(4, result.Count);
            Assert.Equal("text/plain", result[0]["datacontenttype"]);
            Assert.Equal("dGVzdA==", result[0]["data_base64"]);
            Assert.Equal("text/json", result[1]["datacontenttype"]);
            Assert.Equal("bar", result[1]["foo"]);
            Assert.Equal("demo", ((JObject)result[2]["data"]).ToObject<Dictionary<string, object>>().Get("bus"));
            Assert.Equal("demo", result[3]["data"]);
        }

        [Fact]
        public void Test_StartWith()
        {
            Assert.True(Common.StartWith("eventbridge", "event"));
            Assert.False(Common.StartWith("eventbridge", "evenc"));
        }

        public class TestModel : TeaModel
        {
            public string datacontenttype { get; set; }

            public byte[] data { get; set; }
        }

        public class TestModelExtension : TeaModel
        {
            public string datacontenttype { get; set; }

            public Dictionary<string, object> extensions { get; set; }
        }
    }
}
