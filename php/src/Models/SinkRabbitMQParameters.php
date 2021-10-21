<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkRabbitMQParameters
 */
class SinkRabbitMQParameters extends Model {
    protected $_name = [
        'instanceId' => 'InstanceId',
        'virtualHostName' => 'VirtualHostName',
        'targetType' => 'TargetType',
        'exchange' => 'Exchange',
        'routingKey' => 'RoutingKey',
        'queueName' => 'QueueName',
        'body' => 'Body',
        'messageId' => 'MessageId',
        'properties' => 'Properties',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->instanceId) {
            $res['InstanceId'] = null !== $this->instanceId ? $this->instanceId->toMap() : null;
        }
        if (null !== $this->virtualHostName) {
            $res['VirtualHostName'] = null !== $this->virtualHostName ? $this->virtualHostName->toMap() : null;
        }
        if (null !== $this->targetType) {
            $res['TargetType'] = null !== $this->targetType ? $this->targetType->toMap() : null;
        }
        if (null !== $this->exchange) {
            $res['Exchange'] = null !== $this->exchange ? $this->exchange->toMap() : null;
        }
        if (null !== $this->routingKey) {
            $res['RoutingKey'] = null !== $this->routingKey ? $this->routingKey->toMap() : null;
        }
        if (null !== $this->queueName) {
            $res['QueueName'] = null !== $this->queueName ? $this->queueName->toMap() : null;
        }
        if (null !== $this->body) {
            $res['Body'] = null !== $this->body ? $this->body->toMap() : null;
        }
        if (null !== $this->messageId) {
            $res['MessageId'] = null !== $this->messageId ? $this->messageId->toMap() : null;
        }
        if (null !== $this->properties) {
            $res['Properties'] = null !== $this->properties ? $this->properties->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkRabbitMQParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['InstanceId'])){
            $model->instanceId = TargetParameter::fromMap($map['InstanceId']);
        }
        if(isset($map['VirtualHostName'])){
            $model->virtualHostName = TargetParameter::fromMap($map['VirtualHostName']);
        }
        if(isset($map['TargetType'])){
            $model->targetType = TargetParameter::fromMap($map['TargetType']);
        }
        if(isset($map['Exchange'])){
            $model->exchange = TargetParameter::fromMap($map['Exchange']);
        }
        if(isset($map['RoutingKey'])){
            $model->routingKey = TargetParameter::fromMap($map['RoutingKey']);
        }
        if(isset($map['QueueName'])){
            $model->queueName = TargetParameter::fromMap($map['QueueName']);
        }
        if(isset($map['Body'])){
            $model->body = TargetParameter::fromMap($map['Body']);
        }
        if(isset($map['MessageId'])){
            $model->messageId = TargetParameter::fromMap($map['MessageId']);
        }
        if(isset($map['Properties'])){
            $model->properties = TargetParameter::fromMap($map['Properties']);
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
    public $virtualHostName;

    /**
     * @var TargetParameter
     */
    public $targetType;

    /**
     * @var TargetParameter
     */
    public $exchange;

    /**
     * @var TargetParameter
     */
    public $routingKey;

    /**
     * @var TargetParameter
     */
    public $queueName;

    /**
     * @var TargetParameter
     */
    public $body;

    /**
     * @var TargetParameter
     */
    public $messageId;

    /**
     * @var TargetParameter
     */
    public $properties;

}
