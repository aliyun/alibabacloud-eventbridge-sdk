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
    public String type;

    @NameInMap("Endpoint")
    @Validation(required = true)
    public String endpoint;

    @NameInMap("PushSelector")
    public String pushSelector;

    @NameInMap("PushRetryStrategy")
    public String pushRetryStrategy;

    @NameInMap("ParamList")
    public java.util.List<EBTargetParam> paramList;

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

    public TargetEntry setPushSelector(String pushSelector) {
        this.pushSelector = pushSelector;
        return this;
    }
    public String getPushSelector() {
        return this.pushSelector;
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

}
