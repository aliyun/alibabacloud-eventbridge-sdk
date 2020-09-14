<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of get the detail of EventBus.
 */
class GetEventBusRequest extends Model
{
    /**
     * @var string
     */
    public $eventBusName;
    protected $_name = [
        'eventBusName' => 'EventBusName',
    ];

    public function validate()
    {
        Model::validateRequired('eventBusName', $this->eventBusName, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return GetEventBusRequest
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['EventBusName'])) {
            $model->eventBusName = $map['EventBusName'];
        }

        return $model;
    }
}
