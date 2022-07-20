// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceDTSParameters
 */
public class SourceDTSParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("BrokerUrl")
    @Validation(required = true)
    public String brokerUrl;

    @NameInMap("Topic")
    @Validation(required = true)
    public String topic;

    @NameInMap("Sid")
    @Validation(required = true)
    public String sid;

    @NameInMap("Username")
    @Validation(required = true)
    public String username;

    @NameInMap("Password")
    @Validation(required = true)
    public String password;

    @NameInMap("InitCheckPoint")
    @Validation(required = true)
    public Integer initCheckPoint;

    @NameInMap("TaskId")
    @Validation(required = true)
    public String taskId;

    public static SourceDTSParameters build(java.util.Map<String, ?> map) {
        SourceDTSParameters self = new SourceDTSParameters();
        return TeaModel.build(map, self);
    }

    public SourceDTSParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceDTSParameters setBrokerUrl(String brokerUrl) {
        this.brokerUrl = brokerUrl;
        return this;
    }
    public String getBrokerUrl() {
        return this.brokerUrl;
    }

    public SourceDTSParameters setTopic(String topic) {
        this.topic = topic;
        return this;
    }
    public String getTopic() {
        return this.topic;
    }

    public SourceDTSParameters setSid(String sid) {
        this.sid = sid;
        return this;
    }
    public String getSid() {
        return this.sid;
    }

    public SourceDTSParameters setUsername(String username) {
        this.username = username;
        return this;
    }
    public String getUsername() {
        return this.username;
    }

    public SourceDTSParameters setPassword(String password) {
        this.password = password;
        return this;
    }
    public String getPassword() {
        return this.password;
    }

    public SourceDTSParameters setInitCheckPoint(Integer initCheckPoint) {
        this.initCheckPoint = initCheckPoint;
        return this;
    }
    public Integer getInitCheckPoint() {
        return this.initCheckPoint;
    }

    public SourceDTSParameters setTaskId(String taskId) {
        this.taskId = taskId;
        return this;
    }
    public String getTaskId() {
        return this.taskId;
    }

}
