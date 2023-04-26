// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of TargetEntry
 */
public class TargetEntry extends TeaModel {
    @NameInMap("Id")
    @Validation(required = true)
    public String id;

    @NameInMap("Type")
    @Validation(required = true)
    public String type;

    @NameInMap("Endpoint")
    @Validation(required = true)
    public String endpoint;

    @NameInMap("PushRetryStrategy")
    public String pushRetryStrategy;

    @NameInMap("ParamList")
    public java.util.List<EBTargetParam> paramList;

    @NameInMap("ConcurrentConfig")
    public ConcurrentConfig concurrentConfig;

    @NameInMap("DeadLetterQueue")
    public DeadLetterQueue deadLetterQueue;

    @NameInMap("ErrorsTolerance")
    public String errorsTolerance;

    public static TargetEntry build(java.util.Map<String, ?> map) {
        TargetEntry self = new TargetEntry();
        return TeaModel.build(map, self);
    }

    public TargetEntry setId(String id) {
        this.id = id;
        return this;
    }
    public String getId() {
        return this.id;
    }

    public TargetEntry setType(String type) {
        this.type = type;
        return this;
    }
    public String getType() {
        return this.type;
    }

    public TargetEntry setEndpoint(String endpoint) {
        this.endpoint = endpoint;
        return this;
    }
    public String getEndpoint() {
        return this.endpoint;
    }

    public TargetEntry setPushRetryStrategy(String pushRetryStrategy) {
        this.pushRetryStrategy = pushRetryStrategy;
        return this;
    }
    public String getPushRetryStrategy() {
        return this.pushRetryStrategy;
    }

    public TargetEntry setParamList(java.util.List<EBTargetParam> paramList) {
        this.paramList = paramList;
        return this;
    }
    public java.util.List<EBTargetParam> getParamList() {
        return this.paramList;
    }

    public TargetEntry setConcurrentConfig(ConcurrentConfig concurrentConfig) {
        this.concurrentConfig = concurrentConfig;
        return this;
    }
    public ConcurrentConfig getConcurrentConfig() {
        return this.concurrentConfig;
    }

    public TargetEntry setDeadLetterQueue(DeadLetterQueue deadLetterQueue) {
        this.deadLetterQueue = deadLetterQueue;
        return this;
    }
    public DeadLetterQueue getDeadLetterQueue() {
        return this.deadLetterQueue;
    }

    public TargetEntry setErrorsTolerance(String errorsTolerance) {
        this.errorsTolerance = errorsTolerance;
        return this;
    }
    public String getErrorsTolerance() {
        return this.errorsTolerance;
    }

}
