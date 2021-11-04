// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of RetryStrategy
 */
public class RetryStrategy extends TeaModel {
    @NameInMap("PushRetryStrategy")
    public String pushRetryStrategy;

    @NameInMap("MaximumEventAgeInSeconds")
    public Integer maximumEventAgeInSeconds;

    @NameInMap("MaximumRetryAttempts")
    public Integer maximumRetryAttempts;

    public static RetryStrategy build(java.util.Map<String, ?> map) {
        RetryStrategy self = new RetryStrategy();
        return TeaModel.build(map, self);
    }

    public RetryStrategy setPushRetryStrategy(String pushRetryStrategy) {
        this.pushRetryStrategy = pushRetryStrategy;
        return this;
    }
    public String getPushRetryStrategy() {
        return this.pushRetryStrategy;
    }

    public RetryStrategy setMaximumEventAgeInSeconds(Integer maximumEventAgeInSeconds) {
        this.maximumEventAgeInSeconds = maximumEventAgeInSeconds;
        return this;
    }
    public Integer getMaximumEventAgeInSeconds() {
        return this.maximumEventAgeInSeconds;
    }

    public RetryStrategy setMaximumRetryAttempts(Integer maximumRetryAttempts) {
        this.maximumRetryAttempts = maximumRetryAttempts;
        return this;
    }
    public Integer getMaximumRetryAttempts() {
        return this.maximumRetryAttempts;
    }

}
