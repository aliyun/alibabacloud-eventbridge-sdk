<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The response of delete Targets.
 */
class DeleteTargetsResponse extends Model
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
     * @var int
     */
    public $errorEntriesCount;

    /**
     * @var TargetResultEntry[]
     */
    public $errorEntries;
    protected $_name = [
        'requestId'              => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'errorEntriesCount'      => 'ErrorEntriesCount',
        'errorEntries'           => 'ErrorEntries',
    ];

    public function validate()
    {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('errorEntriesCount', $this->errorEntriesCount, true);
        Model::validateRequired('errorEntries', $this->errorEntries, true);
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
        if (null !== $this->errorEntriesCount) {
            $res['ErrorEntriesCount'] = $this->errorEntriesCount;
        }
        if (null !== $this->errorEntries) {
            $res['ErrorEntries'] = [];
            if (null !== $this->errorEntries && \is_array($this->errorEntries)) {
                $n = 0;
                foreach ($this->errorEntries as $item) {
                    $res['ErrorEntries'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return DeleteTargetsResponse
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
        if (isset($map['ErrorEntriesCount'])) {
            $model->errorEntriesCount = $map['ErrorEntriesCount'];
        }
        if (isset($map['ErrorEntries'])) {
            if (!empty($map['ErrorEntries'])) {
                $model->errorEntries = [];
                $n                   = 0;
                foreach ($map['ErrorEntries'] as $item) {
                    $model->errorEntries[$n++] = null !== $item ? TargetResultEntry::fromMap($item) : $item;
                }
            }
        }

        return $model;
    }
}
