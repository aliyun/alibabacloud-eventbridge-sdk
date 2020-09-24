// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of create EventBus Rule
 */
public class CreateRuleResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("RuleARN")
    @Validation(required = true)
    public String ruleARN;

    public static CreateRuleResponse build(java.util.Map<String, ?> map) {
        CreateRuleResponse self = new CreateRuleResponse();
        return TeaModel.build(map, self);
    }

    public CreateRuleResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public CreateRuleResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public CreateRuleResponse setRuleARN(String ruleARN) {
        this.ruleARN = ruleARN;
        return this;
    }
    public String getRuleARN() {
        return this.ruleARN;
    }

}
