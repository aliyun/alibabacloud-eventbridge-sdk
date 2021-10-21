<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of deleteEventSource
 */
class DeleteEventSourceRequest extends Model {
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'eventSourceName' => 'EventSourceName',
    ];
    public function validate() {
        Model::validateRequired('eventSourceName', $this->eventSourceName, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventSourceName) {
            $res['EventSourceName'] = $this->eventSourceName;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return DeleteEventSourceRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['EventSourceName'])){
            $model->eventSourceName = $map['EventSourceName'];
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
    public $eventSourceName;

}
