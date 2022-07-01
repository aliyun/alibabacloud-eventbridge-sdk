<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EBAliyunOfficialEventSourceEntry;

/**
 * The response of listAliyunOfficialEventSources
 */
class ListAliyunOfficialResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventSourceList' => 'EventSourceList',
        'nextToken' => 'NextToken',
        'total' => 'Total',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('eventSourceList', $this->eventSourceList, true);
        Model::validateRequired('nextToken', $this->nextToken, true);
        Model::validateRequired('total', $this->total, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->eventSourceList) {
            $res['EventSourceList'] = [];
            if(null !== $this->eventSourceList && is_array($this->eventSourceList)){
                $n = 0;
                foreach($this->eventSourceList as $item){
                    $res['EventSourceList'][$n++] = null !== $item ? $item->toMap() : $item;
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
     * @return ListAliyunOfficialResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventSourceList'])){
            if(!empty($map['EventSourceList'])){
                $model->eventSourceList = [];
                $n = 0;
                foreach($map['EventSourceList'] as $item) {
                    $model->eventSourceList[$n++] = null !== $item ? EBAliyunOfficialEventSourceEntry::fromMap($item) : $item;
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
     * @var EBAliyunOfficialEventSourceEntry[]
     */
    public $eventSourceList;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $total;

}
