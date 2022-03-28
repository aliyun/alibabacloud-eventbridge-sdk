// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class SourceHttpEventResponse extends TeaModel {
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

    @NameInMap("PublicWebHookUrl")
    public java.util.List<String> publicWebHookUrl;

    @NameInMap("VpcWebHookUrl")
    public java.util.List<String> vpcWebHookUrl;

    public static SourceHttpEventResponse build(java.util.Map<String, ?> map) {
        SourceHttpEventResponse self = new SourceHttpEventResponse();
        return TeaModel.build(map, self);
    }

    public SourceHttpEventResponse setType(String type) {
        this.type = type;
        return this;
    }
    public String getType() {
        return this.type;
    }

    public SourceHttpEventResponse setMethod(java.util.List<String> method) {
        this.method = method;
        return this;
    }
    public java.util.List<String> getMethod() {
        return this.method;
    }

    public SourceHttpEventResponse setSecurityConfig(String securityConfig) {
        this.securityConfig = securityConfig;
        return this;
    }
    public String getSecurityConfig() {
        return this.securityConfig;
    }

    public SourceHttpEventResponse setIp(java.util.List<String> ip) {
        this.ip = ip;
        return this;
    }
    public java.util.List<String> getIp() {
        return this.ip;
    }

    public SourceHttpEventResponse setReferer(java.util.List<String> referer) {
        this.referer = referer;
        return this;
    }
    public java.util.List<String> getReferer() {
        return this.referer;
    }

    public SourceHttpEventResponse setPublicWebHookUrl(java.util.List<String> publicWebHookUrl) {
        this.publicWebHookUrl = publicWebHookUrl;
        return this;
    }
    public java.util.List<String> getPublicWebHookUrl() {
        return this.publicWebHookUrl;
    }

    public SourceHttpEventResponse setVpcWebHookUrl(java.util.List<String> vpcWebHookUrl) {
        this.vpcWebHookUrl = vpcWebHookUrl;
        return this;
    }
    public java.util.List<String> getVpcWebHookUrl() {
        return this.vpcWebHookUrl;
    }

}
