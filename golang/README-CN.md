[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK

## 要求
- 您需要确保本地安装的 go 环境版本大于 1.12.0.

## 安装
你可以使用 `go mod` 来管理你的依赖，
```sh
  go get github.com/alibabacloud-go/eventbridge-sdk
```

## 使用示例
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

	req := new(eventbridge.CreateEventBusRequest).
		SetEventBusName("demo-bus")

	resp, err := client.CreateEventBus(req)
	if err != nil {
		panic(err)
	}
	fmt.Println(resp)
}
```

## 问题
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 相关
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
