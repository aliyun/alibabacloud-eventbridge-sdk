// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of RunOptions
 */
public class RunOptions extends TeaModel {
    @NameInMap("MaximumTasks")
    public Integer maximumTasks;

    @NameInMap("RetryStrategy")
    public RetryStrategy retryStrategy;

    @NameInMap("ErrorsTolerance")
    public String errorsTolerance;

    @NameInMap("DeadLetterQueue")
    public DeadLetterQueue deadLetterQueue;

    @NameInMap("BatchWindow")
    public BatchWindow batchWindow;

    public static RunOptions build(java.util.Map<String, ?> map) {
        RunOptions self = new RunOptions();
        return TeaModel.build(map, self);
    }

    public RunOptions setMaximumTasks(Integer maximumTasks) {
        this.maximumTasks = maximumTasks;
        return this;
    }
    public Integer getMaximumTasks() {
        return this.maximumTasks;
    }

    public RunOptions setRetryStrategy(RetryStrategy retryStrategy) {
        this.retryStrategy = retryStrategy;
        return this;
    }
    public RetryStrategy getRetryStrategy() {
        return this.retryStrategy;
    }

    public RunOptions setErrorsTolerance(String errorsTolerance) {
        this.errorsTolerance = errorsTolerance;
        return this;
    }
    public String getErrorsTolerance() {
        return this.errorsTolerance;
    }

    public RunOptions setDeadLetterQueue(DeadLetterQueue deadLetterQueue) {
        this.deadLetterQueue = deadLetterQueue;
        return this;
    }
    public DeadLetterQueue getDeadLetterQueue() {
        return this.deadLetterQueue;
    }

    public RunOptions setBatchWindow(BatchWindow batchWindow) {
        this.batchWindow = batchWindow;
        return this;
    }
    public BatchWindow getBatchWindow() {
        return this.batchWindow;
    }

}
