// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkOdpsParameters
 */
public class SinkOdpsParameters extends TeaModel {
    @NameInMap("Project")
    public TargetParameter project;

    @NameInMap("Table")
    public TargetParameter table;

    @NameInMap("RoleName")
    public TargetParameter roleName;

    @NameInMap("Format")
    public TargetParameter format;

    @NameInMap("Mode")
    public TargetParameter mode;

    @NameInMap("PartitionWindowType")
    public TargetParameter partitionWindowType;

    @NameInMap("TimeZone")
    public TargetParameter timeZone;

    @NameInMap("UseStreaming")
    public TargetParameter useStreaming;

    @NameInMap("ExtendConfig")
    public java.util.Map<String, ?> extendConfig;

    public static SinkOdpsParameters build(java.util.Map<String, ?> map) {
        SinkOdpsParameters self = new SinkOdpsParameters();
        return TeaModel.build(map, self);
    }

    public SinkOdpsParameters setProject(TargetParameter project) {
        this.project = project;
        return this;
    }
    public TargetParameter getProject() {
        return this.project;
    }

    public SinkOdpsParameters setTable(TargetParameter table) {
        this.table = table;
        return this;
    }
    public TargetParameter getTable() {
        return this.table;
    }

    public SinkOdpsParameters setRoleName(TargetParameter roleName) {
        this.roleName = roleName;
        return this;
    }
    public TargetParameter getRoleName() {
        return this.roleName;
    }

    public SinkOdpsParameters setFormat(TargetParameter format) {
        this.format = format;
        return this;
    }
    public TargetParameter getFormat() {
        return this.format;
    }

    public SinkOdpsParameters setMode(TargetParameter mode) {
        this.mode = mode;
        return this;
    }
    public TargetParameter getMode() {
        return this.mode;
    }

    public SinkOdpsParameters setPartitionWindowType(TargetParameter partitionWindowType) {
        this.partitionWindowType = partitionWindowType;
        return this;
    }
    public TargetParameter getPartitionWindowType() {
        return this.partitionWindowType;
    }

    public SinkOdpsParameters setTimeZone(TargetParameter timeZone) {
        this.timeZone = timeZone;
        return this;
    }
    public TargetParameter getTimeZone() {
        return this.timeZone;
    }

    public SinkOdpsParameters setUseStreaming(TargetParameter useStreaming) {
        this.useStreaming = useStreaming;
        return this;
    }
    public TargetParameter getUseStreaming() {
        return this.useStreaming;
    }

    public SinkOdpsParameters setExtendConfig(java.util.Map<String, ?> extendConfig) {
        this.extendConfig = extendConfig;
        return this;
    }
    public java.util.Map<String, ?> getExtendConfig() {
        return this.extendConfig;
    }

}
