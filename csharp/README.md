English | [简体中文](README-CN.md)
![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK

## Installation

- [NuGet Package](https://www.nuget.org/packages/AlibabaCloud.SDK.Eventbridge/)

Use .Net CLI ( Recommand )

    dotnet add package AlibabaCloud.SDK.Eventbridge

Use Package Manager

    Install-Package AlibabaCloud.SDK.Eventbridge

## Demo

```csharp
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
        static void Main(string[] args)
        {
            AlibabaCloud.SDK.EventBridge.Models.Config config = new AlibabaCloud.SDK.EventBridge.Models.Config();
            // 您的AccessKey ID
            config.AccessKeyId = "<accessKeyId>";
            // 您的AccessKey Secret
            config.AccessKeySecret = "<accessKeySecret>";
            // 您的可用区ID
            config.Endpoint = "<endpoint>";
            var client = new AlibabaCloud.SDK.EventBridge.EventBridgeClient(config);

            AlibabaCloud.SDK.EventBridge.Models.CloudEvent event_ = new AlibabaCloud.SDK.EventBridge.Models.CloudEvent();
            event_.Datacontenttype = "application/json";
            event_.Data = AlibabaCloud.TeaUtil.Common.ToBytes("test");
            event_.Id = "id";
            event_.Source = "source";
            event_.Specversion = "1.0";
            event_.Type = "type";
            event_.Time = "2020-08-24T13:54:05.965Asia/Shanghai";
            event_.Subject = "1.0";
            event_.Extensions = new Dictionary<string, object>
            { { "aliyuneventbusname", "demo-bus" },
            };

            AlibabaCloud.SDK.EventBridge.Models.PutEventsResponse resp = client.PutEvents(new List<AlibabaCloud.SDK.EventBridge.Models.CloudEvent>
            {
                event_
            });
            Console.WriteLine("--------------------Publish event to the aliyun EventBus--------------------");
            Console.WriteLine(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
        }
    }
}
```

## Parameter Specification

```csharp
    public class Config {
        /// <summary>
        /// AccessKey Id
        /// </summary>
        public string AccessKeyId { get; set; }

        /// <summary>
        /// AccessKey Secret
        /// </summary>
        public string AccessKeySecret { get; set; }

        /// <summary>
        /// Security Token
        /// </summary>
        public string SecurityToken { get; set; }

        /// <summary>
        /// http or https
        /// </summary>
        public string Protocol { get; set; }

        /// <summary>
        /// region
        /// </summary>
        public string RegionId { get; set; }

        /// <summary>
        /// read timeout
        /// </summary>
        public int? ReadTimeout { get; set; }

        /// <summary>
        /// connect timeout
        /// </summary>
        public int? ConnectTimeout { get; set; }

        /// <summary>
        /// http proxy
        /// </summary>
        public string HttpProxy { get; set; }

        /// <summary>
        /// https proxy
        /// </summary>
        public string HttpsProxy { get; set; }

        /// <summary>
        /// credential,If you have any questions, please refer to it https://github.com/aliyun/credentials-csharp/blob/master/README.md
        /// </summary>
        public Aliyun.Credentials.Client Credential { get; set; }

        /// <summary>
        /// endpoint
        /// </summary>
        public string Endpoint { get; set; }

        /// <summary>
        /// proxy white list
        /// </summary>
        public string NoProxy { get; set; }

        /// <summary>
        /// max idle conns
        /// </summary>
        public int? MaxIdleConns { get; set; }

    }

    public class RuntimeOptions
    {
        /// <summary>
        /// whether to enable retry
        /// </summary>
        public bool? Autoretry { get; set; }

        /// <summary>
        /// whether SSL validation is ignored
        /// </summary>
        public bool? IgnoreSSL { get; set; }

        /// <summary>
        /// maximum number of retries, defaut: 3
        /// </summary>
        public int? MaxAttempts { get; set; }

        /// <summary>
        /// retry the sleep strategy, default: no
        /// </summary>
        public string BackoffPolicy { get; set; }

        /// <summary>
        /// retry the sleep time,default: 1
        /// </summary>
        public int? BackoffPeriod { get; set; }

        /// <summary>
        /// read timeout
        /// </summary>
        public int? ReadTimeout { get; set; }

        /// <summary>
        /// connect timeout
        /// </summary>
        public int? ConnectTimeout { get; set; }

        /// <summary>
        /// the local network adapter ip
        /// </summary>
        public string LocalAddr { get; set; }

        /// <summary>
        /// http proxy
        /// </summary>
        public string HttpProxy { get; set; }

        /// <summary>
        /// https proxy
        /// </summary>
        public string HttpsProxy { get; set; }

        /// <summary>
        /// agent whitelist
        /// </summary>
        public string NoProxy { get; set; }

        /// <summary>
        /// maximum number of connections
        /// </summary>
        public int? MaxIdleConns { get; set; }

        /// <summary>
        /// socks5 proxy
        /// </summary>
        public string Socks5Proxy { get; set; }

        /// <summary>
        /// socks5 agency agreement
        /// </summary>
        public string Socks5NetWork { get; set; }
```

## Issues

[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## References

- [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License

[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
