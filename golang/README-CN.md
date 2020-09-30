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

## 参数说明
```go
type Config struct {
	AccessKeyId          *string                // AccessKey Id
	AccessKeySecret      *string                // AccessKey Secret
	SecurityToken        *string                // Security Token
	Endpoint             *string                // endpoint
	Protocol             *string                // 请求协议
	Credential           credential.Credential  // 凭证，如有疑问请参考：https://github.com/aliyun/credentials-go/blob/master/README-CN.md
	RegionId             *string                // 区域
	ReadTimeout          *int                   // 读超时
	ConnectTimeout       *int                   // 连接超时
	HttpProxy            *string                // http 的代理
	HttpsProxy           *string                // https 的代理
	NoProxy              *string                // 代理白名单
	MaxIdleConns         *int                   // 最大连接数
}

type RuntimeOptions struct {
	Autoretry        *bool       // 是否开启重试
	IgnoreSSL        *bool       // 是否忽略 SSL 校验
	MaxAttempts      *int        // 最大重试次数， 默认为 3
	BackoffPolicy    *string     // 重试休眠策略，默认为 no
	BackoffPeriod    *int        // 重试休眠时间， 默认为 1
	ReadTimeout      *int        // 读超时
	ConnectTimeout   *int        // 连接超时
	LocalAddr        *string     // 本地网卡 ip
	HttpProxy        *string     // http 的代理
	HttpsProxy       *string     // https 的代理
	NoProxy          *string     // 代理白名单
	MaxIdleConns     *int        // 最大连接数
	Socks5Proxy      *string     // socks5 代理
	Socks5NetWork    *string     // socks5 代理协议
}
```

## 问题
[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 相关
* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证
[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
