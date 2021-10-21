<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkFcParameters
 */
class SinkFcParameters extends Model {
    protected $_name = [
        'serviceName' => 'ServiceName',
        'functionName' => 'FunctionName',
        'body' => 'Body',
        'qualifier' => 'Qualifier',
        'invocationType' => 'InvocationType',
        'batchSize' => 'BatchSize',
        'extendConfig' => 'ExtendConfig',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->serviceName) {
            $res['ServiceName'] = null !== $this->serviceName ? $this->serviceName->toMap() : null;
        }
        if (null !== $this->functionName) {
            $res['FunctionName'] = null !== $this->functionName ? $this->functionName->toMap() : null;
        }
        if (null !== $this->body) {
            $res['Body'] = null !== $this->body ? $this->body->toMap() : null;
        }
        if (null !== $this->qualifier) {
            $res['Qualifier'] = null !== $this->qualifier ? $this->qualifier->toMap() : null;
        }
        if (null !== $this->invocationType) {
            $res['InvocationType'] = null !== $this->invocationType ? $this->invocationType->toMap() : null;
        }
        if (null !== $this->batchSize) {
            $res['BatchSize'] = null !== $this->batchSize ? $this->batchSize->toMap() : null;
        }
        if (null !== $this->extendConfig) {
            $res['ExtendConfig'] = $this->extendConfig;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkFcParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['ServiceName'])){
            $model->serviceName = TargetParameter::fromMap($map['ServiceName']);
        }
        if(isset($map['FunctionName'])){
            $model->functionName = TargetParameter::fromMap($map['FunctionName']);
        }
        if(isset($map['Body'])){
            $model->body = TargetParameter::fromMap($map['Body']);
        }
        if(isset($map['Qualifier'])){
            $model->qualifier = TargetParameter::fromMap($map['Qualifier']);
        }
        if(isset($map['InvocationType'])){
            $model->invocationType = TargetParameter::fromMap($map['InvocationType']);
        }
        if(isset($map['BatchSize'])){
            $model->batchSize = TargetParameter::fromMap($map['BatchSize']);
        }
        if(isset($map['ExtendConfig'])){
            $model->extendConfig = $map['ExtendConfig'];
        }
        return $model;
    }
    /**
     * @var TargetParameter
     */
    public $serviceName;

    /**
     * @var TargetParameter
     */
    public $functionName;

    /**
     * @var TargetParameter
     */
    public $body;

    /**
     * @var TargetParameter
     */
    public $qualifier;

    /**
     * @var TargetParameter
     */
    public $invocationType;

    /**
     * @var TargetParameter
     */
    public $batchSize;

    /**
     * @var mixed[]
     */
    public $extendConfig;

}
