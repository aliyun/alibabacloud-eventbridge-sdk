<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\SourceRabbitMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceMNSParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceRocketMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceScheduledEventParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceHttpEventParameters;

/**
 * The request of createEventSource
 */
class CreateEventSourceRequest extends Model {
    protected $_name = [
        'eventSourceName' => 'EventSourceName',
        'description' => 'Description',
        'eventBusName' => 'EventBusName',
        'sourceRabbitMQParameters' => 'SourceRabbitMQParameters',
        'sourceMNSParameters' => 'SourceMNSParameters',
        'sourceRocketMQParameters' => 'SourceRocketMQParameters',
        'sourceScheduledEventParameters' => 'SourceScheduledEventParameters',
        'sourceHttpEventParameters' => 'SourceHttpEventParameters',
    ];
    public function validate() {
        Model::validateRequired('eventSourceName', $this->eventSourceName, true);
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateMaxLength('eventSourceName', $this->eventSourceName, 127);
        Model::validateMinLength('eventSourceName', $this->eventSourceName, 1);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventSourceName) {
            $res['EventSourceName'] = $this->eventSourceName;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->sourceRabbitMQParameters) {
            $res['SourceRabbitMQParameters'] = null !== $this->sourceRabbitMQParameters ? $this->sourceRabbitMQParameters->toMap() : null;
        }
        if (null !== $this->sourceMNSParameters) {
            $res['SourceMNSParameters'] = null !== $this->sourceMNSParameters ? $this->sourceMNSParameters->toMap() : null;
        }
        if (null !== $this->sourceRocketMQParameters) {
            $res['SourceRocketMQParameters'] = null !== $this->sourceRocketMQParameters ? $this->sourceRocketMQParameters->toMap() : null;
        }
        if (null !== $this->sourceScheduledEventParameters) {
            $res['SourceScheduledEventParameters'] = null !== $this->sourceScheduledEventParameters ? $this->sourceScheduledEventParameters->toMap() : null;
        }
        if (null !== $this->sourceHttpEventParameters) {
            $res['SourceHttpEventParameters'] = null !== $this->sourceHttpEventParameters ? $this->sourceHttpEventParameters->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return CreateEventSourceRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventSourceName'])){
            $model->eventSourceName = $map['EventSourceName'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['SourceRabbitMQParameters'])){
            $model->sourceRabbitMQParameters = SourceRabbitMQParameters::fromMap($map['SourceRabbitMQParameters']);
        }
        if(isset($map['SourceMNSParameters'])){
            $model->sourceMNSParameters = SourceMNSParameters::fromMap($map['SourceMNSParameters']);
        }
        if(isset($map['SourceRocketMQParameters'])){
            $model->sourceRocketMQParameters = SourceRocketMQParameters::fromMap($map['SourceRocketMQParameters']);
        }
        if(isset($map['SourceScheduledEventParameters'])){
            $model->sourceScheduledEventParameters = SourceScheduledEventParameters::fromMap($map['SourceScheduledEventParameters']);
        }
        if(isset($map['SourceHttpEventParameters'])){
            $model->sourceHttpEventParameters = SourceHttpEventParameters::fromMap($map['SourceHttpEventParameters']);
        }
        return $model;
    }
    /**
     * @var string
     */
    public $eventSourceName;

    /**
     * @var string
     */
    public $description;

    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var SourceRabbitMQParameters
     */
    public $sourceRabbitMQParameters;

    /**
     * @var SourceMNSParameters
     */
    public $sourceMNSParameters;

    /**
     * @var SourceRocketMQParameters
     */
    public $sourceRocketMQParameters;

    /**
     * @var SourceScheduledEventParameters
     */
    public $sourceScheduledEventParameters;

    /**
     * @var SourceHttpEventParameters
     */
    public $sourceHttpEventParameters;

}
