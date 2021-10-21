// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of query the event by id
 */
public class QueryEventByEventIdRequest extends TeaModel {
    @NameInMap("EventBusName")
    public String eventBusName;

    @NameInMap("EventSource")
    public String eventSource;

    @NameInMap("EventId")
    public String eventId;

    public static QueryEventByEventIdRequest build(java.util.Map<String, ?> map) {
        QueryEventByEventIdRequest self = new QueryEventByEventIdRequest();
        return TeaModel.build(map, self);
    }

    public QueryEventByEventIdRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public QueryEventByEventIdRequest setEventSource(String eventSource) {
        this.eventSource = eventSource;
        return this;
    }
    public String getEventSource() {
        return this.eventSource;
    }

    public QueryEventByEventIdRequest setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

}
