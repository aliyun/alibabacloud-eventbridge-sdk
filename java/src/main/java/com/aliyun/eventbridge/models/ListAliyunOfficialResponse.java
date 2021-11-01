// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of listAliyunOfficialEventSources
 */
public class ListAliyunOfficialResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventSourceList")
    @Validation(required = true)
    public java.util.List<EBAliyunOfficialEventSourceEntry> eventSourceList;

    @NameInMap("NextToken")
    @Validation(required = true)
    public String nextToken;

    @NameInMap("Total")
    @Validation(required = true)
    public Integer total;

    public static ListAliyunOfficialResponse build(java.util.Map<String, ?> map) {
        ListAliyunOfficialResponse self = new ListAliyunOfficialResponse();
        return TeaModel.build(map, self);
    }

    public ListAliyunOfficialResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListAliyunOfficialResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListAliyunOfficialResponse setEventSourceList(java.util.List<EBAliyunOfficialEventSourceEntry> eventSourceList) {
        this.eventSourceList = eventSourceList;
        return this;
    }
    public java.util.List<EBAliyunOfficialEventSourceEntry> getEventSourceList() {
        return this.eventSourceList;
    }

    public ListAliyunOfficialResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListAliyunOfficialResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }
    public Integer getTotal() {
        return this.total;
    }

}
