// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceHttpEventParameters
 */
public class SourceHttpEventParameters extends TeaModel {
    @NameInMap("Type")
    @Validation(required = true)
    public String type;

    @NameInMap("Method")
    @Validation(required = true)
    public java.util.List<String> method;

    @NameInMap("SecurityConfig")
    @Validation(required = true)
    public String securityConfig;

    @NameInMap("Ip")
    public java.util.List<String> ip;

    @NameInMap("Referer")
    public java.util.List<String> referer;

    public static SourceHttpEventParameters build(java.util.Map<String, ?> map) {
        SourceHttpEventParameters self = new SourceHttpEventParameters();
        return TeaModel.build(map, self);
    }

    public SourceHttpEventParameters setType(String type) {
        this.type = type;
        return this;
    }
    public String getType() {
        return this.type;
    }

    public SourceHttpEventParameters setMethod(java.util.List<String> method) {
        this.method = method;
        return this;
    }
    public java.util.List<String> getMethod() {
        return this.method;
    }

    public SourceHttpEventParameters setSecurityConfig(String securityConfig) {
        this.securityConfig = securityConfig;
        return this;
    }
    public String getSecurityConfig() {
        return this.securityConfig;
    }

    public SourceHttpEventParameters setIp(java.util.List<String> ip) {
        this.ip = ip;
        return this;
    }
    public java.util.List<String> getIp() {
        return this.ip;
    }

    public SourceHttpEventParameters setReferer(java.util.List<String> referer) {
        this.referer = referer;
        return this;
    }
    public java.util.List<String> getReferer() {
        return this.referer;
    }

}
