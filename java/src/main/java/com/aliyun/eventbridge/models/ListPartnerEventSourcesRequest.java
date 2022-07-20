// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of listPartnerEventSources
 */
public class ListPartnerEventSourcesRequest extends TeaModel {
    @NameInMap("namePrefix")
    public String namePrefix;

    @NameInMap("Tag")
    public String tag;

    public static ListPartnerEventSourcesRequest build(java.util.Map<String, ?> map) {
        ListPartnerEventSourcesRequest self = new ListPartnerEventSourcesRequest();
        return TeaModel.build(map, self);
    }

    public ListPartnerEventSourcesRequest setNamePrefix(String namePrefix) {
        this.namePrefix = namePrefix;
        return this;
    }
    public String getNamePrefix() {
        return this.namePrefix;
    }

    public ListPartnerEventSourcesRequest setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

}
