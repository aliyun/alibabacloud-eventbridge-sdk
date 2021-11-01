// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of query EventBridge status for a given user
 */
public class QueryEventBridgeStatusResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("DefaultBusEnable")
    @Validation(required = true)
    public Boolean defaultBusEnable;

    public static QueryEventBridgeStatusResponse build(java.util.Map<String, ?> map) {
        QueryEventBridgeStatusResponse self = new QueryEventBridgeStatusResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventBridgeStatusResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public QueryEventBridgeStatusResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public QueryEventBridgeStatusResponse setDefaultBusEnable(Boolean defaultBusEnable) {
        this.defaultBusEnable = defaultBusEnable;
        return this;
    }
    public Boolean getDefaultBusEnable() {
        return this.defaultBusEnable;
    }

}
