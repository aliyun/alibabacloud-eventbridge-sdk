// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of createEventStreaming
 */
public class CreateEventStreamingRequest extends TeaModel {
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

    public static CreateEventStreamingRequest build(java.util.Map<String, ?> map) {
        CreateEventStreamingRequest self = new CreateEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public CreateEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

    public CreateEventStreamingRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public CreateEventStreamingRequest setSource(Source source) {
        this.source = source;
        return this;
    }
    public Source getSource() {
        return this.source;
    }

    public CreateEventStreamingRequest setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public CreateEventStreamingRequest setSink(Sink sink) {
        this.sink = sink;
        return this;
    }
    public Sink getSink() {
        return this.sink;
    }

    public CreateEventStreamingRequest setRunOptions(RunOptions runOptions) {
        this.runOptions = runOptions;
        return this;
    }
    public RunOptions getRunOptions() {
        return this.runOptions;
    }

    public CreateEventStreamingRequest setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

}
