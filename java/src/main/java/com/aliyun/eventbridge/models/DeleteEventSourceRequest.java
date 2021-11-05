// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of deleteEventSource
 */
public class DeleteEventSourceRequest extends TeaModel {
    @NameInMap("EventBusName")
    public String eventBusName;

    @NameInMap("EventSourceName")
    @Validation(required = true)
    public String eventSourceName;

    public static DeleteEventSourceRequest build(java.util.Map<String, ?> map) {
        DeleteEventSourceRequest self = new DeleteEventSourceRequest();
        return TeaModel.build(map, self);
    }

    public DeleteEventSourceRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public DeleteEventSourceRequest setEventSourceName(String eventSourceName) {
        this.eventSourceName = eventSourceName;
        return this;
    }
    public String getEventSourceName() {
        return this.eventSourceName;
    }

}
