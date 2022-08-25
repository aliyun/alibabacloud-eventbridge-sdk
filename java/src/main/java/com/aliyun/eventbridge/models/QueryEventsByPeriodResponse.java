// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventsByPeriodResponse extends TeaModel {
    @NameInMap("TracedEvents")
    @Validation(required = true)
    public java.util.List<TracedEvent> tracedEvents;

    @NameInMap("NextToken")
    @Validation(required = true)
    public String nextToken;

    @NameInMap("Total")
    @Validation(required = true)
    public Integer total;

    public static QueryEventsByPeriodResponse build(java.util.Map<String, ?> map) {
        QueryEventsByPeriodResponse self = new QueryEventsByPeriodResponse();
        return TeaModel.build(map, self);
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
