<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkMNSParameters
 */
class SinkMNSParameters extends Model {
    protected $_name = [
        'queueName' => 'QueueName',
        'body' => 'Body',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->queueName) {
            $res['QueueName'] = null !== $this->queueName ? $this->queueName->toMap() : null;
        }
        if (null !== $this->body) {
            $res['Body'] = null !== $this->body ? $this->body->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkMNSParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['QueueName'])){
            $model->queueName = TargetParameter::fromMap($map['QueueName']);
        }
        if(isset($map['Body'])){
            $model->body = TargetParameter::fromMap($map['Body']);
        }
        return $model;
    }
    /**
     * @var TargetParameter
     */
    public $queueName;

    /**
     * @var TargetParameter
     */
    public $body;

}
