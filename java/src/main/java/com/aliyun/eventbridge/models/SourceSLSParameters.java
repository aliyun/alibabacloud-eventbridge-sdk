// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceSLSParameters
 */
public class SourceSLSParameters extends TeaModel {
    @NameInMap("RegionId")
    public String regionId;

    @NameInMap("Project")
    @Validation(required = true)
    public String project;

    @NameInMap("LogStore")
    @Validation(required = true)
    public String logStore;

    @NameInMap("ConsumePosition")
    public String consumePosition;

    @NameInMap("RoleName")
    @Validation(required = true)
    public String roleName;

    public static SourceSLSParameters build(java.util.Map<String, ?> map) {
        SourceSLSParameters self = new SourceSLSParameters();
        return TeaModel.build(map, self);
    }

    public SourceSLSParameters setRegionId(String regionId) {
        this.regionId = regionId;
        return this;
    }
    public String getRegionId() {
        return this.regionId;
    }

    public SourceSLSParameters setProject(String project) {
        this.project = project;
        return this;
    }
    public String getProject() {
        return this.project;
    }

    public SourceSLSParameters setLogStore(String logStore) {
        this.logStore = logStore;
        return this;
    }
    public String getLogStore() {
        return this.logStore;
    }

    public SourceSLSParameters setConsumePosition(String consumePosition) {
        this.consumePosition = consumePosition;
        return this;
    }
    public String getConsumePosition() {
        return this.consumePosition;
    }

    public SourceSLSParameters setRoleName(String roleName) {
        this.roleName = roleName;
        return this;
    }
    public String getRoleName() {
        return this.roleName;
    }

}
