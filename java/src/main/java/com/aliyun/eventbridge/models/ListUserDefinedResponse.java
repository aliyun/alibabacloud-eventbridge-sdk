// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of listUserDefinedEventSources
 */
public class ListUserDefinedResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventSources")
    public java.util.List<EBUserDefinedEventSourceEntry> eventSources;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Total")
    public Integer total;

    public static ListUserDefinedResponse build(java.util.Map<String, ?> map) {
        ListUserDefinedResponse self = new ListUserDefinedResponse();
        return TeaModel.build(map, self);
    }

    public ListUserDefinedResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListUserDefinedResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListUserDefinedResponse setEventSources(java.util.List<EBUserDefinedEventSourceEntry> eventSources) {
        this.eventSources = eventSources;
        return this;
    }
    public java.util.List<EBUserDefinedEventSourceEntry> getEventSources() {
        return this.eventSources;
    }

    public ListUserDefinedResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListUserDefinedResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
