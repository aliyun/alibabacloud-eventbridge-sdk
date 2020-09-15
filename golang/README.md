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

## Issues
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## References
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.