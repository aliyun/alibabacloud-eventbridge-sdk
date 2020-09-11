// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;

/**
 * put event response
 */
public class PutEventsResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("FailedEntryCount")
    public Integer failedEntryCount;

    @NameInMap("EntryList")
    public java.util.List<PutEventsResponseEntry> entryList;

    public static PutEventsResponse build(java.util.Map<String, ?> map) {
        PutEventsResponse self = new PutEventsResponse();
        return TeaModel.build(map, self);
    }

    public PutEventsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public PutEventsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public PutEventsResponse setFailedEntryCount(Integer failedEntryCount) {
        this.failedEntryCount = failedEntryCount;
        return this;
    }

    public Integer getFailedEntryCount() {
        return this.failedEntryCount;
    }

    public PutEventsResponse setEntryList(java.util.List<PutEventsResponseEntry> entryList) {
        this.entryList = entryList;
        return this;
    }

    public java.util.List<PutEventsResponseEntry> getEntryList() {
        return this.entryList;
    }

}
