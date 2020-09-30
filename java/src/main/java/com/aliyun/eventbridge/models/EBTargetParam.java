// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The param of EBTargetParam
 */
public class EBTargetParam extends TeaModel {
    @NameInMap("ResourceKey")
    @Validation(required = true)
    public String resourceKey;

    @NameInMap("Form")
    @Validation(required = true)
    public String form;

    @NameInMap("Value")
    public String value;

    @NameInMap("Template")
    public String template;

    public static EBTargetParam build(java.util.Map<String, ?> map) {
        EBTargetParam self = new EBTargetParam();
        return TeaModel.build(map, self);
    }

    public EBTargetParam setResourceKey(String resourceKey) {
        this.resourceKey = resourceKey;
        return this;
    }
    public String getResourceKey() {
        return this.resourceKey;
    }

    public EBTargetParam setForm(String form) {
        this.form = form;
        return this;
    }
    public String getForm() {
        return this.form;
    }

    public EBTargetParam setValue(String value) {
        this.value = value;
        return this;
    }
    public String getValue() {
        return this.value;
    }

    public EBTargetParam setTemplate(String template) {
        this.template = template;
        return this;
    }
    public String getTemplate() {
        return this.template;
    }

}
