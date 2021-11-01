// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The eventsource of event streaming
 */
public class EBEventSourceEntry extends TeaModel {
    @NameInMap("Name")
    @Validation(required = true)
    public String name;

    @NameInMap("IsNew")
    @Validation(required = true)
    public Boolean New;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("ExternalSourceType")
    @Validation(required = true)
    public String externalSourceType;

    @NameInMap("ExternalSourceConfig")
    @Validation(required = true)
    public java.util.Map<String, ?> externalSourceConfig;

    public static EBEventSourceEntry build(java.util.Map<String, ?> map) {
        EBEventSourceEntry self = new EBEventSourceEntry();
        return TeaModel.build(map, self);
    }

    public EBEventSourceEntry setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EBEventSourceEntry setNew(Boolean New) {
        this.New = New;
        return this;
    }
    public Boolean getNew() {
        return this.New;
    }

    public EBEventSourceEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EBEventSourceEntry setExternalSourceType(String externalSourceType) {
        this.externalSourceType = externalSourceType;
        return this;
    }
    public String getExternalSourceType() {
        return this.externalSourceType;
    }

    public EBEventSourceEntry setExternalSourceConfig(java.util.Map<String, ?> externalSourceConfig) {
        this.externalSourceConfig = externalSourceConfig;
        return this;
    }
    public java.util.Map<String, ?> getExternalSourceConfig() {
        return this.externalSourceConfig;
    }

}
