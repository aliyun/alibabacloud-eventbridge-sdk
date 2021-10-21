<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of query EventBridge status for a given user
 */
class QueryEventBridgeStatusRequest extends Model {
    protected $_name = [
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
    ];
    public function validate() {
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return QueryEventBridgeStatusRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        return $model;
    }
    /**
     * @description the accountId of resource owner
     * @var string
     */
    public $resourceOwnerAccountId;

}
