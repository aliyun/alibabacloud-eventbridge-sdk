// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of queryEventTraces
 */
public class QueryEventTracesResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventTraceList")
    public java.util.List<EventTrace> eventTraceList;

    public static QueryEventTracesResponse build(java.util.Map<String, ?> map) {
        QueryEventTracesResponse self = new QueryEventTracesResponse();
        return TeaModel.build(map, self);
    }

    public QueryEventTracesResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public QueryEventTracesResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public QueryEventTracesResponse setEventTraceList(java.util.List<EventTrace> eventTraceList) {
        this.eventTraceList = eventTraceList;
        return this;
    }
    public java.util.List<EventTrace> getEventTraceList() {
        return this.eventTraceList;
    }

}
