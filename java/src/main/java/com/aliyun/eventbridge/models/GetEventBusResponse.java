// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The response of get the detail of EventBus
 */
public class GetEventBusResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("EventBusARN")
    @Validation(required = true)
    public String eventBusARN;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("CreateTimestamp")
    @Validation(required = true)
    public Long createTimestamp;

    public static GetEventBusResponse build(java.util.Map<String, ?> map) {
        GetEventBusResponse self = new GetEventBusResponse();
        return TeaModel.build(map, self);
    }

    public GetEventBusResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public GetEventBusResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public GetEventBusResponse setEventBusARN(String eventBusARN) {
        this.eventBusARN = eventBusARN;
        return this;
    }

    public String getEventBusARN() {
        return this.eventBusARN;
    }

    public GetEventBusResponse setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }

    public String getEventBusName() {
        return this.eventBusName;
    }

    public GetEventBusResponse setDescription(String description) {
        this.description = description;
        return this;
    }

    public String getDescription() {
        return this.description;
    }

    public GetEventBusResponse setCreateTimestamp(Long createTimestamp) {
        this.createTimestamp = createTimestamp;
        return this;
    }

    public Long getCreateTimestamp() {
        return this.createTimestamp;
    }

}
