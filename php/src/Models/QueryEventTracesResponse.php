<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EventTrace;

/**
 * The response of queryEventTraces
 */
class QueryEventTracesResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventTraceList' => 'EventTraceList',
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
        if (null !== $this->eventTraceList) {
            $res['EventTraceList'] = [];
            if(null !== $this->eventTraceList && is_array($this->eventTraceList)){
                $n = 0;
                foreach($this->eventTraceList as $item){
                    $res['EventTraceList'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        return $res;
    }
    /**
     * @param array $map
     * @return QueryEventTracesResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventTraceList'])){
            if(!empty($map['EventTraceList'])){
                $model->eventTraceList = [];
                $n = 0;
                foreach($map['EventTraceList'] as $item) {
                    $model->eventTraceList[$n++] = null !== $item ? EventTrace::fromMap($item) : $item;
                }
            }
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
     * @var EventTrace[]
     */
    public $eventTraceList;

}
