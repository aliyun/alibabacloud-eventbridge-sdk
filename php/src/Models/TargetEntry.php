<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EBTargetParam;
use AlibabaCloud\SDK\EventBridge\Models\ConcurrentConfig;

/**
 * The detail of TargetEntry
 */
class TargetEntry extends Model {
    protected $_name = [
        'id' => 'Id',
        'type' => 'Type',
        'endpoint' => 'Endpoint',
        'pushRetryStrategy' => 'PushRetryStrategy',
        'paramList' => 'ParamList',
        'concurrentConfig' => 'ConcurrentConfig',
    ];
    public function validate() {
        Model::validateRequired('id', $this->id, true);
        Model::validateRequired('type', $this->type, true);
        Model::validateRequired('endpoint', $this->endpoint, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->id) {
            $res['Id'] = $this->id;
        }
        if (null !== $this->type) {
            $res['Type'] = $this->type;
        }
        if (null !== $this->endpoint) {
            $res['Endpoint'] = $this->endpoint;
        }
        if (null !== $this->pushRetryStrategy) {
            $res['PushRetryStrategy'] = $this->pushRetryStrategy;
        }
        if (null !== $this->paramList) {
            $res['ParamList'] = [];
            if(null !== $this->paramList && is_array($this->paramList)){
                $n = 0;
                foreach($this->paramList as $item){
                    $res['ParamList'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        if (null !== $this->concurrentConfig) {
            $res['ConcurrentConfig'] = null !== $this->concurrentConfig ? $this->concurrentConfig->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return TargetEntry
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Id'])){
            $model->id = $map['Id'];
        }
        if(isset($map['Type'])){
            $model->type = $map['Type'];
        }
        if(isset($map['Endpoint'])){
            $model->endpoint = $map['Endpoint'];
        }
        if(isset($map['PushRetryStrategy'])){
            $model->pushRetryStrategy = $map['PushRetryStrategy'];
        }
        if(isset($map['ParamList'])){
            if(!empty($map['ParamList'])){
                $model->paramList = [];
                $n = 0;
                foreach($map['ParamList'] as $item) {
                    $model->paramList[$n++] = null !== $item ? EBTargetParam::fromMap($item) : $item;
                }
            }
        }
        if(isset($map['ConcurrentConfig'])){
            $model->concurrentConfig = ConcurrentConfig::fromMap($map['ConcurrentConfig']);
        }
        return $model;
    }
    /**
     * @var string
     */
    public $id;

    /**
     * @var string
     */
    public $type;

    /**
     * @var string
     */
    public $endpoint;

    /**
     * @var string
     */
    public $pushRetryStrategy;

    /**
     * @var EBTargetParam[]
     */
    public $paramList;

    /**
     * @var ConcurrentConfig
     */
    public $concurrentConfig;

}
