// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of query the event traces by the event period
 */
public class QueryEventsByPeriodResponse extends TeaModel {
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

    public static QueryEventsByPeriodResponse build(java.util.Map<String, ?> map) {
        QueryEventsByPeriodResponse self = new QueryEventsByPeriodResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventsByPeriodResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public QueryEventsByPeriodResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public QueryEventsByPeriodResponse setTracedEvents(java.util.List<TracedEvent> tracedEvents) {
        this.tracedEvents = tracedEvents;
        return this;
    }
    public java.util.List<TracedEvent> getTracedEvents() {
        return this.tracedEvents;
    }

    public QueryEventsByPeriodResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public QueryEventsByPeriodResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
