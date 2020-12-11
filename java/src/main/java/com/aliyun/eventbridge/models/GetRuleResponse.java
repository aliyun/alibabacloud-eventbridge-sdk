// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of Get EventBus
 */
public class GetRuleResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleARN")
    @Validation(required = true)
    public String ruleARN;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("Status")
    @Validation(required = true)
    public String status;

    @NameInMap("FilterPattern")
    @Validation(required = true)
    public String filterPattern;

    @NameInMap("Targets")
    @Validation(required = true)
    public java.util.List<TargetEntry> targets;

    @NameInMap("Ctime")
    @Validation(required = true)
    public Long ctime;

    @NameInMap("Mtime")
    @Validation(required = true)
    public Long mtime;

    @NameInMap("Tags")
    public java.util.Map<String, String> tags;

    public static GetRuleResponse build(java.util.Map<String, ?> map) {
        GetRuleResponse self = new GetRuleResponse();
        return TeaModel.build(map, self);
    }

    public GetRuleResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public GetRuleResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public GetRuleResponse setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public GetRuleResponse setRuleARN(String ruleARN) {
        this.ruleARN = ruleARN;
        return this;
    }
    public String getRuleARN() {
        return this.ruleARN;
    }

    public GetRuleResponse setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public GetRuleResponse setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public GetRuleResponse setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

    public GetRuleResponse setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public GetRuleResponse setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }
    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

    public GetRuleResponse setCtime(Long ctime) {
        this.ctime = ctime;
        return this;
    }
    public Long getCtime() {
        return this.ctime;
    }

    public GetRuleResponse setMtime(Long mtime) {
        this.mtime = mtime;
        return this;
    }
    public Long getMtime() {
        return this.mtime;
    }

    public GetRuleResponse setTags(java.util.Map<String, String> tags) {
        this.tags = tags;
        return this;
    }
    public java.util.Map<String, String> getTags() {
        return this.tags;
    }

}
