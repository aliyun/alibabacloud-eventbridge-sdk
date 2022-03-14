// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of search EventStreaming
 */
public class ListEventStreamingsResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventStreamings")
    public java.util.List<EBEventStreamingEntry> eventStreamings;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Total")
    public Integer total;

    public static ListEventStreamingsResponse build(java.util.Map<String, ?> map) {
        ListEventStreamingsResponse self = new ListEventStreamingsResponse();
        return TeaModel.build(map, self);
    }

    public ListEventStreamingsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListEventStreamingsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListEventStreamingsResponse setEventStreamings(java.util.List<EBEventStreamingEntry> eventStreamings) {
        this.eventStreamings = eventStreamings;
        return this;
    }
    public java.util.List<EBEventStreamingEntry> getEventStreamings() {
        return this.eventStreamings;
    }

    public ListEventStreamingsResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListEventStreamingsResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
