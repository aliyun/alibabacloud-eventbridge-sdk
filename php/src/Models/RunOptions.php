<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\RetryStrategy;
use AlibabaCloud\SDK\EventBridge\Models\DeadLetterQueue;

/**
 * The config of RunOptions
 */
class RunOptions extends Model {
    protected $_name = [
        'maximumTasks' => 'MaximumTasks',
        'retryStrategy' => 'RetryStrategy',
        'errorsTolerance' => 'ErrorsTolerance',
        'deadLetterQueue' => 'DeadLetterQueue',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->maximumTasks) {
            $res['MaximumTasks'] = $this->maximumTasks;
        }
        if (null !== $this->retryStrategy) {
            $res['RetryStrategy'] = null !== $this->retryStrategy ? $this->retryStrategy->toMap() : null;
        }
        if (null !== $this->errorsTolerance) {
            $res['ErrorsTolerance'] = $this->errorsTolerance;
        }
        if (null !== $this->deadLetterQueue) {
            $res['DeadLetterQueue'] = null !== $this->deadLetterQueue ? $this->deadLetterQueue->toMap() : null;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return RunOptions
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['MaximumTasks'])){
            $model->maximumTasks = $map['MaximumTasks'];
        }
        if(isset($map['RetryStrategy'])){
            $model->retryStrategy = RetryStrategy::fromMap($map['RetryStrategy']);
        }
        if(isset($map['ErrorsTolerance'])){
            $model->errorsTolerance = $map['ErrorsTolerance'];
        }
        if(isset($map['DeadLetterQueue'])){
            $model->deadLetterQueue = DeadLetterQueue::fromMap($map['DeadLetterQueue']);
        }
        return $model;
    }
    /**
     * @var int
     */
    public $maximumTasks;

    /**
     * @var RetryStrategy
     */
    public $retryStrategy;

    /**
     * @var string
     */
    public $errorsTolerance;

    /**
     * @var DeadLetterQueue
     */
    public $deadLetterQueue;

}
