// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The response of search EventBus
 */
public class ListRulesResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("NextToken")
    @Validation(required = true)
    public String nextToken;

    @NameInMap("Rules")
    @Validation(required = true)
    public java.util.List<EventRuleDTO> rules;

    @NameInMap("Total")
    @Validation(required = true)
    public Integer total;

    public static ListRulesResponse build(java.util.Map<String, ?> map) {
        ListRulesResponse self = new ListRulesResponse();
        return TeaModel.build(map, self);
    }

    public ListRulesResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public ListRulesResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListRulesResponse setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }

    public String getNextToken() {
        return this.nextToken;
    }

    public ListRulesResponse setRules(java.util.List<EventRuleDTO> rules) {
        this.rules = rules;
        return this;
    }

    public java.util.List<EventRuleDTO> getRules() {
        return this.rules;
    }

    public ListRulesResponse setTotal(Integer total) {
        this.total = total;
        return this;
    }

    public Integer getTotal() {
        return this.total;
    }

}
