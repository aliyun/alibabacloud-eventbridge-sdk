// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of EventTrace
 */
public class EventTrace extends TeaModel {
    @NameInMap("ResourceOwnerId")
    @Validation(required = true)
    public String resourceOwnerId;

    @NameInMap("Action")
    @Validation(required = true)
    public String action;

    @NameInMap("EventId")
    @Validation(required = true)
    public String eventId;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("ActionTime")
    @Validation(required = true)
    public String actionTime;

    public static EventTrace build(java.util.Map<String, ?> map) {
        EventTrace self = new EventTrace();
        return TeaModel.build(map, self);
    }

    public EventTrace setResourceOwnerId(String resourceOwnerId) {
        this.resourceOwnerId = resourceOwnerId;
        return this;
    }
    public String getResourceOwnerId() {
        return this.resourceOwnerId;
    }

    public EventTrace setAction(String action) {
        this.action = action;
        return this;
    }
    public String getAction() {
        return this.action;
    }

    public EventTrace setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

    public EventTrace setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public EventTrace setActionTime(String actionTime) {
        this.actionTime = actionTime;
        return this;
    }
    public String getActionTime() {
        return this.actionTime;
    }

}
