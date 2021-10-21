<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EBUserDefinedEventSourceEntry;

/**
 * The response of listUserDefinedEventSources
 */
class ListUserDefinedResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventSources' => 'EventSources',
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
        if (null !== $this->eventSources) {
            $res['EventSources'] = [];
            if(null !== $this->eventSources && is_array($this->eventSources)){
                $n = 0;
                foreach($this->eventSources as $item){
                    $res['EventSources'][$n++] = null !== $item ? $item->toMap() : $item;
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
     * @return ListUserDefinedResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventSources'])){
            if(!empty($map['EventSources'])){
                $model->eventSources = [];
                $n = 0;
                foreach($map['EventSources'] as $item) {
                    $model->eventSources[$n++] = null !== $item ? EBUserDefinedEventSourceEntry::fromMap($item) : $item;
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
     * @var EBUserDefinedEventSourceEntry[]
     */
    public $eventSources;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $total;

}
