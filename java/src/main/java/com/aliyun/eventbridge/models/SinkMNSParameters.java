// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkMNSParameters
 */
public class SinkMNSParameters extends TeaModel {
    @NameInMap("QueueName")
    public TargetParameter queueName;

    @NameInMap("Body")
    public TargetParameter body;

    public static SinkMNSParameters build(java.util.Map<String, ?> map) {
        SinkMNSParameters self = new SinkMNSParameters();
        return TeaModel.build(map, self);
    }

    public SinkMNSParameters setQueueName(TargetParameter queueName) {
        this.queueName = queueName;
        return this;
    }
    public TargetParameter getQueueName() {
        return this.queueName;
    }

    public SinkMNSParameters setBody(TargetParameter body) {
        this.body = body;
        return this;
    }
    public TargetParameter getBody() {
        return this.body;
    }

}
