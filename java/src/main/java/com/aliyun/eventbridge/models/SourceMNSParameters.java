// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceMNSParameters
 */
public class SourceMNSParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("QueueName")
    public String queueName;

    @NameInMap("IsBase64Decode")
    public Boolean isBase64Decode;

    public static SourceMNSParameters build(java.util.Map<String, ?> map) {
        SourceMNSParameters self = new SourceMNSParameters();
        return TeaModel.build(map, self);
    }

    public SourceMNSParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceMNSParameters setQueueName(String queueName) {
        this.queueName = queueName;
        return this;
    }
    public String getQueueName() {
        return this.queueName;
    }

    public SourceMNSParameters setIsBase64Decode(Boolean isBase64Decode) {
        this.isBase64Decode = isBase64Decode;
        return this;
    }
    public Boolean getIsBase64Decode() {
        return this.isBase64Decode;
    }

}
