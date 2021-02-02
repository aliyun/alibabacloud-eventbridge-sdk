<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

class EventTrace extends Model
{
    /**
     * @var string
     */
    public $resourceOwnerId;

    /**
     * @var string
     */
    public $action;

    /**
     * @var string
     */
    public $eventId;

    /**
     * @var string
     */
    public $eventBusName;

    /**
     * @var string
     */
    public $actionTime;
    protected $_name = [
        'resourceOwnerId' => 'ResourceOwnerId',
        'action'          => 'Action',
        'eventId'         => 'EventId',
        'eventBusName'    => 'EventBusName',
        'actionTime'      => 'ActionTime',
    ];

    public function validate()
    {
        Model::validateRequired('resourceOwnerId', $this->resourceOwnerId, true);
        Model::validateRequired('action', $this->action, true);
        Model::validateRequired('eventId', $this->eventId, true);
        Model::validateRequired('eventBusName', $this->eventBusName, true);
        Model::validateRequired('actionTime', $this->actionTime, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->resourceOwnerId) {
            $res['ResourceOwnerId'] = $this->resourceOwnerId;
        }
        if (null !== $this->action) {
            $res['Action'] = $this->action;
        }
        if (null !== $this->eventId) {
            $res['EventId'] = $this->eventId;
        }
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->actionTime) {
            $res['ActionTime'] = $this->actionTime;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return EventTrace
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['ResourceOwnerId'])) {
            $model->resourceOwnerId = $map['ResourceOwnerId'];
        }
        if (isset($map['Action'])) {
            $model->action = $map['Action'];
        }
        if (isset($map['EventId'])) {
            $model->eventId = $map['EventId'];
        }
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }
        if (isset($map['ActionTime'])) {
            $model->actionTime = $map['ActionTime'];
        }

        return $model;
    }
}
