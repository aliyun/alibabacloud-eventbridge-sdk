// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of Save and start event streaming procss
 */
public class SaveAndStartEventStreamingResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventStreamingARN")
    @Validation(required = true)
    public String eventStreamingARN;

    public static SaveAndStartEventStreamingResponse build(java.util.Map<String, ?> map) {
        SaveAndStartEventStreamingResponse self = new SaveAndStartEventStreamingResponse();
        return TeaModel.build(map, self);
    }

    public SaveAndStartEventStreamingResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public SaveAndStartEventStreamingResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public SaveAndStartEventStreamingResponse setEventStreamingARN(String eventStreamingARN) {
        this.eventStreamingARN = eventStreamingARN;
        return this;
    }
    public String getEventStreamingARN() {
        return this.eventStreamingARN;
    }

}
