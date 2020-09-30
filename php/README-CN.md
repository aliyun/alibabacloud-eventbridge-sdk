[English](README.md) | 简体中文

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK Library for PHP

## 安装

### Composer

```bash
composer require alibabacloud/eventbridge
```

## 示例

```php
<?php
namespace demo;

require __DIR__ . '/vendor/autoload.php';

use AlibabaCloud\SDK\EventBridge\Eventbridge;
use AlibabaCloud\SDK\EventBridge\Models\Config;
use AlibabaCloud\SDK\EventBridge\Models\CloudEvent;
use AlibabaCloud\Tea\Exception\TeaUnableRetryError;

$config                  = new Config();
$config->accessKeyId     = "<Access-Key-Id>";
$config->accessKeySecret = "<Access-Key-Secret>";
$config->endpoint        = "<Endpoint>";
$client                  = new Eventbridge($config);
$request                 = new CloudEvent();
$request->datacontenttype = 'application/json';
$request->data = 'test';
$request->id= 'id';
$request->source = 'source';
$request->time = '2020-08-24T13:54:05.965Asia/Shanghai';
$request->subject = '1.0';
$request->type = 'type';
$request->extensions = [
  "aliyuneventbusname"=> "BusName"
];

try {
    $response = $client->putEvents([$request]);
    var_dump($response->toMap());
} catch (TeaUnableRetryError $e) {
    var_dump($e->getMessage());
    var_dump($e->getErrorInfo());
    var_dump($e->getLastException());
    var_dump($e->getLastRequest());
}
```

## 参数说明

```php
<?php

/**
 * Model for initing client
 * @package AlibabaCloud\SDK\EventBridge\Models
 */
class Config {
    /**
     * @description accesskey id
     * @var string
     */
    public $accessKeyId;

    /**
     * @description accesskey secret
     * @var string
     */
    public $accessKeySecret;

    /**
     * @description security token
     * @var string
     */
    public $securityToken;

    /**
     * @description 请求协议
     * @example http
     * @var string
     */
    public $protocol;

    /**
     * @description region id
     * @example cn-hangzhou
     * @var string
     */
    public $regionId;

    /**
     * @description 读超时
     * @example 10
     * @var int
     */
    public $readTimeout;

    /**
     * @description 连接超时
     * @example 10
     * @var int
     */
    public $connectTimeout;

    /**
     * @description http 代理
     * @example http://localhost
     * @var string
     */
    public $httpProxy;

    /**
     * @description https 代理
     * @example https://localhost
     * @var string
     */
    public $httpsProxy;

    /**
     * @description 凭证，如有疑问请参考：https://github.com/aliyun/credentials-php
     * @example 
     * @var Credential
     */
    public $credential;

    /**
     * @description endpoint
     * @example cs.aliyuncs.com
     * @var string
     */
    public $endpoint;

    /**
     * @description 代理白名单
     * @example http://localhost
     * @var string
     */
    public $noProxy;

    /**
     * @description 最大连接数
     * @example 3
     * @var int
     */
    public $maxIdleConns;

}

/**
 * The common runtime options model
 */
class RuntimeOptions {
    /**
     * @description whether to try again
     * @var bool
     */
    public $autoretry;

    /**
     * @description ignore SSL validation
     * @var bool
     */
    public $ignoreSSL;

    /**
     * @description maximum number of retries
     * @var int
     */
    public $maxAttempts;

    /**
     * @description backoff policy
     * @var string
     */
    public $backoffPolicy;

    /**
     * @description backoff period
     * @var int
     */
    public $backoffPeriod;

    /**
     * @description read timeout
     * @var int
     */
    public $readTimeout;

    /**
     * @description connect timeout
     * @var int
     */
    public $connectTimeout;

    /**
     * @description http proxy url
     * @var string
     */
    public $httpProxy;

    /**
     * @description https Proxy url
     * @var string
     */
    public $httpsProxy;

    /**
     * @description agent blacklist
     * @var string
     */
    public $noProxy;

    /**
     * @description maximum number of connections
     * @var int
     */
    public $maxIdleConns;

    /**
     * @description local addr
     * @var string
     */
    public $localAddr;

    /**
     * @description SOCKS5 proxy
     * @var string
     */
    public $socks5Proxy;

    /**
     * @description SOCKS5 netWork
     * @var string
     */
    public $socks5NetWork;

}

```

## 问题

[提交 Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new)，不符合指南的问题可能会立即关闭。

## 发行说明

每个版本的详细更改记录在[发行说明](./ChangeLog.txt)中。

## 相关

* [最新源码](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## 许可证

[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
