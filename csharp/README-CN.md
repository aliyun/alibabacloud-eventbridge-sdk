[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK

## 安装

Use .Net CLI ( Recommand )

    dotnet add package AlibabaCloud.SDK.Eventbridge

Use Package Manager

    Install-Package AlibabaCloud.SDK.Eventbridge

## 使用示例

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
            AlibabaCloud.TeaConsole.Client.Log("--------------------Publish event to the aliyun EventBus--------------------");
            AlibabaCloud.TeaConsole.Client.Log(AlibabaCloud.TeaUtil.Common.ToJSONString(resp.ToMap()));
        }
    }
}
```

## 参数说明

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
        /// 请求协议，http or https
        /// </summary>
        public string Protocol { get; set; }

        /// <summary>
        /// 区域
        /// </summary>
        public string RegionId { get; set; }

        /// <summary>
        /// 读超时
        /// </summary>
        public int? ReadTimeout { get; set; }

        /// <summary>
        /// 连接超时
        /// </summary>
        public int? ConnectTimeout { get; set; }

        /// <summary>
        /// http 的代理
        /// </summary>
        public string HttpProxy { get; set; }

        /// <summary>
        /// https 的代理
        /// </summary>
        public string HttpsProxy { get; set; }

        /// <summary>
        /// 凭证，如有疑问请参考： https://github.com/aliyun/credentials-csharp/blob/master/README-CN.md
        /// </summary>
        public Aliyun.Credentials.Client Credential { get; set; }

        /// <summary>
        /// endpoint
        /// </summary>
        public string Endpoint { get; set; }

        /// <summary>
        /// 代理白名单
        /// </summary>
        public string NoProxy { get; set; }

        /// <summary>
        /// 最大连接数
        /// </summary>
        public int? MaxIdleConns { get; set; }

    }

    public class RuntimeOptions
    {
        /// <summary>
        /// 是否开启重试
        /// </summary>
        public bool? Autoretry { get; set; }

        /// <summary>
        /// 是否忽略 SSL 校验
        /// </summary>
        public bool? IgnoreSSL { get; set; }

        /// <summary>
        /// 最大重试次数， 默认为 3
        /// </summary>
        public int? MaxAttempts { get; set; }

        /// <summary>
        /// 重试休眠策略，默认为 no
        /// </summary>
        public string BackoffPolicy { get; set; }

        /// <summary>
        /// 重试休眠时间， 默认为 1
        /// </summary>
        public int? BackoffPeriod { get; set; }

        /// <summary>
        /// 读超时
        /// </summary>
        public int? ReadTimeout { get; set; }

        /// <summary>
        /// 连接超时
        /// </summary>
        public int? ConnectTimeout { get; set; }

        /// <summary>
        /// 本地网卡 ip
        /// </summary>
        public string LocalAddr { get; set; }

        /// <summary>
        /// http 的代理
        /// </summary>
        public string HttpProxy { get; set; }

        /// <summary>
        /// https 的代理
        /// </summary>
        public string HttpsProxy { get; set; }

        /// <summary>
        /// 代理白名单
        /// </summary>
        public string NoProxy { get; set; }

        /// <summary>
        /// 最大连接数
        /// </summary>
        public int? MaxIdleConns { get; set; }

        /// <summary>
        /// socks5 代理
        /// </summary>
        public string Socks5Proxy { get; set; }

        /// <summary>
        /// socks5 代理协议
        /// </summary>
        public string Socks5NetWork { get; set; }
```

## 问题

[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 相关

- [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证

[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
