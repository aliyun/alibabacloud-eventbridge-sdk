// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceMQTTParameters
 */
public class SourceMQTTParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("InstanceId")
    @Validation(required = true)
    public String instanceId;

    @NameInMap("Topic")
    @Validation(required = true)
    public String topic;

    public static SourceMQTTParameters build(java.util.Map<String, ?> map) {
        SourceMQTTParameters self = new SourceMQTTParameters();
        return TeaModel.build(map, self);
    }

    public SourceMQTTParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceMQTTParameters setInstanceId(String instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public String getInstanceId() {
        return this.instanceId;
    }

    public SourceMQTTParameters setTopic(String topic) {
        this.topic = topic;
        return this;
    }
    public String getTopic() {
        return this.topic;
    }

}
