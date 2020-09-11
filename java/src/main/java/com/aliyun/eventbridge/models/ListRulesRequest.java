// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The request of search EventBus
 */
public class ListRulesRequest extends TeaModel {
    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("RuleNamePrefix")
    public String ruleNamePrefix;

    @NameInMap("Limit")
    public Integer limit;

    @NameInMap("NextToken")
    public String nextToken;

    public static ListRulesRequest build(java.util.Map<String, ?> map) {
        ListRulesRequest self = new ListRulesRequest();
        return TeaModel.build(map, self);
    }

    public ListRulesRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }

    public String getEventBusName() {
        return this.eventBusName;
    }

    public ListRulesRequest setRuleNamePrefix(String ruleNamePrefix) {
        this.ruleNamePrefix = ruleNamePrefix;
        return this;
    }

    public String getRuleNamePrefix() {
        return this.ruleNamePrefix;
    }

    public ListRulesRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }

    public Integer getLimit() {
        return this.limit;
    }

    public ListRulesRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }

    public String getNextToken() {
        return this.nextToken;
    }

}
