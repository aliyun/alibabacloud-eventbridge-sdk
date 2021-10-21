<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of query EventBridge status for a given user
 */
class QueryEventBridgeStatusResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'defaultBusEnable' => 'DefaultBusEnable',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('defaultBusEnable', $this->defaultBusEnable, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->defaultBusEnable) {
            $res['DefaultBusEnable'] = $this->defaultBusEnable;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return QueryEventBridgeStatusResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['DefaultBusEnable'])){
            $model->defaultBusEnable = $map['DefaultBusEnable'];
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
     * @var bool
     */
    public $defaultBusEnable;

}
