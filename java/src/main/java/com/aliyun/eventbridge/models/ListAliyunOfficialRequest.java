// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of listAliyunOfficialEventSources
 */
public class ListAliyunOfficialRequest extends TeaModel {
    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Limit")
    public Integer limit;

    public static ListAliyunOfficialRequest build(java.util.Map<String, ?> map) {
        ListAliyunOfficialRequest self = new ListAliyunOfficialRequest();
        return TeaModel.build(map, self);
    }

    public ListAliyunOfficialRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListAliyunOfficialRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

}
