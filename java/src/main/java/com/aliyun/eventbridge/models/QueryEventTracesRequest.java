// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventTracesRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("EventId")
    @Validation(required = true)
    public String eventId;

    public static QueryEventTracesRequest build(java.util.Map<String, ?> map) {
        QueryEventTracesRequest self = new QueryEventTracesRequest();
        return TeaModel.build(map, self);
    }

    public QueryEventTracesRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public QueryEventTracesRequest setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

}
