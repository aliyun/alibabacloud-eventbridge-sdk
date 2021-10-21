<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\SinkMNSParameters;
use AlibabaCloud\SDK\EventBridge\Models\SinkRabbitMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SinkKafkaParameters;
use AlibabaCloud\SDK\EventBridge\Models\SinkRocketMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SinkFcParameters;
use AlibabaCloud\SDK\EventBridge\Models\SinkOdpsParameters;

/**
 * The config of Sink
 */
class Sink extends Model {
    protected $_name = [
        'sinkMNSParameters' => 'SinkMNSParameters',
        'sinkRabbitMQParameters' => 'SinkRabbitMQParameters',
        'sinkKafkaParameters' => 'SinkKafkaParameters',
        'sinkRocketMQParameters' => 'SinkRocketMQParameters',
        'sinkFcParameters' => 'SinkFcParameters',
        'sinkOdpsParameters' => 'SinkOdpsParameters',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->sinkMNSParameters) {
            $res['SinkMNSParameters'] = null !== $this->sinkMNSParameters ? $this->sinkMNSParameters->toMap() : null;
        }
        if (null !== $this->sinkRabbitMQParameters) {
            $res['SinkRabbitMQParameters'] = null !== $this->sinkRabbitMQParameters ? $this->sinkRabbitMQParameters->toMap() : null;
        }
        if (null !== $this->sinkKafkaParameters) {
            $res['SinkKafkaParameters'] = null !== $this->sinkKafkaParameters ? $this->sinkKafkaParameters->toMap() : null;
        }
        if (null !== $this->sinkRocketMQParameters) {
            $res['SinkRocketMQParameters'] = null !== $this->sinkRocketMQParameters ? $this->sinkRocketMQParameters->toMap() : null;
        }
        if (null !== $this->sinkFcParameters) {
            $res['SinkFcParameters'] = null !== $this->sinkFcParameters ? $this->sinkFcParameters->toMap() : null;
        }
        if (null !== $this->sinkOdpsParameters) {
            $res['SinkOdpsParameters'] = null !== $this->sinkOdpsParameters ? $this->sinkOdpsParameters->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return Sink
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['SinkMNSParameters'])){
            $model->sinkMNSParameters = SinkMNSParameters::fromMap($map['SinkMNSParameters']);
        }
        if(isset($map['SinkRabbitMQParameters'])){
            $model->sinkRabbitMQParameters = SinkRabbitMQParameters::fromMap($map['SinkRabbitMQParameters']);
        }
        if(isset($map['SinkKafkaParameters'])){
            $model->sinkKafkaParameters = SinkKafkaParameters::fromMap($map['SinkKafkaParameters']);
        }
        if(isset($map['SinkRocketMQParameters'])){
            $model->sinkRocketMQParameters = SinkRocketMQParameters::fromMap($map['SinkRocketMQParameters']);
        }
        if(isset($map['SinkFcParameters'])){
            $model->sinkFcParameters = SinkFcParameters::fromMap($map['SinkFcParameters']);
        }
        if(isset($map['SinkOdpsParameters'])){
            $model->sinkOdpsParameters = SinkOdpsParameters::fromMap($map['SinkOdpsParameters']);
        }
        return $model;
    }
    /**
     * @var SinkMNSParameters
     */
    public $sinkMNSParameters;

    /**
     * @var SinkRabbitMQParameters
     */
    public $sinkRabbitMQParameters;

    /**
     * @var SinkKafkaParameters
     */
    public $sinkKafkaParameters;

    /**
     * @var SinkRocketMQParameters
     */
    public $sinkRocketMQParameters;

    /**
     * @var SinkFcParameters
     */
    public $sinkFcParameters;

    /**
     * @var SinkOdpsParameters
     */
    public $sinkOdpsParameters;

}
