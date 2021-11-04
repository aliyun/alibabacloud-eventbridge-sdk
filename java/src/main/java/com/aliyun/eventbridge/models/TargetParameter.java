// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of TargetParameter
 */
public class TargetParameter extends TeaModel {
    @NameInMap("Value")
    public String value;

    @NameInMap("Form")
    public String form;

    @NameInMap("Template")
    public String template;

    public static TargetParameter build(java.util.Map<String, ?> map) {
        TargetParameter self = new TargetParameter();
        return TeaModel.build(map, self);
    }

    public TargetParameter setValue(String value) {
        this.value = value;
        return this;
    }
    public String getValue() {
        return this.value;
    }

    public TargetParameter setForm(String form) {
        this.form = form;
        return this;
    }
    public String getForm() {
        return this.form;
    }

    public TargetParameter setTemplate(String template) {
        this.template = template;
        return this;
    }
    public String getTemplate() {
        return this.template;
    }

}
