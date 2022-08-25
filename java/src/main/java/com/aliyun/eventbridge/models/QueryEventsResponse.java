// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventsResponse extends TeaModel {
    @NameInMap("EventMap")
    @Validation(required = true)
    public java.util.Map<String, String> eventMap;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    public static QueryEventsResponse build(java.util.Map<String, ?> map) {
        QueryEventsResponse self = new QueryEventsResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventsResponse setEventMap(java.util.Map<String, String> eventMap) {
        this.eventMap = eventMap;
        return this;
    }
    public java.util.Map<String, String> getEventMap() {
        return this.eventMap;
    }

    public QueryEventsResponse setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

}
