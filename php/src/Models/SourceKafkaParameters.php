<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceKafkaParameters
 */
class SourceKafkaParameters extends Model {
    protected $_name = [
        'InstanceId' => 'InstanceId',
        'topic' => 'Topic',
        'consumerGroup' => 'ConsumerGroup',
        'offsetRest' => 'OffsetRest',
    ];
    public function validate() {
        Model::validateRequired('consumerGroup', $this->consumerGroup, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->InstanceId) {
            $res['InstanceId'] = $this->InstanceId;
        }
        if (null !== $this->topic) {
            $res['Topic'] = $this->topic;
        }
        if (null !== $this->consumerGroup) {
            $res['ConsumerGroup'] = $this->consumerGroup;
        }
        if (null !== $this->offsetRest) {
            $res['OffsetRest'] = $this->offsetRest;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceKafkaParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['InstanceId'])){
            $model->InstanceId = $map['InstanceId'];
        }
        if(isset($map['Topic'])){
            $model->topic = $map['Topic'];
        }
        if(isset($map['ConsumerGroup'])){
            $model->consumerGroup = $map['ConsumerGroup'];
        }
        if(isset($map['OffsetRest'])){
            $model->offsetRest = $map['OffsetRest'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $InstanceId;

    /**
     * @var string
     */
    public $topic;

    /**
     * @var string
     */
    public $consumerGroup;

    /**
     * @var string
     */
    public $offsetRest;

}
