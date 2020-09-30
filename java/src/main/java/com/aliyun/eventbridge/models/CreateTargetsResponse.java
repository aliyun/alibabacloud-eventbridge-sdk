// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of create Targets
 */
public class CreateTargetsResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventBusARN")
    @Validation(required = true)
    public String eventBusARN;

    public static CreateTargetsResponse build(java.util.Map<String, ?> map) {
        CreateTargetsResponse self = new CreateTargetsResponse();
        return TeaModel.build(map, self);
    }

    public CreateTargetsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public CreateTargetsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateTargetsResponse setEventBusARN(String eventBusARN) {
        this.eventBusARN = eventBusARN;
        return this;
    }
    public String getEventBusARN() {
        return this.eventBusARN;
    }

}
