<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of listUserDefinedEventSources
 */
class ListUserDefinedRequest extends Model {
    protected $_name = [
        'eventBusName' => 'EventBusName',
        'nextToken' => 'NextToken',
        'limit' => 'Limit',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->eventBusName) {
            $res['EventBusName'] = $this->eventBusName;
        }
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }
        if (null !== $this->limit) {
            $res['Limit'] = $this->limit;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return ListUserDefinedRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventBusName'])){
            $model->eventBusName = $map['EventBusName'];
        }
        if(isset($map['NextToken'])){
            $model->nextToken = $map['NextToken'];
        }
        if(isset($map['Limit'])){
            $model->limit = $map['Limit'];
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
    public $nextToken;

    /**
     * @var int
     */
    public $limit;

}
