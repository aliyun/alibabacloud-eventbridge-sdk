// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of delete Targets
 */
public class DeleteTargetsRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("TargetIds")
    @Validation(required = true)
    public java.util.List<String> targetIds;

    public static DeleteTargetsRequest build(java.util.Map<String, ?> map) {
        DeleteTargetsRequest self = new DeleteTargetsRequest();
        return TeaModel.build(map, self);
    }

    public DeleteTargetsRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public DeleteTargetsRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public DeleteTargetsRequest setTargetIds(java.util.List<String> targetIds) {
        this.targetIds = targetIds;
        return this;
    }
    public java.util.List<String> getTargetIds() {
        return this.targetIds;
    }

}
