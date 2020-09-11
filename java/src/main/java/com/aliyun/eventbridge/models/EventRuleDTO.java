// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The detail of EventBuses rule
 */
public class EventRuleDTO extends TeaModel {
    @NameInMap("RuleARN")
    @Validation(required = true)
    public String ruleARN;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

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

    public static EventRuleDTO build(java.util.Map<String, ?> map) {
        EventRuleDTO self = new EventRuleDTO();
        return TeaModel.build(map, self);
    }

    public EventRuleDTO setRuleARN(String ruleARN) {
        this.ruleARN = ruleARN;
        return this;
    }

    public String getRuleARN() {
        return this.ruleARN;
    }

    public EventRuleDTO setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }

    public String getEventBusName() {
        return this.eventBusName;
    }

    public EventRuleDTO setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }

    public String getRuleName() {
        return this.ruleName;
    }

    public EventRuleDTO setDescription(String description) {
        this.description = description;
        return this;
    }

    public String getDescription() {
        return this.description;
    }

    public EventRuleDTO setStatus(String status) {
        this.status = status;
        return this;
    }

    public String getStatus() {
        return this.status;
    }

    public EventRuleDTO setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }

    public String getFilterPattern() {
        return this.filterPattern;
    }

    public EventRuleDTO setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }

    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

    public EventRuleDTO setCtime(Long ctime) {
        this.ctime = ctime;
        return this;
    }

    public Long getCtime() {
        return this.ctime;
    }

    public EventRuleDTO setMtime(Long mtime) {
        this.mtime = mtime;
        return this;
    }

    public Long getMtime() {
        return this.mtime;
    }

}
