// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of create EventBus
 */
public class CreateEventBusRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true, maxLength = 127, minLength = 1)
    public String eventBusName;

    @NameInMap("Description")
    public String description;

    public static CreateEventBusRequest build(java.util.Map<String, ?> map) {
        CreateEventBusRequest self = new CreateEventBusRequest();
        return TeaModel.build(map, self);
    }

    public CreateEventBusRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public CreateEventBusRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

}
