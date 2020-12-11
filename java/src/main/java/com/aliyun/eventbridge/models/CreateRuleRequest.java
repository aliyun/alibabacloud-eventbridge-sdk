// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of create an EventBus rule on Aliyun
 */
public class CreateRuleRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true, maxLength = 127, minLength = 1)
    public String eventBusName;

    @NameInMap("Description")
    public String description;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("Status")
    public String status;

    @NameInMap("FilterPattern")
    public String filterPattern;

    @NameInMap("Targets")
    @Validation(required = true)
    public java.util.List<TargetEntry> targets;

    @NameInMap("Tags")
    public java.util.Map<String, String> tags;

    public static CreateRuleRequest build(java.util.Map<String, ?> map) {
        CreateRuleRequest self = new CreateRuleRequest();
        return TeaModel.build(map, self);
    }

    public CreateRuleRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public CreateRuleRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public CreateRuleRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public CreateRuleRequest setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

    public CreateRuleRequest setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public CreateRuleRequest setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }
    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

    public CreateRuleRequest setTags(java.util.Map<String, String> tags) {
        this.tags = tags;
        return this;
    }
    public java.util.Map<String, String> getTags() {
        return this.tags;
    }

}
