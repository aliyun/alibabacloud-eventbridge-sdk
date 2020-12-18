English | [简体中文](README-CN.md)
![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

# Alibaba Cloud EventBridge SDK

## Requirements

- Node.js >= 8.x

## Installation

If you use `npm` to manage your dependence, you can use the following command:

```sh
$ npm install @alicloud/eventbridge -S
```

## Quick Examples

Before you begin, you need to sign up for an Alibaba Cloud account and retrieve your [Credentials](https://usercenter.console.aliyun.com/#/manage/ak).

## Demo

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

## Parameter Specification

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