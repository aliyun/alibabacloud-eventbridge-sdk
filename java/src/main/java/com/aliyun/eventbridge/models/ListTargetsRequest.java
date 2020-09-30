// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of search Targets
 */
public class ListTargetsRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("Limit")
    public Integer limit;

    public static ListTargetsRequest build(java.util.Map<String, ?> map) {
        ListTargetsRequest self = new ListTargetsRequest();
        return TeaModel.build(map, self);
    }

    public ListTargetsRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public ListTargetsRequest setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public ListTargetsRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

}
