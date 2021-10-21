<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of queryEventTraces
 */
class QueryEventTracesRequest extends Model {
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'eventId' => 'EventId',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->eventId) {
            $res['EventId'] = $this->eventId;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return QueryEventTracesRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['EventId'])){
            $model->eventId = $map['EventId'];
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

}
