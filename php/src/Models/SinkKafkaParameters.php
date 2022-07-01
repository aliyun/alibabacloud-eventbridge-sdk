<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkKafkaParameters
 */
class SinkKafkaParameters extends Model {
    protected $_name = [
        'instanceId' => 'InstanceId',
        'topic' => 'Topic',
        'acks' => 'Acks',
        'key' => 'Key',
        'value' => 'Value',
        'extendConfig' => 'ExtendConfig',
        'saslUser' => 'SaslUser',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->instanceId) {
            $res['InstanceId'] = null !== $this->instanceId ? $this->instanceId->toMap() : null;
        }
        if (null !== $this->topic) {
            $res['Topic'] = null !== $this->topic ? $this->topic->toMap() : null;
        }
        if (null !== $this->acks) {
            $res['Acks'] = null !== $this->acks ? $this->acks->toMap() : null;
        }
        if (null !== $this->key) {
            $res['Key'] = null !== $this->key ? $this->key->toMap() : null;
        }
        if (null !== $this->value) {
            $res['Value'] = null !== $this->value ? $this->value->toMap() : null;
        }
        if (null !== $this->extendConfig) {
            $res['ExtendConfig'] = $this->extendConfig;
        }
        if (null !== $this->saslUser) {
            $res['SaslUser'] = null !== $this->saslUser ? $this->saslUser->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkKafkaParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['InstanceId'])){
            $model->instanceId = TargetParameter::fromMap($map['InstanceId']);
        }
        if(isset($map['Topic'])){
            $model->topic = TargetParameter::fromMap($map['Topic']);
        }
        if(isset($map['Acks'])){
            $model->acks = TargetParameter::fromMap($map['Acks']);
        }
        if(isset($map['Key'])){
            $model->key = TargetParameter::fromMap($map['Key']);
        }
        if(isset($map['Value'])){
            $model->value = TargetParameter::fromMap($map['Value']);
        }
        if(isset($map['ExtendConfig'])){
            $model->extendConfig = $map['ExtendConfig'];
        }
        if(isset($map['SaslUser'])){
            $model->saslUser = TargetParameter::fromMap($map['SaslUser']);
        }
        return $model;
    }
    /**
     * @var TargetParameter
     */
    public $instanceId;

    /**
     * @var TargetParameter
     */
    public $topic;

    /**
     * @var TargetParameter
     */
    public $acks;

    /**
     * @var TargetParameter
     */
    public $key;

    /**
     * @var TargetParameter
     */
    public $value;

    /**
     * @var mixed[]
     */
    public $extendConfig;

    /**
     * @var TargetParameter
     */
    public $saslUser;

}
