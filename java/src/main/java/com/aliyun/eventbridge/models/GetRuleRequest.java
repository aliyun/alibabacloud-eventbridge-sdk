// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The request of Get EventBus
 */
public class GetRuleRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    public static GetRuleRequest build(java.util.Map<String, ?> map) {
        GetRuleRequest self = new GetRuleRequest();
        return TeaModel.build(map, self);
    }

    public GetRuleRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }

    public String getEventBusName() {
        return this.eventBusName;
    }

    public GetRuleRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }

    public String getRuleName() {
        return this.ruleName;
    }

}
