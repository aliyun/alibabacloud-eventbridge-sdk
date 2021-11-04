// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of search EventStreaming
 */
public class listEventStreamingsRequest extends TeaModel {
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

    public static listEventStreamingsRequest build(java.util.Map<String, ?> map) {
        listEventStreamingsRequest self = new listEventStreamingsRequest();
        return TeaModel.build(map, self);
    }

    public listEventStreamingsRequest setNamePrefix(String namePrefix) {
        this.namePrefix = namePrefix;
        return this;
    }
    public String getNamePrefix() {
        return this.namePrefix;
    }

    public listEventStreamingsRequest setSourceType(String sourceType) {
        this.sourceType = sourceType;
        return this;
    }
    public String getSourceType() {
        return this.sourceType;
    }

    public listEventStreamingsRequest setSinkType(String sinkType) {
        this.sinkType = sinkType;
        return this;
    }
    public String getSinkType() {
        return this.sinkType;
    }

    public listEventStreamingsRequest setLimit(Integer limit) {
        this.limit = limit;
        return this;
    }
    public Integer getLimit() {
        return this.limit;
    }

    public listEventStreamingsRequest setNextToken(String nextToken) {
        this.nextToken = nextToken;
        return this;
    }
    public String getNextToken() {
        return this.nextToken;
    }

    public listEventStreamingsRequest setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

}
