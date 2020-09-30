English | [简体中文](README-CN.md)
![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK

## Requirements
- It's necessary for you to make sure your system have installed a Go environment which is new than 1.12.0.

## Installation
If you use `go mod` to manage your dependence, you can use the following command:

```sh
 go get github.com/alibabacloud-go/eventbridge-sdk
```

## Demo
```go
package main

import (
	"fmt"

	eventbridge "github.com/alibabacloud-go/eventbridge-sdk/eventbridge"
)

func main() {
	config := new(eventbridge.Config).
		SetAccessKeyId("<accessKeyId>").
		SetAccessKeySecret("<accessKeySecret>").
		SetEndpoint("<endpoint>")

	client, err := eventbridge.NewClient(config)
	if err != nil {
		panic(err)
	}

	event := new(eventbridge.CloudEvent).
		SetDatacontenttype("application/json").
		SetData([]byte("test")).
		SetId("id").
		SetSource("source").
		SetTime("2020-08-24T13:54:05.965Asia/Shanghai").
		SetSubject("1.0").
		SetType("type").
		SetExtensions(map[string]interface{}{
			"aliyuneventbusname": "BusName",
		})

	resp, err := client.PutEvents([]*eventbridge.CloudEvent{event})
	if err != nil {
		panic(err)
	}
	fmt.Println(resp)
}
```

## Parameter Specification

```go
type Config struct {
	AccessKeyId          *string                // AccessKey Id
	AccessKeySecret      *string                // AccessKey Secret
	Credential           credential.Credential  // credential，If you have any questions, please refer to it https://github.com/aliyun/credentials-go/blob/master/README-CN.md
	SecurityToken        *string                // Security Token
	Endpoint             *string                // endpoint
	Protocol             *string                // http or https
	RegionId             *string                // region
	ReadTimeout          *int                   // read timeout
	ConnectTimeout       *int                   // connect tiemout
	HttpProxy            *string                // http proxy
	HttpsProxy           *string                // https proxy
	NoProxy              *string                // agent whitelist
	MaxIdleConns         *int                   // maximum number of connections
}

type RuntimeOptions struct {
	Autoretry        *bool       // whether to enable retry
	IgnoreSSL        *bool       // whether SSL validation is ignored
	MaxAttempts      *int        // maximum number of retries， defaut: 3
	BackoffPolicy    *string     // retry the sleep strategy, default: no
	BackoffPeriod    *int        // retry the sleep time,default: 1
	ReadTimeout      *int        // read timeout
	ConnectTimeout   *int        // connect timeout
	LocalAddr        *string     // the local network adapter ip
	HttpProxy        *string     // http proxy
	HttpsProxy       *string     // https proxy
	NoProxy          *string     // agent whitelist
	MaxIdleConns     *int        // maximum number of connections
	Socks5Proxy      *string     // socks5 proxy
	Socks5NetWork    *string     // socks5 agency agreement
}
```

## Issues
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## References
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.