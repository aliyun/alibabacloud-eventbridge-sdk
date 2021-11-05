// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The event source entry
 */
public class EBAliyunOfficialEventSourceEntry extends TeaModel {
    @NameInMap("Name")
    @Validation(required = true)
    public String name;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("ARN")
    @Validation(required = true)
    public String arn;

    @NameInMap("Status")
    @Validation(required = true)
    public String status;

    @NameInMap("Ctime")
    @Validation(required = true)
    public Long ctime;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("EventTypes")
    @Validation(required = true)
    public java.util.List<EventTypeEntry> eventTypes;

    public static EBAliyunOfficialEventSourceEntry build(java.util.Map<String, ?> map) {
        EBAliyunOfficialEventSourceEntry self = new EBAliyunOfficialEventSourceEntry();
        return TeaModel.build(map, self);
    }

    public EBAliyunOfficialEventSourceEntry setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EBAliyunOfficialEventSourceEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EBAliyunOfficialEventSourceEntry setArn(String arn) {
        this.arn = arn;
        return this;
    }
    public String getArn() {
        return this.arn;
    }

    public EBAliyunOfficialEventSourceEntry setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

    public EBAliyunOfficialEventSourceEntry setCtime(Long ctime) {
        this.ctime = ctime;
        return this;
    }
    public Long getCtime() {
        return this.ctime;
    }

    public EBAliyunOfficialEventSourceEntry setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public EBAliyunOfficialEventSourceEntry setEventTypes(java.util.List<EventTypeEntry> eventTypes) {
        this.eventTypes = eventTypes;
        return this;
    }
    public java.util.List<EventTypeEntry> getEventTypes() {
        return this.eventTypes;
    }

}
