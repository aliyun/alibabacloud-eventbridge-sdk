English | [简体中文](README-CN.md)

![](https://aliyunsdk-pages.alicdn.com/icons/AlibabaCloud.svg)

## Alibaba Cloud EventBridge SDK Library for PHP

## Installation

### Composer

```bash
composer require alibabacloud/eventbridge
```

## Demo

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

## Parameter Specification

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
     * @description http protocol
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
     * @description read timeout
     * @example 10
     * @var int
     */
    public $readTimeout;

    /**
     * @description connect timeout
     * @example 10
     * @var int
     */
    public $connectTimeout;

    /**
     * @description http proxy
     * @example http://localhost
     * @var string
     */
    public $httpProxy;

    /**
     * @description https proxy
     * @example https://localhost
     * @var string
     */
    public $httpsProxy;

    /**
     * @description credential
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
     * @description proxy white list
     * @example http://localhost
     * @var string
     */
    public $noProxy;

    /**
     * @description max idle conns
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

## Issues

[Opening an Issue](https://github.com/aliyun/alibabacloud-eventbridge-sdk/issues/new), Issues not conforming to the guidelines may be closed immediately.

## Changelog

Detailed changes for each release are documented in the [release notes](./ChangeLog.txt).

## References

* [Latest Release](https://github.com/aliyun/alibabacloud-eventbridge-sdk)

## License

[Apache-2.0](http://www.apache.org/licenses/LICENSE-2.0)

Copyright (c) 2009-present, Alibaba Cloud All rights reserved.
