// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of StartEventStreaming
 */
public class StartEventStreamingResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    public static StartEventStreamingResponse build(java.util.Map<String, ?> map) {
        StartEventStreamingResponse self = new StartEventStreamingResponse();
        return TeaModel.build(map, self);
    }

    public StartEventStreamingResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public StartEventStreamingResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

}
