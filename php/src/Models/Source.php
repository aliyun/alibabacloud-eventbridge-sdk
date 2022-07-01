<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\SourceMNSParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceRabbitMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceRocketMQParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceKafkaParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceMQTTParameters;
use AlibabaCloud\SDK\EventBridge\Models\SourceDTSParameters;

/**
 * The config of Source
 */
class Source extends Model {
    protected $_name = [
        'sourceMNSParameters' => 'SourceMNSParameters',
        'sourceRabbitMQParameters' => 'SourceRabbitMQParameters',
        'sourceRocketMQParameters' => 'SourceRocketMQParameters',
        'sourceKafkaParameters' => 'SourceKafkaParameters',
        'sourceMQTTParameters' => 'SourceMQTTParameters',
        'sourceDTSParameters' => 'SourceDTSParameters',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->sourceMNSParameters) {
            $res['SourceMNSParameters'] = null !== $this->sourceMNSParameters ? $this->sourceMNSParameters->toMap() : null;
        }
        if (null !== $this->sourceRabbitMQParameters) {
            $res['SourceRabbitMQParameters'] = null !== $this->sourceRabbitMQParameters ? $this->sourceRabbitMQParameters->toMap() : null;
        }
        if (null !== $this->sourceRocketMQParameters) {
            $res['SourceRocketMQParameters'] = null !== $this->sourceRocketMQParameters ? $this->sourceRocketMQParameters->toMap() : null;
        }
        if (null !== $this->sourceKafkaParameters) {
            $res['SourceKafkaParameters'] = null !== $this->sourceKafkaParameters ? $this->sourceKafkaParameters->toMap() : null;
        }
        if (null !== $this->sourceMQTTParameters) {
            $res['SourceMQTTParameters'] = null !== $this->sourceMQTTParameters ? $this->sourceMQTTParameters->toMap() : null;
        }
        if (null !== $this->sourceDTSParameters) {
            $res['SourceDTSParameters'] = null !== $this->sourceDTSParameters ? $this->sourceDTSParameters->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return Source
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['SourceMNSParameters'])){
            $model->sourceMNSParameters = SourceMNSParameters::fromMap($map['SourceMNSParameters']);
        }
        if(isset($map['SourceRabbitMQParameters'])){
            $model->sourceRabbitMQParameters = SourceRabbitMQParameters::fromMap($map['SourceRabbitMQParameters']);
        }
        if(isset($map['SourceRocketMQParameters'])){
            $model->sourceRocketMQParameters = SourceRocketMQParameters::fromMap($map['SourceRocketMQParameters']);
        }
        if(isset($map['SourceKafkaParameters'])){
            $model->sourceKafkaParameters = SourceKafkaParameters::fromMap($map['SourceKafkaParameters']);
        }
        if(isset($map['SourceMQTTParameters'])){
            $model->sourceMQTTParameters = SourceMQTTParameters::fromMap($map['SourceMQTTParameters']);
        }
        if(isset($map['SourceDTSParameters'])){
            $model->sourceDTSParameters = SourceDTSParameters::fromMap($map['SourceDTSParameters']);
        }
        return $model;
    }
    /**
     * @var SourceMNSParameters
     */
    public $sourceMNSParameters;

    /**
     * @var SourceRabbitMQParameters
     */
    public $sourceRabbitMQParameters;

    /**
     * @var SourceRocketMQParameters
     */
    public $sourceRocketMQParameters;

    /**
     * @var SourceKafkaParameters
     */
    public $sourceKafkaParameters;

    /**
     * @var SourceMQTTParameters
     */
    public $sourceMQTTParameters;

    /**
     * @var SourceDTSParameters
     */
    public $sourceDTSParameters;

}
