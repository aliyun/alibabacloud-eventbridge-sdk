// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The request of create Targets
 */
public class CreateTargetsRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("Targets")
    @Validation(required = true)
    public java.util.List<TargetEntry> targets;

    public static CreateTargetsRequest build(java.util.Map<String, ?> map) {
        CreateTargetsRequest self = new CreateTargetsRequest();
        return TeaModel.build(map, self);
    }

    public CreateTargetsRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }

    public String getEventBusName() {
        return this.eventBusName;
    }

    public CreateTargetsRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }

    public String getRuleName() {
        return this.ruleName;
    }

    public CreateTargetsRequest setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }

    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

}
