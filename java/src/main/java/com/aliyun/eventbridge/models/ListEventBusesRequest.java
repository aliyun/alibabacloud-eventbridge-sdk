// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The request of list all the EventBus which meet the search criteria
 */
public class ListEventBusesRequest extends TeaModel {
    @NameInMap("NamePrefix")
    public String namePrefix;

    @NameInMap("Limit")
    public Integer limit;

    @NameInMap("NextToken")
    public String nextToken;

    public static ListEventBusesRequest build(java.util.Map<String, ?> map) {
        ListEventBusesRequest self = new ListEventBusesRequest();
        return TeaModel.build(map, self);
    }

    public ListEventBusesRequest setNamePrefix(String namePrefix) {
        this.namePrefix = namePrefix;
        return this;
    }

    public String getNamePrefix() {
        return this.namePrefix;
    }

    public ListEventBusesRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }

    public Integer getLimit() {
        return this.limit;
    }

    public ListEventBusesRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }

    public String getNextToken() {
        return this.nextToken;
    }

}
