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
    public Long startTime;

    @NameInMap("EndTime")
    @Validation(required = true)
    public Long endTime;

    @NameInMap("Limit")
    public Integer limit;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("EventType")
    public String eventType;

    @NameInMap("MatchedRule")
    public String matchedRule;

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

    public QueryEventsByPeriodRequest setStartTime(Long startTime) {
        this.startTime = startTime;
        return this;
    }
    public Long getStartTime() {
        return this.startTime;
    }

    public QueryEventsByPeriodRequest setEndTime(Long endTime) {
        this.endTime = endTime;
        return this;
    }
    public Long getEndTime() {
        return this.endTime;
    }

    public QueryEventsByPeriodRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

    public QueryEventsByPeriodRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public QueryEventsByPeriodRequest setEventType(String eventType) {
        this.eventType = eventType;
        return this;
    }
    public String getEventType() {
        return this.eventType;
    }

    public QueryEventsByPeriodRequest setMatchedRule(String matchedRule) {
        this.matchedRule = matchedRule;
        return this;
    }
    public String getMatchedRule() {
        return this.matchedRule;
    }

}
