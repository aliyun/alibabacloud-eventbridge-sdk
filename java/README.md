English | [简体中文](README-CN.md)
![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK

## Installation

```xml
<dependency>
   <groupId>com.aliyun</groupId>
   <artifactId>eventbridge-client</artifactId>
   <version>1.1.2-SNAPSHOT</version>
</dependency>
```

## Demo
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

## Parameter Specification

Cofing

|  field          |type                  | description |
|  :----          | :----                | :---- |
| AccessKeyId     | String               | AccessKey Id |
| AccessKeySecret | String               | AccessKey Secret |
| Credential      | credential.Credential| credential，If you have any questions, please refer to it https://github.com/aliyun/credentials-go/blob/master/README-CN.md |
| SecurityToken   | String               | Security Token |
| Endpoint        | String               | endpoint |
| Protocol        | String               | http or https |
| RegionId        | String               | region |
| ReadTimeout     | int                  | read timeout |
| ConnectTimeout  | int                  | connect tiemout |
| HttpProxy       | String               | http proxy |
| HttpsProxy      | String               | https proxy |
| NoProxy         | String               | agent whitelist |
| MaxIdleConns    | int                  | maximum number of connections |

RuntimeOptions

|  field         |type     | description |
|  :----         | :----   | :---- |
| Autoretry      | boolean | whether to enable retry |
| IgnoreSSL      | boolean | whether SSL validation is ignored |
| MaxAttempts    | int     | maximum number of retries,default: 3 |
| BackoffPolicy  | String  | retry the sleep strategy,default: no |
| BackoffPeriod  | int     | retry the sleep time,default: 1 |
| ReadTimeout    | int     | read timeout |
| ConnectTimeout | int     | connect timeout |
| LocalAddr      | String  | the local network adapter ip |
| HttpProxy      | String  | http proxy |
| HttpsProxy     | String  | https proxy |
| NoProxy        | String  | agent whitelist |
| MaxIdleConns   | int     | maximum number of connections |
| Socks5Proxy    | String  | socks5 proxy |
| Socks5NetWork  | String  | socks5 agency agreement |


## Issues
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## References
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)


Copyright (c) 2009-present, Alibaba Cloud All rights reserved.