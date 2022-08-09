// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkSLSParameters
 */
public class SinkSLSParameters extends TeaModel {
    @NameInMap("Project")
    public TargetParameter project;

    @NameInMap("LogStore")
    public TargetParameter logStore;

    @NameInMap("Topic")
    public TargetParameter topic;

    @NameInMap("Body")
    public TargetParameter body;

    @NameInMap("RoleName")
    public TargetParameter roleName;

    public static SinkSLSParameters build(java.util.Map<String, ?> map) {
        SinkSLSParameters self = new SinkSLSParameters();
        return TeaModel.build(map, self);
    }

    public SinkSLSParameters setProject(TargetParameter project) {
        this.project = project;
        return this;
    }
    public TargetParameter getProject() {
        return this.project;
    }

    public SinkSLSParameters setLogStore(TargetParameter logStore) {
        this.logStore = logStore;
        return this;
    }
    public TargetParameter getLogStore() {
        return this.logStore;
    }

    public SinkSLSParameters setTopic(TargetParameter topic) {
        this.topic = topic;
        return this;
    }
    public TargetParameter getTopic() {
        return this.topic;
    }

    public SinkSLSParameters setBody(TargetParameter body) {
        this.body = body;
        return this;
    }
    public TargetParameter getBody() {
        return this.body;
    }

    public SinkSLSParameters setRoleName(TargetParameter roleName) {
        this.roleName = roleName;
        return this;
    }
    public TargetParameter getRoleName() {
        return this.roleName;
    }

}
