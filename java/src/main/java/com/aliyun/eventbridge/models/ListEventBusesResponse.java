// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of search EventBus
 */
public class ListEventBusesResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventBuses")
    @Validation(required = true)
    public java.util.List<EventBusEntry> eventBuses;

    @NameInMap("NextToken")
    @Validation(required = true)
    public String nextToken;

    @NameInMap("Total")
    @Validation(required = true)
    public Integer total;

    public static ListEventBusesResponse build(java.util.Map<String, ?> map) {
        ListEventBusesResponse self = new ListEventBusesResponse();
        return TeaModel.build(map, self);
    }

    public ListEventBusesResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListEventBusesResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListEventBusesResponse setEventBuses(java.util.List<EventBusEntry> eventBuses) {
        this.eventBuses = eventBuses;
        return this;
    }
    public java.util.List<EventBusEntry> getEventBuses() {
        return this.eventBuses;
    }

    public ListEventBusesResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListEventBusesResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
