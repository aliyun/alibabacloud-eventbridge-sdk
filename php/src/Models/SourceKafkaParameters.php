<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceKafkaParameters
 */
class SourceKafkaParameters extends Model {
    protected $_name = [
        'regionId' => 'RegionId',
        'instanceId' => 'InstanceId',
        'topic' => 'Topic',
        'consumerGroup' => 'ConsumerGroup',
        'offsetReset' => 'OffsetReset',
        'extendConfig' => 'ExtendConfig',
        'network' => 'Network',
        'vpcId' => 'VpcId',
        'vSwitchId' => 'VSwitchId',
        'securityGroupId' => 'SecurityGroupId',
    ];
    public function validate() {
        Model::validateRequired('consumerGroup', $this->consumerGroup, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->regionId) {
            $res['RegionId'] = $this->regionId;
        }
        if (null !== $this->instanceId) {
            $res['InstanceId'] = $this->instanceId;
        }
        if (null !== $this->topic) {
            $res['Topic'] = $this->topic;
        }
        if (null !== $this->consumerGroup) {
            $res['ConsumerGroup'] = $this->consumerGroup;
        }
        if (null !== $this->offsetReset) {
            $res['OffsetReset'] = $this->offsetReset;
        }
        if (null !== $this->extendConfig) {
            $res['ExtendConfig'] = $this->extendConfig;
        }
        if (null !== $this->network) {
            $res['Network'] = $this->network;
        }
        if (null !== $this->vpcId) {
            $res['VpcId'] = $this->vpcId;
        }
        if (null !== $this->vSwitchId) {
            $res['VSwitchId'] = $this->vSwitchId;
        }
        if (null !== $this->securityGroupId) {
            $res['SecurityGroupId'] = $this->securityGroupId;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceKafkaParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RegionId'])){
            $model->regionId = $map['RegionId'];
        }
        if(isset($map['InstanceId'])){
            $model->instanceId = $map['InstanceId'];
        }
        if(isset($map['Topic'])){
            $model->topic = $map['Topic'];
        }
        if(isset($map['ConsumerGroup'])){
            $model->consumerGroup = $map['ConsumerGroup'];
        }
        if(isset($map['OffsetReset'])){
            $model->offsetReset = $map['OffsetReset'];
        }
        if(isset($map['ExtendConfig'])){
            $model->extendConfig = $map['ExtendConfig'];
        }
        if(isset($map['Network'])){
            $model->network = $map['Network'];
        }
        if(isset($map['VpcId'])){
            $model->vpcId = $map['VpcId'];
        }
        if(isset($map['VSwitchId'])){
            $model->vSwitchId = $map['VSwitchId'];
        }
        if(isset($map['SecurityGroupId'])){
            $model->securityGroupId = $map['SecurityGroupId'];
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
    public $topic;

    /**
     * @var string
     */
    public $consumerGroup;

    /**
     * @var string
     */
    public $offsetReset;

    /**
     * @var mixed[]
     */
    public $extendConfig;

    /**
     * @var string
     */
    public $network;

    /**
     * @var string
     */
    public $vpcId;

    /**
     * @var string
     */
    public $vSwitchId;

    /**
     * @var string
     */
    public $securityGroupId;

}
