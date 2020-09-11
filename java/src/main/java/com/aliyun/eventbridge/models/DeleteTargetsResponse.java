// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The response of delete Targets
 */
public class DeleteTargetsResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("ErrorEntriesCount")
    @Validation(required = true)
    public Integer errorEntriesCount;

    @NameInMap("ErrorEntries")
    @Validation(required = true)
    public java.util.List<TargetResultEntry> errorEntries;

    public static DeleteTargetsResponse build(java.util.Map<String, ?> map) {
        DeleteTargetsResponse self = new DeleteTargetsResponse();
        return TeaModel.build(map, self);
    }

    public DeleteTargetsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public DeleteTargetsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public DeleteTargetsResponse setErrorEntriesCount(Integer errorEntriesCount) {
        this.errorEntriesCount = errorEntriesCount;
        return this;
    }

    public Integer getErrorEntriesCount() {
        return this.errorEntriesCount;
    }

    public DeleteTargetsResponse setErrorEntries(java.util.List<TargetResultEntry> errorEntries) {
        this.errorEntries = errorEntries;
        return this;
    }

    public java.util.List<TargetResultEntry> getErrorEntries() {
        return this.errorEntries;
    }

}
