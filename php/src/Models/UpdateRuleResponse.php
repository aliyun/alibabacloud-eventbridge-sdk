<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of update the EventBus rule.
 */
class UpdateRuleResponse extends Model
{
    /**
     * @var string
     */
    public $requestId;

    /**
     * @var string
     */
    public $resourceOwnerAccountId;
    protected $_name = [
        'requestId'              => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
    ];

    public function validate()
    {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
    }

    public function toMap()
    {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return UpdateRuleResponse
     */
    public static function fromMap($map = [])
    {
        $model = new self();
        if (isset($map['RequestId'])) {
            $model->requestId = $map['RequestId'];
        }
        if (isset($map['ResourceOwnerAccountId'])) {
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }

        return $model;
    }
}
