// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceKafkaParameters
 */
public class SourceKafkaParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("InstanceId")
    public String InstanceId;

    @NameInMap("Topic")
    public String topic;

    @NameInMap("ConsumerGroup")
    @Validation(required = true)
    public String consumerGroup;

    @NameInMap("OffsetReset")
    public String offsetReset;

    @NameInMap("ExtendConfig")
    public java.util.Map<String, ?> extendConfig;

    public static SourceKafkaParameters build(java.util.Map<String, ?> map) {
        SourceKafkaParameters self = new SourceKafkaParameters();
        return TeaModel.build(map, self);
    }

    public SourceKafkaParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceKafkaParameters setInstanceId(String InstanceId) {
        this.InstanceId = InstanceId;
        return this;
    }
    public String getInstanceId() {
        return this.InstanceId;
    }

    public SourceKafkaParameters setTopic(String topic) {
        this.topic = topic;
        return this;
    }
    public String getTopic() {
        return this.topic;
    }

    public SourceKafkaParameters setConsumerGroup(String consumerGroup) {
        this.consumerGroup = consumerGroup;
        return this;
    }
    public String getConsumerGroup() {
        return this.consumerGroup;
    }


    public SourceKafkaParameters setOffsetReset(String offsetReset) {
        this.offsetReset = offsetReset;
        return this;
    }
    public String getOffsetReset() {
        return this.offsetReset;
    }

    public SourceKafkaParameters setExtendConfig(java.util.Map<String, ?> extendConfig) {
        this.extendConfig = extendConfig;
        return this;
    }
    public java.util.Map<String, ?> getExtendConfig() {
        return this.extendConfig;
    }

}
