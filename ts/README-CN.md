[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

# Alibaba Cloud EventBridge SDK 使用说明

## 要求

- Node.js >= 8.x

## 安装

你可以使用 `npm` 来管理你的依赖，并通过下面命令安装依赖并写入 package.json

```sh
$ npm install @alicloud/eventbridge -S
```

## 快速使用

在您开始之前，您需要注册阿里云帐户并获取您的[凭证](https://usercenter.console.aliyun.com/#/manage/ak)。
SDK 使用 [credentials-nodejs](https://github.com/aliyun/credentials-nodejs/blob/master/README-CN.md) 来管理凭证。

## 使用示例

```javascript
import Client, * as $eventbridge from "@alicloud/eventbridge"
import Util from "@alicloud/tea-util";


const config = new $eventbridge.Config();
config.endpoint = "your endpoint";
config.accessKeyId = "your access key id";
config.accessKeySecret = "your access key secret";
// init client
const client = new Client(config);
// init request
const event = new $eventbridge.CloudEvent();
event.datacontenttype =  "application/json";
event.data = Util.toBytes("test");
event.id = "id";
event.source = "source";
event.specversion = "1.0";
event.type = "type";
event.time = "2020-08-24T13:54:05.965Asia/Shanghai";
event.subject = "1.0";
event.extensions = {
    "aliyuneventbusname": "demo-bus"
};

// call api
const resp = client.putEvents([event]);
```

## 参数说明

```javascript
const config = {
  AccessKeyId: "AccessKeyId", // AccessKey Id
  AccessKeySecret: "AccessKeySecret", // AccessKey Secret
  Credential: credential.Credential, // // credential，If you have any questions, please refer to it https://github.com/aliyun/credentials-nodejs/
  SecurityToken: "SecurityToken", // Security Token
  Endpoint: "Endpoint", // endpoint
  Protocol: "Protocol", // http or https
  RegionId: "RegionId", // region
  ReadTimeout: "ReadTimeout", // read timeout
  ConnectTimeout: "ConnectTimeout", // connect tiemout
  HttpProxy: "HttpProxy", // http proxy
  HttpsProxy: "HttpsProxy", // https proxy
  NoProxy: "NoProxy", // agent whitelist
  MaxIdleConns: "MaxIdleConns", // maximum number of connections
};

const RuntimeOptions = {
  Autoretry: "Autoretry", // whether to enable retry
  IgnoreSSL: "IgnoreSSL", // whether SSL validation is ignored
  MaxAttempts: "MaxAttempts", // maximum number of retries， defaut: 3
  BackoffPolicy: "BackoffPolicy", // retry the sleep strategy, default: no
  BackoffPeriod: "BackoffPeriod", // retry the sleep time,default: 1
  ReadTimeout: "ReadTimeout", // read timeout
  ConnectTimeout: "ConnectTimeout", // connect timeout
  LocalAddr: "LocalAddr", // the local network adapter ip
  HttpProxy: "HttpProxy", // http proxy
  HttpsProxy: "HttpsProxy", // https proxy
  NoProxy: "NoProxy", // agent whitelist
  MaxIdleConns: "MaxIdleConns", // maximum number of connections
  Socks5Proxy: "Socks5Proxy", // socks5 proxy
  Socks5NetWork: "Socks5NetWork" // socks5 agency agreement
};
```


## Issues
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## References
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.