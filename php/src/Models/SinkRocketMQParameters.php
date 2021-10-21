<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TargetParameter;

/**
 * The config of SinkRocketMQParameters
 */
class SinkRocketMQParameters extends Model {
    protected $_name = [
        'instanceId' => 'InstanceId',
        'topic' => 'Topic',
        'body' => 'Body',
        'properties' => 'Properties',
        'keys' => 'Keys',
        'tags' => 'Tags',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->instanceId) {
            $res['InstanceId'] = null !== $this->instanceId ? $this->instanceId->toMap() : null;
        }
        if (null !== $this->topic) {
            $res['Topic'] = null !== $this->topic ? $this->topic->toMap() : null;
        }
        if (null !== $this->body) {
            $res['Body'] = null !== $this->body ? $this->body->toMap() : null;
        }
        if (null !== $this->properties) {
            $res['Properties'] = null !== $this->properties ? $this->properties->toMap() : null;
        }
        if (null !== $this->keys) {
            $res['Keys'] = null !== $this->keys ? $this->keys->toMap() : null;
        }
        if (null !== $this->tags) {
            $res['Tags'] = null !== $this->tags ? $this->tags->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SinkRocketMQParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['InstanceId'])){
            $model->instanceId = TargetParameter::fromMap($map['InstanceId']);
        }
        if(isset($map['Topic'])){
            $model->topic = TargetParameter::fromMap($map['Topic']);
        }
        if(isset($map['Body'])){
            $model->body = TargetParameter::fromMap($map['Body']);
        }
        if(isset($map['Properties'])){
            $model->properties = TargetParameter::fromMap($map['Properties']);
        }
        if(isset($map['Keys'])){
            $model->keys = TargetParameter::fromMap($map['Keys']);
        }
        if(isset($map['Tags'])){
            $model->tags = TargetParameter::fromMap($map['Tags']);
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
    public $topic;

    /**
     * @var TargetParameter
     */
    public $body;

    /**
     * @var TargetParameter
     */
    public $properties;

    /**
     * @var TargetParameter
     */
    public $keys;

    /**
     * @var TargetParameter
     */
    public $tags;

}
