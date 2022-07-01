<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceHttpEventParameters
 */
class SourceHttpEventParameters extends Model {
    protected $_name = [
        'type' => 'Type',
        'method' => 'Method',
        'securityConfig' => 'SecurityConfig',
        'ip' => 'Ip',
        'referer' => 'Referer',
    ];
    public function validate() {
        Model::validateRequired('type', $this->type, true);
        Model::validateRequired('method', $this->method, true);
        Model::validateRequired('securityConfig', $this->securityConfig, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->type) {
            $res['Type'] = $this->type;
        }
        if (null !== $this->method) {
            $res['Method'] = $this->method;
        }
        if (null !== $this->securityConfig) {
            $res['SecurityConfig'] = $this->securityConfig;
        }
        if (null !== $this->ip) {
            $res['Ip'] = $this->ip;
        }
        if (null !== $this->referer) {
            $res['Referer'] = $this->referer;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceHttpEventParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Type'])){
            $model->type = $map['Type'];
        }
        if(isset($map['Method'])){
            if(!empty($map['Method'])){
                $model->method = $map['Method'];
            }
        }
        if(isset($map['SecurityConfig'])){
            $model->securityConfig = $map['SecurityConfig'];
        }
        if(isset($map['Ip'])){
            if(!empty($map['Ip'])){
                $model->ip = $map['Ip'];
            }
        }
        if(isset($map['Referer'])){
            if(!empty($map['Referer'])){
                $model->referer = $map['Referer'];
            }
        }
        return $model;
    }
    /**
     * @var string
     */
    public $type;

    /**
     * @var string[]
     */
    public $method;

    /**
     * @var string
     */
    public $securityConfig;

    /**
     * @var string[]
     */
    public $ip;

    /**
     * @var string[]
     */
    public $referer;

}
