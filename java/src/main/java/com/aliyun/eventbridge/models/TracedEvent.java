// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The traced event
 */
public class TracedEvent extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("EventId")
    @Validation(required = true)
    public String eventId;

    @NameInMap("EventSource")
    @Validation(required = true)
    public String eventSource;

    @NameInMap("EventReceivedTime")
    @Validation(required = true)
    public Long eventReceivedTime;

    public static TracedEvent build(java.util.Map<String, ?> map) {
        TracedEvent self = new TracedEvent();
        return TeaModel.build(map, self);
    }

    public TracedEvent setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public TracedEvent setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

    public TracedEvent setEventSource(String eventSource) {
        this.eventSource = eventSource;
        return this;
    }
    public String getEventSource() {
        return this.eventSource;
    }

    public TracedEvent setEventReceivedTime(Long eventReceivedTime) {
        this.eventReceivedTime = eventReceivedTime;
        return this;
    }
    public Long getEventReceivedTime() {
        return this.eventReceivedTime;
    }

}
