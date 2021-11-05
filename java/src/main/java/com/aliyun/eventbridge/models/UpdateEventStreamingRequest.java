// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of UpdateEventStreaming
 */
public class UpdateEventStreamingRequest extends TeaModel {
    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    @NameInMap("Description")
    public String description;

    @NameInMap("Source")
    public Source Source;

    @NameInMap("FilterPattern")
    public String filterPattern;

    @NameInMap("Sink")
    public Sink Sink;

    @NameInMap("RunOptions")
    public RunOptions runOptions;

    @NameInMap("Tag")
    public String tag;

    public static UpdateEventStreamingRequest build(java.util.Map<String, ?> map) {
        UpdateEventStreamingRequest self = new UpdateEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public UpdateEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

    public UpdateEventStreamingRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public UpdateEventStreamingRequest setSource(Source Source) {
        this.Source = Source;
        return this;
    }
    public Source getSource() {
        return this.Source;
    }

    public UpdateEventStreamingRequest setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public UpdateEventStreamingRequest setSink(Sink Sink) {
        this.Sink = Sink;
        return this;
    }
    public Sink getSink() {
        return this.Sink;
    }

    public UpdateEventStreamingRequest setRunOptions(RunOptions runOptions) {
        this.runOptions = runOptions;
        return this;
    }
    public RunOptions getRunOptions() {
        return this.runOptions;
    }

    public UpdateEventStreamingRequest setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

}
