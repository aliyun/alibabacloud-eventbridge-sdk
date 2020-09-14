<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of create EventBus.
 */
class CreateEventBusResponse extends Model
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
    public $eventBusARN;
    protected $_name = [
        'requestId'              => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventBusARN'            => 'EventBusARN',
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
        if (null !== $this->eventBusARN) {
            $res['EventBusARN'] = $this->eventBusARN;
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return CreateEventBusResponse
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
        if (isset($map['EventBusARN'])) {
            $model->eventBusARN = $map['EventBusARN'];
        }

        return $model;
    }
}
