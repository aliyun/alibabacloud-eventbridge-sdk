<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceRabbitMQParameters
 */
class SourceRabbitMQParameters extends Model {
    protected $_name = [
        'regionId' => 'RegionId',
        'instanceId' => 'InstanceId',
        'virtualHostName' => 'VirtualHostName',
        'queueName' => 'QueueName',
    ];
    public function validate() {
        Model::validateRequired('virtualHostName', $this->virtualHostName, true);
        Model::validateRequired('queueName', $this->queueName, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->regionId) {
            $res['RegionId'] = $this->regionId;
        }
        if (null !== $this->instanceId) {
            $res['InstanceId'] = $this->instanceId;
        }
        if (null !== $this->virtualHostName) {
            $res['VirtualHostName'] = $this->virtualHostName;
        }
        if (null !== $this->queueName) {
            $res['QueueName'] = $this->queueName;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceRabbitMQParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RegionId'])){
            $model->regionId = $map['RegionId'];
        }
        if(isset($map['InstanceId'])){
            $model->instanceId = $map['InstanceId'];
        }
        if(isset($map['VirtualHostName'])){
            $model->virtualHostName = $map['VirtualHostName'];
        }
        if(isset($map['QueueName'])){
            $model->queueName = $map['QueueName'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $regionId;

    /**
     * @var string
     */
    public $instanceId;

    /**
     * @var string
     */
    public $virtualHostName;

    /**
     * @var string
     */
    public $queueName;

}
