[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK
<a href="https://search.maven.org/search?q=g:%22com.aliyun%22%20AND%20a:%22eventbridge-client%22"><img src="https://img.shields.io/maven-central/v/com.aliyun/eventbridge-client.svg?label=Maven%20Central" alt="Latest Stable Version"/></a>


## 安装

Alibaba Cloud SDK for Java 需要1.7以上的JDK。

```xml
<dependency>
   <groupId>com.aliyun</groupId>
   <artifactId>eventbridge-client</artifactId>
   <version>使用maven标签所示版本</version>
</dependency>
```

## 使用示例
```java
import com.aliyun.eventbridge.EventBridgeClient;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.GetEventBusRequest;
import com.aliyun.eventbridge.models.GetEventBusResponse;

public class EventDemo {
    public static void main(String[] args) {
        Config config = new Config();
        config.setAccessKeyId("your accessKeyId")
                .setAccessKeySecret("your accessKeySecret")
                .setEndpoint("your endpoint");
        EventBridgeClient client = new EventBridgeClient(config);
        GetEventBusRequest describeEventBusRequest = new GetEventBusRequest();
        describeEventBusRequest.eventBusName = "demo-bus";
        GetEventBusResponse deScribeResponse = client.getEventBus(describeEventBusRequest);
    }
}

```

## 参数说明

Config

|  field          |type                  | description |
|  :----          | :----                | :---- |
| AccessKeyId     | String               | AccessKey Id |
| AccessKeySecret | String               | AccessKey Secret |
| Credential      | credential.Credential| 凭证，如有疑问请参考： https://github.com/aliyun/credentials-go/blob/master/README-CN.md |
| SecurityToken   | String               | Security Token |
| Endpoint        | String               | endpoint |
| Protocol        | String               | 请求协议 |
| RegionId        | String               | 区域 |
| ReadTimeout     | int                  | 读超时 |
| ConnectTimeout  | int                  | 连接超时 |
| HttpProxy       | String               | http 的代理 |
| HttpsProxy      | String               | https 的代理 |
| NoProxy         | String               | 代理白名单 |
| MaxIdleConns    | int                  | 最大连接数 |

RuntimeOptions

|  field         |type     | description |
|  :----         | :----   | :---- |
| Autoretry      | boolean | 是否开启重试 |
| IgnoreSSL      | boolean | 是否忽略 SSL 校验 |
| MaxAttempts    | int     | 最大重试次数，默认为 3 |
| BackoffPolicy  | String  | 重试休眠策略，默认为 no |
| BackoffPeriod  | int     | 重试休眠时间，默认为 1 |
| ReadTimeout    | int     | 读超时 |
| ConnectTimeout | int     | 连接超时 |
| LocalAddr      | String  | 本地网卡 |
| HttpProxy      | String  | http 的代理|
| HttpsProxy     | String  | https 的代理 |
| NoProxy        | String  | 代理白名单 |
| MaxIdleConns   | int     | 最大连接数 |
| Socks5Proxy    | String  | socks5 代理 |
| Socks5NetWork  | String  | socks5 代理协议 |


## 问题
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 相关
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
