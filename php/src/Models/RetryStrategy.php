<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The config of RetryStrategy
 */
class RetryStrategy extends Model {
    protected $_name = [
        'pushRetryStrategy' => 'PushRetryStrategy',
        'maximumEventAgeInSeconds' => 'MaximumEventAgeInSeconds',
        'maximumRetryAttempts' => 'MaximumRetryAttempts',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->pushRetryStrategy) {
            $res['PushRetryStrategy'] = $this->pushRetryStrategy;
        }
        if (null !== $this->maximumEventAgeInSeconds) {
            $res['MaximumEventAgeInSeconds'] = $this->maximumEventAgeInSeconds;
        }
        if (null !== $this->maximumRetryAttempts) {
            $res['MaximumRetryAttempts'] = $this->maximumRetryAttempts;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return RetryStrategy
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['PushRetryStrategy'])){
            $model->pushRetryStrategy = $map['PushRetryStrategy'];
        }
        if(isset($map['MaximumEventAgeInSeconds'])){
            $model->maximumEventAgeInSeconds = $map['MaximumEventAgeInSeconds'];
        }
        if(isset($map['MaximumRetryAttempts'])){
            $model->maximumRetryAttempts = $map['MaximumRetryAttempts'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $pushRetryStrategy;

    /**
     * @var int
     */
    public $maximumEventAgeInSeconds;

    /**
     * @var int
     */
    public $maximumRetryAttempts;

}
