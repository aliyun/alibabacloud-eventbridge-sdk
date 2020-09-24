// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of get the detail of EventBus
 */
public class GetEventBusRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    public static GetEventBusRequest build(java.util.Map<String, ?> map) {
        GetEventBusRequest self = new GetEventBusRequest();
        return TeaModel.build(map, self);
    }

    public GetEventBusRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

}
