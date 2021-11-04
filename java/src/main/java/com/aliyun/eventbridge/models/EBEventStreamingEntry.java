// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of EBEventStreamingEntry
 */
public class EBEventStreamingEntry extends TeaModel {
    @NameInMap("EventStreamingName")
    public String eventStreamingName;

    @NameInMap("Description")
    public String description;

    @NameInMap("Source")
    public Source source;

    @NameInMap("FilterPattern")
    public String filterPattern;

    @NameInMap("Sink")
    public Sink sink;

    @NameInMap("RunOptions")
    public RunOptions runOptions;

    @NameInMap("Tag")
    public String tag;

    @NameInMap("Status")
    public String status;

    public static EBEventStreamingEntry build(java.util.Map<String, ?> map) {
        EBEventStreamingEntry self = new EBEventStreamingEntry();
        return TeaModel.build(map, self);
    }

    public EBEventStreamingEntry setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

    public EBEventStreamingEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EBEventStreamingEntry setSource(Source source) {
        this.source = source;
        return this;
    }
    public Source getSource() {
        return this.source;
    }

    public EBEventStreamingEntry setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public EBEventStreamingEntry setSink(Sink sink) {
        this.sink = sink;
        return this;
    }
    public Sink getSink() {
        return this.sink;
    }

    public EBEventStreamingEntry setRunOptions(RunOptions runOptions) {
        this.runOptions = runOptions;
        return this;
    }
    public RunOptions getRunOptions() {
        return this.runOptions;
    }

    public EBEventStreamingEntry setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

    public EBEventStreamingEntry setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

}
