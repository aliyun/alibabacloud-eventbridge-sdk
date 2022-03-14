// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of search EventStreaming
 */
public class ListEventStreamingsRequest extends TeaModel {
    @NameInMap("NamePrefix")
    public String namePrefix;

    @NameInMap("SourceType")
    public String sourceType;

    @NameInMap("SinkType")
    public String sinkType;

    @NameInMap("Limit")
    public Integer limit;

    @NameInMap("NextToken")
    public String nextToken;

    @NameInMap("Tag")
    public String tag;

    public static ListEventStreamingsRequest build(java.util.Map<String, ?> map) {
        ListEventStreamingsRequest self = new ListEventStreamingsRequest();
        return TeaModel.build(map, self);
    }

    public ListEventStreamingsRequest setNamePrefix(String namePrefix) {
        this.namePrefix = namePrefix;
        return this;
    }
    public String getNamePrefix() {
        return this.namePrefix;
    }

    public ListEventStreamingsRequest setSourceType(String sourceType) {
        this.sourceType = sourceType;
        return this;
    }
    public String getSourceType() {
        return this.sourceType;
    }

    public ListEventStreamingsRequest setSinkType(String sinkType) {
        this.sinkType = sinkType;
        return this;
    }
    public String getSinkType() {
        return this.sinkType;
    }

    public ListEventStreamingsRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

    public ListEventStreamingsRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public ListEventStreamingsRequest setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

}
