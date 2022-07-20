// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class EBSaaSEventSourceEntry extends TeaModel {
    @NameInMap("Name")
    public String name;

    @NameInMap("Description")
    public String description;

    @NameInMap("Logo")
    public String logo;

    @NameInMap("Doc")
    public String doc;

    @NameInMap("Ctime")
    public Long ctime;

    @NameInMap("Tag")
    public java.util.List<String> tag;

    @NameInMap("FullName")
    public String fullName;

    public static EBSaaSEventSourceEntry build(java.util.Map<String, ?> map) {
        EBSaaSEventSourceEntry self = new EBSaaSEventSourceEntry();
        return TeaModel.build(map, self);
    }

    public EBSaaSEventSourceEntry setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EBSaaSEventSourceEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EBSaaSEventSourceEntry setLogo(String logo) {
        this.logo = logo;
        return this;
    }
    public String getLogo() {
        return this.logo;
    }

    public EBSaaSEventSourceEntry setDoc(String doc) {
        this.doc = doc;
        return this;
    }
    public String getDoc() {
        return this.doc;
    }

    public EBSaaSEventSourceEntry setCtime(Long ctime) {
        this.ctime = ctime;
        return this;
    }
    public Long getCtime() {
        return this.ctime;
    }

    public EBSaaSEventSourceEntry setTag(java.util.List<String> tag) {
        this.tag = tag;
        return this;
    }
    public java.util.List<String> getTag() {
        return this.tag;
    }

    public EBSaaSEventSourceEntry setFullName(String fullName) {
        this.fullName = fullName;
        return this;
    }
    public String getFullName() {
        return this.fullName;
    }

}
