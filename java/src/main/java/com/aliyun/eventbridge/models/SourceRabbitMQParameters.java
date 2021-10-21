// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceRabbitMQParameters
 */
public class SourceRabbitMQParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("InstanceId")
    public String instanceId;

    @NameInMap("VirtualHostName")
    @Validation(required = true)
    public String virtualHostName;

    @NameInMap("QueueName")
    @Validation(required = true)
    public String queueName;

    public static SourceRabbitMQParameters build(java.util.Map<String, ?> map) {
        SourceRabbitMQParameters self = new SourceRabbitMQParameters();
        return TeaModel.build(map, self);
    }

    public SourceRabbitMQParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceRabbitMQParameters setInstanceId(String instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public String getInstanceId() {
        return this.instanceId;
    }

    public SourceRabbitMQParameters setVirtualHostName(String virtualHostName) {
        this.virtualHostName = virtualHostName;
        return this;
    }
    public String getVirtualHostName() {
        return this.virtualHostName;
    }

    public SourceRabbitMQParameters setQueueName(String queueName) {
        this.queueName = queueName;
        return this;
    }
    public String getQueueName() {
        return this.queueName;
    }

}
