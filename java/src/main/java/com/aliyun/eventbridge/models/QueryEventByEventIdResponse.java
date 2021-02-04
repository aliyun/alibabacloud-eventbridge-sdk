// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventByEventIdResponse extends TeaModel {
    @NameInMap("TracedEvents")
    @Validation(required = true)
    public java.util.List<EventTrace> tracedEvents;

    @NameInMap("NextToken")
    @Validation(required = true)
    public String nextToken;

    @NameInMap("Total")
    @Validation(required = true)
    public Integer total;

    public static QueryEventByEventIdResponse build(java.util.Map<String, ?> map) {
        QueryEventByEventIdResponse self = new QueryEventByEventIdResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventByEventIdResponse setTracedEvents(java.util.List<EventTrace> tracedEvents) {
        this.tracedEvents = tracedEvents;
        return this;
    }
    public java.util.List<EventTrace> getTracedEvents() {
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
