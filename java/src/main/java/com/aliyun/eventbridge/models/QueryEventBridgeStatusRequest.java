// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of query EventBridge status for a given user
 */
public class QueryEventBridgeStatusRequest extends TeaModel {
    // the accountId of resource owner
    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    public static QueryEventBridgeStatusRequest build(java.util.Map<String, ?> map) {
        QueryEventBridgeStatusRequest self = new QueryEventBridgeStatusRequest();
        return TeaModel.build(map, self);
    }

    public QueryEventBridgeStatusRequest setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

}
