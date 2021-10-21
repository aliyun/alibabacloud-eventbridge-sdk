// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkRabbitMQParameters
 */
public class SinkRabbitMQParameters extends TeaModel {
    @NameInMap("InstanceId")
    public TargetParameter instanceId;

    @NameInMap("VirtualHostName")
    public TargetParameter virtualHostName;

    @NameInMap("TargetType")
    public TargetParameter targetType;

    @NameInMap("Exchange")
    public TargetParameter exchange;

    @NameInMap("RoutingKey")
    public TargetParameter routingKey;

    @NameInMap("QueueName")
    public TargetParameter queueName;

    @NameInMap("Body")
    public TargetParameter body;

    @NameInMap("MessageId")
    public TargetParameter messageId;

    @NameInMap("Properties")
    public TargetParameter properties;

    public static SinkRabbitMQParameters build(java.util.Map<String, ?> map) {
        SinkRabbitMQParameters self = new SinkRabbitMQParameters();
        return TeaModel.build(map, self);
    }

    public SinkRabbitMQParameters setInstanceId(TargetParameter instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public TargetParameter getInstanceId() {
        return this.instanceId;
    }

    public SinkRabbitMQParameters setVirtualHostName(TargetParameter virtualHostName) {
        this.virtualHostName = virtualHostName;
        return this;
    }
    public TargetParameter getVirtualHostName() {
        return this.virtualHostName;
    }

    public SinkRabbitMQParameters setTargetType(TargetParameter targetType) {
        this.targetType = targetType;
        return this;
    }
    public TargetParameter getTargetType() {
        return this.targetType;
    }

    public SinkRabbitMQParameters setExchange(TargetParameter exchange) {
        this.exchange = exchange;
        return this;
    }
    public TargetParameter getExchange() {
        return this.exchange;
    }

    public SinkRabbitMQParameters setRoutingKey(TargetParameter routingKey) {
        this.routingKey = routingKey;
        return this;
    }
    public TargetParameter getRoutingKey() {
        return this.routingKey;
    }

    public SinkRabbitMQParameters setQueueName(TargetParameter queueName) {
        this.queueName = queueName;
        return this;
    }
    public TargetParameter getQueueName() {
        return this.queueName;
    }

    public SinkRabbitMQParameters setBody(TargetParameter body) {
        this.body = body;
        return this;
    }
    public TargetParameter getBody() {
        return this.body;
    }

    public SinkRabbitMQParameters setMessageId(TargetParameter messageId) {
        this.messageId = messageId;
        return this;
    }
    public TargetParameter getMessageId() {
        return this.messageId;
    }

    public SinkRabbitMQParameters setProperties(TargetParameter properties) {
        this.properties = properties;
        return this;
    }
    public TargetParameter getProperties() {
        return this.properties;
    }

}
