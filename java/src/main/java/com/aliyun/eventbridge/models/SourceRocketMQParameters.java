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

    @NameInMap("InstanceType")
    public String instanceType;

    @NameInMap("InstanceEndpoint")
    public String instanceEndpoint;

    @NameInMap("InstanceUsername")
    public String instanceUsername;

    @NameInMap("InstancePassword")
    public String instancePassword;

    @NameInMap("FilterType")
    public String filterType;

    @NameInMap("FilterSql")
    public String filterSql;

    @NameInMap("AuthType")
    public String authType;

    @NameInMap("InstanceVpcId")
    public String instanceVpcId;

    @NameInMap("InstanceVSwitchIds")
    public String instanceVSwitchIds;

    @NameInMap("InstanceSecurityGroupId")
    public String instanceSecurityGroupId;

    @NameInMap("InstanceNetwork")
    public String instanceNetwork;

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

    public SourceRocketMQParameters setInstanceType(String instanceType) {
        this.instanceType = instanceType;
        return this;
    }
    public String getInstanceType() {
        return this.instanceType;
    }

    public SourceRocketMQParameters setInstanceEndpoint(String instanceEndpoint) {
        this.instanceEndpoint = instanceEndpoint;
        return this;
    }
    public String getInstanceEndpoint() {
        return this.instanceEndpoint;
    }

    public SourceRocketMQParameters setInstanceUsername(String instanceUsername) {
        this.instanceUsername = instanceUsername;
        return this;
    }
    public String getInstanceUsername() {
        return this.instanceUsername;
    }

    public SourceRocketMQParameters setInstancePassword(String instancePassword) {
        this.instancePassword = instancePassword;
        return this;
    }
    public String getInstancePassword() {
        return this.instancePassword;
    }

    public SourceRocketMQParameters setFilterType(String filterType) {
        this.filterType = filterType;
        return this;
    }
    public String getFilterType() {
        return this.filterType;
    }

    public SourceRocketMQParameters setFilterSql(String filterSql) {
        this.filterSql = filterSql;
        return this;
    }
    public String getFilterSql() {
        return this.filterSql;
    }

    public SourceRocketMQParameters setAuthType(String authType) {
        this.authType = authType;
        return this;
    }
    public String getAuthType() {
        return this.authType;
    }

    public SourceRocketMQParameters setInstanceVpcId(String instanceVpcId) {
        this.instanceVpcId = instanceVpcId;
        return this;
    }
    public String getInstanceVpcId() {
        return this.instanceVpcId;
    }

    public SourceRocketMQParameters setInstanceVSwitchIds(String instanceVSwitchIds) {
        this.instanceVSwitchIds = instanceVSwitchIds;
        return this;
    }
    public String getInstanceVSwitchIds() {
        return this.instanceVSwitchIds;
    }

    public SourceRocketMQParameters setInstanceSecurityGroupId(String instanceSecurityGroupId) {
        this.instanceSecurityGroupId = instanceSecurityGroupId;
        return this;
    }
    public String getInstanceSecurityGroupId() {
        return this.instanceSecurityGroupId;
    }

    public SourceRocketMQParameters setInstanceNetwork(String instanceNetwork) {
        this.instanceNetwork = instanceNetwork;
        return this;
    }
    public String getInstanceNetwork() {
        return this.instanceNetwork;
    }

}
