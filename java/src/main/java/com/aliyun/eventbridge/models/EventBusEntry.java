// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of EventBuses
 */
public class EventBusEntry extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("EventBusARN")
    @Validation(required = true)
    public String eventBusARN;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("CreateTimestamp")
    @Validation(required = true)
    public Long createTimestamp;

    public static EventBusEntry build(java.util.Map<String, ?> map) {
        EventBusEntry self = new EventBusEntry();
        return TeaModel.build(map, self);
    }

    public EventBusEntry setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public EventBusEntry setEventBusARN(String eventBusARN) {
        this.eventBusARN = eventBusARN;
        return this;
    }
    public String getEventBusARN() {
        return this.eventBusARN;
    }

    public EventBusEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EventBusEntry setCreateTimestamp(Long createTimestamp) {
        this.createTimestamp = createTimestamp;
        return this;
    }
    public Long getCreateTimestamp() {
        return this.createTimestamp;
    }

}
