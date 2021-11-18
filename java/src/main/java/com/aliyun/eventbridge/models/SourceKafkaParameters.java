// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceKafkaParameters
 */
public class SourceKafkaParameters extends TeaModel {
    @NameInMap("InstanceId")
    public String InstanceId;

    @NameInMap("Topic")
    public String topic;

    @NameInMap("ConsumerGroup")
    @Validation(required = true)
    public String consumerGroup;

    @NameInMap("OffsetReset")
    public String offsetReset;


    public static SourceKafkaParameters build(java.util.Map<String, ?> map) {
        SourceKafkaParameters self = new SourceKafkaParameters();
        return TeaModel.build(map, self);
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

}
