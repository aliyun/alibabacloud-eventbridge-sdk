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
        'eventBuses' => 'EventBuses',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('eventBuses', $this->eventBuses, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->eventBuses) {
            $res['EventBuses'] = [];
            if(null !== $this->eventBuses && is_array($this->eventBuses)){
                $n = 0;
                foreach($this->eventBuses as $item){
                    $res['EventBuses'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
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
        if(isset($map['EventBuses'])){
            if(!empty($map['EventBuses'])){
                $model->eventBuses = [];
                $n = 0;
                foreach($map['EventBuses'] as $item) {
                    $model->eventBuses[$n++] = null !== $item ? EBUserDefinedEventSourceEntry::fromMap($item) : $item;
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
     * @var EBUserDefinedEventSourceEntry[]
     */
    public $eventBuses;

}
