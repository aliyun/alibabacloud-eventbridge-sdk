<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The traced event
 */
class TracedEvent extends Model {
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'eventId' => 'EventId',
        'eventSource' => 'EventSource',
        'eventReceivedTime' => 'EventReceivedTime',
    ];
    public function validate() {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('eventId', $this->eventId, true);
        Model::validateRequired('eventSource', $this->eventSource, true);
        Model::validateRequired('eventReceivedTime', $this->eventReceivedTime, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventId) {
            $res['EventId'] = $this->eventId;
        }
        if (null !== $this->eventSource) {
            $res['EventSource'] = $this->eventSource;
        }
        if (null !== $this->eventReceivedTime) {
            $res['EventReceivedTime'] = $this->eventReceivedTime;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return TracedEvent
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['EventId'])){
            $model->eventId = $map['EventId'];
        }
        if(isset($map['EventSource'])){
            $model->eventSource = $map['EventSource'];
        }
        if(isset($map['EventReceivedTime'])){
            $model->eventReceivedTime = $map['EventReceivedTime'];
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
    public $eventId;

    /**
     * @var string
     */
    public $eventSource;

    /**
     * @var int
     */
    public $eventReceivedTime;

}
