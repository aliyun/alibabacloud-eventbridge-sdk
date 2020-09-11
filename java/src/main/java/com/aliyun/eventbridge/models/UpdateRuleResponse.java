// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The response of update the EventBus rule
 */
public class UpdateRuleResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    public static UpdateRuleResponse build(java.util.Map<String, ?> map) {
        UpdateRuleResponse self = new UpdateRuleResponse();
        return TeaModel.build(map, self);
    }

    public UpdateRuleResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public UpdateRuleResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

}
