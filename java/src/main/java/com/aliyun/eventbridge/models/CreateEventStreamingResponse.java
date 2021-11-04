// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of createEventStreaming
 */
public class CreateEventStreamingResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventStreamingARN")
    public String eventStreamingARN;

    public static CreateEventStreamingResponse build(java.util.Map<String, ?> map) {
        CreateEventStreamingResponse self = new CreateEventStreamingResponse();
        return TeaModel.build(map, self);
    }

    public CreateEventStreamingResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public CreateEventStreamingResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateEventStreamingResponse setEventStreamingARN(String eventStreamingARN) {
        this.eventStreamingARN = eventStreamingARN;
        return this;
    }
    public String getEventStreamingARN() {
        return this.eventStreamingARN;
    }

}
