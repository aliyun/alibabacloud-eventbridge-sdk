// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of SinkFcParameters
 */
public class SinkFcParameters extends TeaModel {
    @NameInMap("ServiceName")
    public TargetParameter serviceName;

    @NameInMap("FunctionName")
    public TargetParameter functionName;

    @NameInMap("Body")
    public TargetParameter body;

    @NameInMap("Qualifier")
    public TargetParameter qualifier;

    @NameInMap("InvocationType")
    public TargetParameter invocationType;

    @NameInMap("BatchSize")
    public TargetParameter batchSize;

    @NameInMap("ExtendConfig")
    public java.util.Map<String, ?> extendConfig;

    public static SinkFcParameters build(java.util.Map<String, ?> map) {
        SinkFcParameters self = new SinkFcParameters();
        return TeaModel.build(map, self);
    }

    public SinkFcParameters setServiceName(TargetParameter serviceName) {
        this.serviceName = serviceName;
        return this;
    }
    public TargetParameter getServiceName() {
        return this.serviceName;
    }

    public SinkFcParameters setFunctionName(TargetParameter functionName) {
        this.functionName = functionName;
        return this;
    }
    public TargetParameter getFunctionName() {
        return this.functionName;
    }

    public SinkFcParameters setBody(TargetParameter body) {
        this.body = body;
        return this;
    }
    public TargetParameter getBody() {
        return this.body;
    }

    public SinkFcParameters setQualifier(TargetParameter qualifier) {
        this.qualifier = qualifier;
        return this;
    }
    public TargetParameter getQualifier() {
        return this.qualifier;
    }

    public SinkFcParameters setInvocationType(TargetParameter invocationType) {
        this.invocationType = invocationType;
        return this;
    }
    public TargetParameter getInvocationType() {
        return this.invocationType;
    }

    public SinkFcParameters setBatchSize(TargetParameter batchSize) {
        this.batchSize = batchSize;
        return this;
    }
    public TargetParameter getBatchSize() {
        return this.batchSize;
    }

    public SinkFcParameters setExtendConfig(java.util.Map<String, ?> extendConfig) {
        this.extendConfig = extendConfig;
        return this;
    }
    public java.util.Map<String, ?> getExtendConfig() {
        return this.extendConfig;
    }

}
