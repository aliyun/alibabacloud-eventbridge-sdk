<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

class QueryEventByEventIdRequest extends Model
{
    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $eventSource;

    /**
     * @var string
     */
    public $eventId;
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'eventSource'  => 'EventSource',
        'eventId'      => 'EventId',
    ];

    public function validate()
    {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('eventSource', $this->eventSource, true);
        Model::validateRequired('eventId', $this->eventId, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventSource) {
            $res['EventSource'] = $this->eventSource;
        }
        if (null !== $this->eventId) {
            $res['EventId'] = $this->eventId;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return QueryEventByEventIdRequest
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }
        if (isset($map['EventSource'])) {
            $model->eventSource = $map['EventSource'];
        }
        if (isset($map['EventId'])) {
            $model->eventId = $map['EventId'];
        }

        return $model;
    }
}
