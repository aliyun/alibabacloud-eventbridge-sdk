// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of listUserDefinedEventSources
 */
public class ListUserDefinedRequest extends TeaModel {
    @NameInMap("EventBusName")
    public String eventBusName;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Limit")
    public Integer limit;

    public static ListUserDefinedRequest build(java.util.Map<String, ?> map) {
        ListUserDefinedRequest self = new ListUserDefinedRequest();
        return TeaModel.build(map, self);
    }

    public ListUserDefinedRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public ListUserDefinedRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListUserDefinedRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

}
