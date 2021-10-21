<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of createEventSource
 */
class CreateEventSourceResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventSourceARN' => 'EventSourceARN',
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
        if (null !== $this->eventSourceARN) {
            $res['EventSourceARN'] = $this->eventSourceARN;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return CreateEventSourceResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventSourceARN'])){
            $model->eventSourceARN = $map['EventSourceARN'];
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
     * @var string
     */
    public $eventSourceARN;

}
