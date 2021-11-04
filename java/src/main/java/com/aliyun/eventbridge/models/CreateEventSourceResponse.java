// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of createEventSource
 */
public class CreateEventSourceResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventSourceARN")
    public String eventSourceARN;

    public static CreateEventSourceResponse build(java.util.Map<String, ?> map) {
        CreateEventSourceResponse self = new CreateEventSourceResponse();
        return TeaModel.build(map, self);
    }

    public CreateEventSourceResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public CreateEventSourceResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateEventSourceResponse setEventSourceARN(String eventSourceARN) {
        this.eventSourceARN = eventSourceARN;
        return this;
    }
    public String getEventSourceARN() {
        return this.eventSourceARN;
    }

}
