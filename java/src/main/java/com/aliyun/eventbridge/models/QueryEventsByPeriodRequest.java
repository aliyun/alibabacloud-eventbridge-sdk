// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventsByPeriodRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("EventSource")
    public String eventSource;

    @NameInMap("StartTime")
    @Validation(required = true)
    public Number startTime;

    @NameInMap("EndTime")
    @Validation(required = true)
    public Number endTime;

    @NameInMap("Limit")
    public Number limit;

    @NameInMap("NextToken")
    public String nextToken;

    public static QueryEventsByPeriodRequest build(java.util.Map<String, ?> map) {
        QueryEventsByPeriodRequest self = new QueryEventsByPeriodRequest();
        return TeaModel.build(map, self);
    }

    public QueryEventsByPeriodRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public QueryEventsByPeriodRequest setEventSource(String eventSource) {
        this.eventSource = eventSource;
        return this;
    }
    public String getEventSource() {
        return this.eventSource;
    }

    public QueryEventsByPeriodRequest setStartTime(Number startTime) {
        this.startTime = startTime;
        return this;
    }
    public Number getStartTime() {
        return this.startTime;
    }

    public QueryEventsByPeriodRequest setEndTime(Number endTime) {
        this.endTime = endTime;
        return this;
    }
    public Number getEndTime() {
        return this.endTime;
    }

    public QueryEventsByPeriodRequest setLimit(Number limit) {
        this.limit = limit;
        return this;
    }
    public Number getLimit() {
        return this.limit;
    }

    public QueryEventsByPeriodRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

}
