package com.aliyun.eventbridge.util;

import java.net.URI;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.TimeZone;

import com.aliyun.eventbridge.models.CloudEvent;

import static com.aliyun.eventbridge.util.EBConstants.DEFAULT_CHARSET;

/**
 * Build Cloud Event
 */
public class EventBuilder {

    private String id;
    private URI source;
    private String type;
    private String subject;
    private Date time;
    private byte[] data;
    private TimeZone timeZone;
    private Map<String, Object> extensions = new HashMap<>();

    /**
     * Gets a brand new builder instance
     */
    public static EventBuilder builder() {
        return new EventBuilder();
    }

    public EventBuilder withId(String id) {
        this.id = id;
        return this;
    }

    public EventBuilder withSource(URI source) {
        this.source = source;
        return this;
    }

    public EventBuilder withType(String type) {
        this.type = type;
        return this;
    }

    public EventBuilder withTime(Date time) {
        this.time = time;
        return this;
    }

    public EventBuilder withTime(Date time, TimeZone zone) {
        this.time = time;
        this.timeZone = timeZone;
        return this;
    }

    public EventBuilder withSubject(String subject) {
        this.subject = subject;
        return this;
    }

    public EventBuilder withAliyunEventBus(String eventBusName) {
        this.extensions.put(EBConstants.EXTENSION_EVENTBUSNAME, eventBusName);
        return this;
    }

    public EventBuilder withJsonStringData(String jsonString) {
        this.data = jsonString.getBytes(DEFAULT_CHARSET);
        return this;
    }

    /**
     * build CloudEvent
     *
     * @return
     */
    public CloudEvent build() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setId(id)
            .setSource(source != null ? source.toASCIIString() : null)
            .setType(type)
            .setSubject(subject)
            .setTime(time != null ? Time.zoneTime(time, timeZone) : null)
            .setExtensions(extensions)
            .setData(data);
        //default value
        this.extensions.put(EBConstants.EXTENSION_PUBLISHTIME, Time.zoneTime(new Date()));
        cloudEvent.setSpecversion(EBConstants.DEFAULT_SPEC_VERSION);
        cloudEvent.setDatacontenttype(EBConstants.DEFAULT_DATA_CONTENT_TYPE);
        return cloudEvent;
    }

}
