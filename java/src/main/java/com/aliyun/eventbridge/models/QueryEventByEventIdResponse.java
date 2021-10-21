// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of query event by id
 */
public class QueryEventByEventIdResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("TracedEvents")
    public java.util.List<TracedEvent> tracedEvents;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Total")
    public Integer total;

    public static QueryEventByEventIdResponse build(java.util.Map<String, ?> map) {
        QueryEventByEventIdResponse self = new QueryEventByEventIdResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventByEventIdResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public QueryEventByEventIdResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public QueryEventByEventIdResponse setTracedEvents(java.util.List<TracedEvent> tracedEvents) {
        this.tracedEvents = tracedEvents;
        return this;
    }
    public java.util.List<TracedEvent> getTracedEvents() {
        return this.tracedEvents;
    }

    public QueryEventByEventIdResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public QueryEventByEventIdResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
