// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of create Targets
 */
public class CreateTargetsResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("ErrorEntriesCount")
    @Validation(required = true)
    public Integer errorEntriesCount;

    @NameInMap("ErrorEntries")
    @Validation(required = true)
    public java.util.List<TargetResultEntry> errorEntries;

    public static CreateTargetsResponse build(java.util.Map<String, ?> map) {
        CreateTargetsResponse self = new CreateTargetsResponse();
        return TeaModel.build(map, self);
    }

    public CreateTargetsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public CreateTargetsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateTargetsResponse setErrorEntriesCount(Integer errorEntriesCount) {
        this.errorEntriesCount = errorEntriesCount;
        return this;
    }
    public Integer getErrorEntriesCount() {
        return this.errorEntriesCount;
    }

    public CreateTargetsResponse setErrorEntries(java.util.List<TargetResultEntry> errorEntries) {
        this.errorEntries = errorEntries;
        return this;
    }
    public java.util.List<TargetResultEntry> getErrorEntries() {
        return this.errorEntries;
    }

}
