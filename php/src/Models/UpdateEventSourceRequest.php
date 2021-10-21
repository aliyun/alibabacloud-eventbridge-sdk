<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\SourceRabbitMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceMNSParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceRocketMQParameters;

/**
 * The request of update the event source
 */
class UpdateEventSourceRequest extends Model {
    protected $_name = [
        'eventSourceName' => 'EventSourceName',
        'description' => 'Description',
        'eventBusName' => 'EventBusName',
        'sourceRabbitMQParameters' => 'SourceRabbitMQParameters',
        'sourceMNSParameters' => 'SourceMNSParameters',
        'sourceRocketMQParameters' => 'SourceRocketMQParameters',
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
        return $res;
    }
    /**
     * @param array $map
     * @return UpdateEventSourceRequest
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

}
