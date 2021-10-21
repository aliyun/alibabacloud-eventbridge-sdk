<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of Save and start event streaming procss
 */
class SaveAndStartEventStreamingResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventStreamingARN' => 'EventStreamingARN',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('eventStreamingARN', $this->eventStreamingARN, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->eventStreamingARN) {
            $res['EventStreamingARN'] = $this->eventStreamingARN;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SaveAndStartEventStreamingResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventStreamingARN'])){
            $model->eventStreamingARN = $map['EventStreamingARN'];
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
    public $eventStreamingARN;

}
