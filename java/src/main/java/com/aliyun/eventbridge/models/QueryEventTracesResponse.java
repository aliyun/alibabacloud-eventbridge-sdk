// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class QueryEventTracesResponse extends TeaModel {
    @NameInMap("EventTraceList")
    @Validation(required = true)
    public java.util.List<EventTrace> eventTraceList;

    public static QueryEventTracesResponse build(java.util.Map<String, ?> map) {
        QueryEventTracesResponse self = new QueryEventTracesResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventTracesResponse setEventTraceList(java.util.List<EventTrace> eventTraceList) {
        this.eventTraceList = eventTraceList;
        return this;
    }
    public java.util.List<EventTrace> getEventTraceList() {
        return this.eventTraceList;
    }

}
