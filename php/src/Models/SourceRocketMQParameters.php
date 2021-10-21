<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceRocketMQParameters
 */
class SourceRocketMQParameters extends Model {
    protected $_name = [
        'regionId' => 'RegionId',
        'instanceId' => 'InstanceId',
        'topic' => 'Topic',
        'tag' => 'Tag',
        'timestamp' => 'Timestamp',
        'offset' => 'Offset',
        'groupID' => 'GroupID',
    ];
    public function validate() {
        Model::validateRequired('groupID', $this->groupID, true);
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
        if (null !== $this->tag) {
            $res['Tag'] = $this->tag;
        }
        if (null !== $this->timestamp) {
            $res['Timestamp'] = $this->timestamp;
        }
        if (null !== $this->offset) {
            $res['Offset'] = $this->offset;
        }
        if (null !== $this->groupID) {
            $res['GroupID'] = $this->groupID;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceRocketMQParameters
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
        if(isset($map['Tag'])){
            $model->tag = $map['Tag'];
        }
        if(isset($map['Timestamp'])){
            $model->timestamp = $map['Timestamp'];
        }
        if(isset($map['Offset'])){
            $model->offset = $map['Offset'];
        }
        if(isset($map['GroupID'])){
            $model->groupID = $map['GroupID'];
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
    public $tag;

    /**
     * @var int
     */
    public $timestamp;

    /**
     * @var string
     */
    public $offset;

    /**
     * @var string
     */
    public $groupID;

}
