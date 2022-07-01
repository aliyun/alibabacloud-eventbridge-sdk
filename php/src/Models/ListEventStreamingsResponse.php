<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EBEventStreamingEntry;

/**
 * The response of search EventStreaming
 */
class ListEventStreamingsResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventStreamings' => 'EventStreamings',
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
        if (null !== $this->eventStreamings) {
            $res['EventStreamings'] = [];
            if(null !== $this->eventStreamings && is_array($this->eventStreamings)){
                $n = 0;
                foreach($this->eventStreamings as $item){
                    $res['EventStreamings'][$n++] = null !== $item ? $item->toMap() : $item;
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
     * @return ListEventStreamingsResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventStreamings'])){
            if(!empty($map['EventStreamings'])){
                $model->eventStreamings = [];
                $n = 0;
                foreach($map['EventStreamings'] as $item) {
                    $model->eventStreamings[$n++] = null !== $item ? EBEventStreamingEntry::fromMap($item) : $item;
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
     * @var EBEventStreamingEntry[]
     */
    public $eventStreamings;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $total;

}
