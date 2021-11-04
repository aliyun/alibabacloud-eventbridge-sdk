// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkRocketMQParameters
 */
public class SinkRocketMQParameters extends TeaModel {
    @NameInMap("InstanceId")
    public TargetParameter instanceId;

    @NameInMap("Topic")
    public TargetParameter topic;

    @NameInMap("Body")
    public TargetParameter body;

    @NameInMap("Properties")
    public TargetParameter properties;

    @NameInMap("Keys")
    public TargetParameter keys;

    @NameInMap("Tags")
    public TargetParameter tags;

    public static SinkRocketMQParameters build(java.util.Map<String, ?> map) {
        SinkRocketMQParameters self = new SinkRocketMQParameters();
        return TeaModel.build(map, self);
    }

    public SinkRocketMQParameters setInstanceId(TargetParameter instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public TargetParameter getInstanceId() {
        return this.instanceId;
    }

    public SinkRocketMQParameters setTopic(TargetParameter topic) {
        this.topic = topic;
        return this;
    }
    public TargetParameter getTopic() {
        return this.topic;
    }

    public SinkRocketMQParameters setBody(TargetParameter body) {
        this.body = body;
        return this;
    }
    public TargetParameter getBody() {
        return this.body;
    }

    public SinkRocketMQParameters setProperties(TargetParameter properties) {
        this.properties = properties;
        return this;
    }
    public TargetParameter getProperties() {
        return this.properties;
    }

    public SinkRocketMQParameters setKeys(TargetParameter keys) {
        this.keys = keys;
        return this;
    }
    public TargetParameter getKeys() {
        return this.keys;
    }

    public SinkRocketMQParameters setTags(TargetParameter tags) {
        this.tags = tags;
        return this;
    }
    public TargetParameter getTags() {
        return this.tags;
    }

}
