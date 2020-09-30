// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of update the EventBus rule
 */
public class UpdateRuleRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("Description")
    public String description;

    @NameInMap("Status")
    public String status;

    @NameInMap("FilterPattern")
    public String filterPattern;

    public static UpdateRuleRequest build(java.util.Map<String, ?> map) {
        UpdateRuleRequest self = new UpdateRuleRequest();
        return TeaModel.build(map, self);
    }

    public UpdateRuleRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public UpdateRuleRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public UpdateRuleRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public UpdateRuleRequest setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

    public UpdateRuleRequest setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

}
