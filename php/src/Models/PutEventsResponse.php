<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * put event response.
 */
class PutEventsResponse extends Model
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
    public $failedEntryCount;

    /**
     * @var PutEventsResponseEntry[]
     */
    public $entryList;
    protected $_name = [
        'requestId'              => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'failedEntryCount'       => 'FailedEntryCount',
        'entryList'              => 'EntryList',
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
        if (null !== $this->failedEntryCount) {
            $res['FailedEntryCount'] = $this->failedEntryCount;
        }
        if (null !== $this->entryList) {
            $res['EntryList'] = [];
            if (null !== $this->entryList && \is_array($this->entryList)) {
                $n = 0;
                foreach ($this->entryList as $item) {
                    $res['EntryList'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }

        return $res;
    }

    /**
     * @param array $map
     *
     * @return PutEventsResponse
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
        if (isset($map['FailedEntryCount'])) {
            $model->failedEntryCount = $map['FailedEntryCount'];
        }
        if (isset($map['EntryList'])) {
            if (!empty($map['EntryList'])) {
                $model->entryList = [];
                $n                = 0;
                foreach ($map['EntryList'] as $item) {
                    $model->entryList[$n++] = null !== $item ? PutEventsResponseEntry::fromMap($item) : $item;
                }
            }
        }

        return $model;
    }
}
