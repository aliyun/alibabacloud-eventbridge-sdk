<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of EventBuses
 */
class EventBusEntry extends Model {
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'eventBusARN' => 'EventBusARN',
        'description' => 'Description',
        'createTimestamp' => 'CreateTimestamp',
        'tags' => 'Tags',
    ];
    public function validate() {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('eventBusARN', $this->eventBusARN, true);
        Model::validateRequired('description', $this->description, true);
        Model::validateRequired('createTimestamp', $this->createTimestamp, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventBusARN) {
            $res['EventBusARN'] = $this->eventBusARN;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->createTimestamp) {
            $res['CreateTimestamp'] = $this->createTimestamp;
        }
        if (null !== $this->tags) {
            $res['Tags'] = $this->tags;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return EventBusEntry
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['EventBusARN'])){
            $model->eventBusARN = $map['EventBusARN'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['CreateTimestamp'])){
            $model->createTimestamp = $map['CreateTimestamp'];
        }
        if(isset($map['Tags'])){
            $model->tags = $map['Tags'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $eventBusARN;

    /**
     * @var string
     */
    public $description;

    /**
     * @var int
     */
    public $createTimestamp;

    /**
     * @var string[]
     */
    public $tags;

}
