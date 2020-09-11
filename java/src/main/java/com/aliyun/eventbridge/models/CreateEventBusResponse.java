// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;

/**
 * The response of create EventBus
 */
public class CreateEventBusResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("EventBusARN")
    public String eventBusARN;

    public static CreateEventBusResponse build(java.util.Map<String, ?> map) {
        CreateEventBusResponse self = new CreateEventBusResponse();
        return TeaModel.build(map, self);
    }

    public CreateEventBusResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public CreateEventBusResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateEventBusResponse setEventBusARN(String eventBusARN) {
        this.eventBusARN = eventBusARN;
        return this;
    }

    public String getEventBusARN() {
        return this.eventBusARN;
    }

}
