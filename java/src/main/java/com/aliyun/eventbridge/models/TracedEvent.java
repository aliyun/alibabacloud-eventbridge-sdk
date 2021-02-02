// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class TracedEvent extends TeaModel {
    @NameInMap("eventReceivedTime")
    @Validation(required = true)
    public String eventReceivedTime;

    @NameInMap("EventSource")
    @Validation(required = true)
    public String eventSource;

    @NameInMap("EventId")
    @Validation(required = true)
    public String eventId;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    public static TracedEvent build(java.util.Map<String, ?> map) {
        TracedEvent self = new TracedEvent();
        return TeaModel.build(map, self);
    }

    public TracedEvent setEventReceivedTime(String eventReceivedTime) {
        this.eventReceivedTime = eventReceivedTime;
        return this;
    }
    public String getEventReceivedTime() {
        return this.eventReceivedTime;
    }

    public TracedEvent setEventSource(String eventSource) {
        this.eventSource = eventSource;
        return this;
    }
    public String getEventSource() {
        return this.eventSource;
    }

    public TracedEvent setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

    public TracedEvent setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

}
