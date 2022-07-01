<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceMNSParameters
 */
class SourceMNSParameters extends Model {
    protected $_name = [
        'regionId' => 'RegionId',
        'queueName' => 'QueueName',
        'isBase64Decode' => 'IsBase64Decode',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->regionId) {
            $res['RegionId'] = $this->regionId;
        }
        if (null !== $this->queueName) {
            $res['QueueName'] = $this->queueName;
        }
        if (null !== $this->isBase64Decode) {
            $res['IsBase64Decode'] = $this->isBase64Decode;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceMNSParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RegionId'])){
            $model->regionId = $map['RegionId'];
        }
        if(isset($map['QueueName'])){
            $model->queueName = $map['QueueName'];
        }
        if(isset($map['IsBase64Decode'])){
            $model->isBase64Decode = $map['IsBase64Decode'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $regionId;

    /**
     * @var string
     */
    public $queueName;

    /**
     * @var bool
     */
    public $isBase64Decode;

}
