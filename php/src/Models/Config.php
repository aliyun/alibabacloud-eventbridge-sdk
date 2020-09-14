<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Credentials\Credential;
use AlibabaCloud\Tea\Model;

/**
 * Model for initing client.
 */
class Config extends Model
{
    /**
     * @description accesskey id
     *
     * @var string
     */
    public $accessKeyId;

    /**
     * @description accesskey secret
     *
     * @var string
     */
    public $accessKeySecret;

    /**
     * @description security token
     *
     * @var string
     */
    public $securityToken;

    /**
     * @description http protocol
     *
     * @example http
     *
     * @var string
     */
    public $protocol;

    /**
     * @description region id
     *
     * @example cn-hangzhou
     *
     * @var string
     */
    public $regionId;

    /**
     * @description read timeout
     *
     * @example 10
     *
     * @var int
     */
    public $readTimeout;

    /**
     * @description connect timeout
     *
     * @example 10
     *
     * @var int
     */
    public $connectTimeout;

    /**
     * @description http proxy
     *
     * @example http://localhost
     *
     * @var string
     */
    public $httpProxy;

    /**
     * @description https proxy
     *
     * @example https://localhost
     *
     * @var string
     */
    public $httpsProxy;

    /**
     * @description credential
     *
     * @example
     *
     * @var Credential
     */
    public $credential;

    /**
     * @description endpoint
     *
     * @example cs.aliyuncs.com
     *
     * @var string
     */
    public $endpoint;

    /**
     * @description proxy white list
     *
     * @example http://localhost
     *
     * @var string
     */
    public $noProxy;

    /**
     * @description max idle conns
     *
     * @example 3
     *
     * @var int
     */
    public $maxIdleConns;
    protected $_default = [
        'accessKeyId'     => '',
        'accessKeySecret' => '',
        'securityToken'   => '',
        'protocol'        => 'http',
        'regionId'        => '',
        'readTimeout'     => '',
        'connectTimeout'  => '',
        'httpProxy'       => '',
        'httpsProxy'      => '',
        'credential'      => '',
        'endpoint'        => '',
        'noProxy'         => '',
        'maxIdleConns'    => '',
    ];

    public function validate()
    {
        Model::validatePattern('regionId', $this->regionId, '^[a-zA-Z0-9_-]+$');
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->accessKeyId) {
            $res['accessKeyId'] = $this->accessKeyId;
        }
        if (null !== $this->accessKeySecret) {
            $res['accessKeySecret'] = $this->accessKeySecret;
        }
        if (null !== $this->securityToken) {
            $res['securityToken'] = $this->securityToken;
        }
        if (null !== $this->protocol) {
            $res['protocol'] = $this->protocol;
        }
        if (null !== $this->regionId) {
            $res['regionId'] = $this->regionId;
        }
        if (null !== $this->readTimeout) {
            $res['readTimeout'] = $this->readTimeout;
        }
        if (null !== $this->connectTimeout) {
            $res['connectTimeout'] = $this->connectTimeout;
        }
        if (null !== $this->httpProxy) {
            $res['httpProxy'] = $this->httpProxy;
        }
        if (null !== $this->httpsProxy) {
            $res['httpsProxy'] = $this->httpsProxy;
        }
        if (null !== $this->credential) {
            $res['credential'] = null !== $this->credential ? $this->credential->toMap() : null;
        }
        if (null !== $this->endpoint) {
            $res['endpoint'] = $this->endpoint;
        }
        if (null !== $this->noProxy) {
            $res['noProxy'] = $this->noProxy;
        }
        if (null !== $this->maxIdleConns) {
            $res['maxIdleConns'] = $this->maxIdleConns;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return Config
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['accessKeyId'])) {
            $model->accessKeyId = $map['accessKeyId'];
        }
        if (isset($map['accessKeySecret'])) {
            $model->accessKeySecret = $map['accessKeySecret'];
        }
        if (isset($map['securityToken'])) {
            $model->securityToken = $map['securityToken'];
        }
        if (isset($map['protocol'])) {
            $model->protocol = $map['protocol'];
        }
        if (isset($map['regionId'])) {
            $model->regionId = $map['regionId'];
        }
        if (isset($map['readTimeout'])) {
            $model->readTimeout = $map['readTimeout'];
        }
        if (isset($map['connectTimeout'])) {
            $model->connectTimeout = $map['connectTimeout'];
        }
        if (isset($map['httpProxy'])) {
            $model->httpProxy = $map['httpProxy'];
        }
        if (isset($map['httpsProxy'])) {
            $model->httpsProxy = $map['httpsProxy'];
        }
        if (isset($map['credential'])) {
            $model->credential = Credential::fromMap($map['credential']);
        }
        if (isset($map['endpoint'])) {
            $model->endpoint = $map['endpoint'];
        }
        if (isset($map['noProxy'])) {
            $model->noProxy = $map['noProxy'];
        }
        if (isset($map['maxIdleConns'])) {
            $model->maxIdleConns = $map['maxIdleConns'];
        }

        return $model;
    }
}
