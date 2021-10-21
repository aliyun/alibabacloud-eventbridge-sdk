<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\TracedEvent;

/**
 * The response of query the event traces by the event period
 */
class QueryEventsByPeriodResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'tracedEvents' => 'TracedEvents',
        'nextToken' => 'NextToken',
        'total' => 'Total',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->tracedEvents) {
            $res['TracedEvents'] = [];
            if(null !== $this->tracedEvents && is_array($this->tracedEvents)){
                $n = 0;
                foreach($this->tracedEvents as $item){
                    $res['TracedEvents'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }
        if (null !== $this->total) {
            $res['Total'] = $this->total;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return QueryEventsByPeriodResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['TracedEvents'])){
            if(!empty($map['TracedEvents'])){
                $model->tracedEvents = [];
                $n = 0;
                foreach($map['TracedEvents'] as $item) {
                    $model->tracedEvents[$n++] = null !== $item ? TracedEvent::fromMap($item) : $item;
                }
            }
        }
        if(isset($map['NextToken'])){
            $model->nextToken = $map['NextToken'];
        }
        if(isset($map['Total'])){
            $model->total = $map['Total'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $requestId;

    /**
     * @var string
     */
    public $resourceOwnerAccountId;

    /**
     * @var TracedEvent[]
     */
    public $tracedEvents;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $total;

}
