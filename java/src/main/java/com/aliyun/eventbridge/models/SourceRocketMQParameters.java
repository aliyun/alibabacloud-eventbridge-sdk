// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceRocketMQParameters
 */
public class SourceRocketMQParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("InstanceId")
    public String instanceId;

    @NameInMap("Topic")
    public String topic;

    @NameInMap("Tag")
    public String tag;

    @NameInMap("Offset")
    public String offset;

    @NameInMap("GroupID")
    @Validation(required = true)
    public String groupID;

    @NameInMap("Timestamp")
    public Number timestamp;

    public static SourceRocketMQParameters build(java.util.Map<String, ?> map) {
        SourceRocketMQParameters self = new SourceRocketMQParameters();
        return TeaModel.build(map, self);
    }

    public SourceRocketMQParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceRocketMQParameters setInstanceId(String instanceId) {
        this.instanceId = instanceId;
        return this;
    }
    public String getInstanceId() {
        return this.instanceId;
    }

    public SourceRocketMQParameters setTopic(String topic) {
        this.topic = topic;
        return this;
    }
    public String getTopic() {
        return this.topic;
    }

    public SourceRocketMQParameters setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

    public SourceRocketMQParameters setOffset(String offset) {
        this.offset = offset;
        return this;
    }
    public String getOffset() {
        return this.offset;
    }

    public SourceRocketMQParameters setGroupID(String groupID) {
        this.groupID = groupID;
        return this;
    }
    public String getGroupID() {
        return this.groupID;
    }

    public SourceRocketMQParameters setTimestamp(Number timestamp) {
        this.timestamp = timestamp;
        return this;
    }
    public Number getTimestamp() {
        return this.timestamp;
    }

}
