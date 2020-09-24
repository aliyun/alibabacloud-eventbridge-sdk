// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of search Targets
 */
public class ListTargetsResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("Targets")
    @Validation(required = true)
    public java.util.List<TargetEntry> targets;

    public static ListTargetsResponse build(java.util.Map<String, ?> map) {
        ListTargetsResponse self = new ListTargetsResponse();
        return TeaModel.build(map, self);
    }

    public ListTargetsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListTargetsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListTargetsResponse setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }
    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

}
