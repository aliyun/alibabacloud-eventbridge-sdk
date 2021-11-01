// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkKafkaParameters
 */
public class SinkKafkaParameters extends TeaModel {
    @NameInMap("InstanceId")
    public TargetParameter instanceId;

    @NameInMap("Topic")
    public TargetParameter topic;

    @NameInMap("Acks")
    public TargetParameter acks;

    @NameInMap("Key")
    public TargetParameter key;

    @NameInMap("Value")
    public TargetParameter value;

    public static SinkKafkaParameters build(java.util.Map<String, ?> map) {
        SinkKafkaParameters self = new SinkKafkaParameters();
        return TeaModel.build(map, self);
    }

    public SinkKafkaParameters setInstanceId(TargetParameter instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public TargetParameter getInstanceId() {
        return this.instanceId;
    }

    public SinkKafkaParameters setTopic(TargetParameter topic) {
        this.topic = topic;
        return this;
    }
    public TargetParameter getTopic() {
        return this.topic;
    }

    public SinkKafkaParameters setAcks(TargetParameter acks) {
        this.acks = acks;
        return this;
    }
    public TargetParameter getAcks() {
        return this.acks;
    }

    public SinkKafkaParameters setKey(TargetParameter key) {
        this.key = key;
        return this;
    }
    public TargetParameter getKey() {
        return this.key;
    }

    public SinkKafkaParameters setValue(TargetParameter value) {
        this.value = value;
        return this;
    }
    public TargetParameter getValue() {
        return this.value;
    }

}
