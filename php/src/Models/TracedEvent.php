<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

class TracedEvent extends Model
{
    /**
     * @var string
     */
    public $eventReceivedTime;

    /**
     * @var string
     */
    public $eventSource;

    /**
     * @var string
     */
    public $eventId;

    /**
     * @var string
     */
    public $eventBusName;
    protected $_name = [
        'eventReceivedTime' => 'eventReceivedTime',
        'eventSource'       => 'EventSource',
        'eventId'           => 'EventId',
        'eventBusName'      => 'EventBusName',
    ];

    public function validate()
    {
        Model::validateRequired('eventReceivedTime', $this->eventReceivedTime, true);
        Model::validateRequired('eventSource', $this->eventSource, true);
        Model::validateRequired('eventId', $this->eventId, true);
        Model::validateRequired('eventBusName', $this->eventBusName, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventReceivedTime) {
            $res['eventReceivedTime'] = $this->eventReceivedTime;
        }
        if (null !== $this->eventSource) {
            $res['EventSource'] = $this->eventSource;
        }
        if (null !== $this->eventId) {
            $res['EventId'] = $this->eventId;
        }
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return TracedEvent
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['eventReceivedTime'])) {
            $model->eventReceivedTime = $map['eventReceivedTime'];
        }
        if (isset($map['EventSource'])) {
            $model->eventSource = $map['EventSource'];
        }
        if (isset($map['EventId'])) {
            $model->eventId = $map['EventId'];
        }
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }

        return $model;
    }
}
