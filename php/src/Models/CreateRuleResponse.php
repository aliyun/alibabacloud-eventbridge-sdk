<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of create EventBus Rule.
 */
class CreateRuleResponse extends Model
{
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
    public $ruleARN;
    protected $_name = [
        'requestId'              => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'ruleARN'                => 'RuleARN',
    ];

    public function validate()
    {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('ruleARN', $this->ruleARN, true);
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
        if (null !== $this->ruleARN) {
            $res['RuleARN'] = $this->ruleARN;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return CreateRuleResponse
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
        if (isset($map['RuleARN'])) {
            $model->ruleARN = $map['RuleARN'];
        }

        return $model;
    }
}
