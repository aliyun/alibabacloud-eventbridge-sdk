// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The event source entry
 */
public class EventTypeEntry extends TeaModel {
    @NameInMap("Name")
    @Validation(required = true)
    public String name;

    @NameInMap("EventSourceName")
    @Validation(required = true)
    public String eventSourceName;

    @NameInMap("ShortName")
    @Validation(required = true)
    public String shortName;

    @NameInMap("GroupName")
    @Validation(required = true)
    public String groupName;

    public static EventTypeEntry build(java.util.Map<String, ?> map) {
        EventTypeEntry self = new EventTypeEntry();
        return TeaModel.build(map, self);
    }

    public EventTypeEntry setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EventTypeEntry setEventSourceName(String eventSourceName) {
        this.eventSourceName = eventSourceName;
        return this;
    }
    public String getEventSourceName() {
        return this.eventSourceName;
    }

    public EventTypeEntry setShortName(String shortName) {
        this.shortName = shortName;
        return this;
    }
    public String getShortName() {
        return this.shortName;
    }

    public EventTypeEntry setGroupName(String groupName) {
        this.groupName = groupName;
        return this;
    }
    public String getGroupName() {
        return this.groupName;
    }

}
