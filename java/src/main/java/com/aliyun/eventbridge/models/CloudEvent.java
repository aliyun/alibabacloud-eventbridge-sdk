// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * Cloud Event Stanard Froamt
 */
public class CloudEvent extends TeaModel {
    @NameInMap("id")
    @Validation(required = true)
    public String id;

    @NameInMap("source")
    @Validation(required = true, maxLength = 128)
    public String source;

    @NameInMap("specversion")
    public String specversion;

    @NameInMap("type")
    @Validation(required = true, maxLength = 64)
    public String type;

    @NameInMap("datacontenttype")
    public String datacontenttype;

    @NameInMap("dataschema")
    public String dataschema;

    @NameInMap("subject")
    public String subject;

    @NameInMap("time")
    @Validation(pattern = "[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*", maxLength = 64)
    public String time;

    @NameInMap("extensions")
    @Validation(required = true)
    public java.util.Map<String, ?> extensions;

    @NameInMap("data")
    public byte[] data;

    public static CloudEvent build(java.util.Map<String, ?> map) {
        CloudEvent self = new CloudEvent();
        return TeaModel.build(map, self);
    }

    public CloudEvent setId(String id) {
        this.id = id;
        return this;
    }
    public String getId() {
        return this.id;
    }

    public CloudEvent setSource(String source) {
        this.source = source;
        return this;
    }
    public String getSource() {
        return this.source;
    }

    public CloudEvent setSpecversion(String specversion) {
        this.specversion = specversion;
        return this;
    }
    public String getSpecversion() {
        return this.specversion;
    }

    public CloudEvent setType(String type) {
        this.type = type;
        return this;
    }
    public String getType() {
        return this.type;
    }

    public CloudEvent setDatacontenttype(String datacontenttype) {
        this.datacontenttype = datacontenttype;
        return this;
    }
    public String getDatacontenttype() {
        return this.datacontenttype;
    }

    public CloudEvent setDataschema(String dataschema) {
        this.dataschema = dataschema;
        return this;
    }
    public String getDataschema() {
        return this.dataschema;
    }

    public CloudEvent setSubject(String subject) {
        this.subject = subject;
        return this;
    }
    public String getSubject() {
        return this.subject;
    }

    public CloudEvent setTime(String time) {
        this.time = time;
        return this;
    }
    public String getTime() {
        return this.time;
    }

    public CloudEvent setExtensions(java.util.Map<String, ?> extensions) {
        this.extensions = extensions;
        return this;
    }
    public java.util.Map<String, ?> getExtensions() {
        return this.extensions;
    }

    public CloudEvent setData(byte[] data) {
        this.data = data;
        return this;
    }
    public byte[] getData() {
        return this.data;
    }

}
