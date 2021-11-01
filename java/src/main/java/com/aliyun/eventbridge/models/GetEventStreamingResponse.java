// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of create event streaming
 */
public class GetEventStreamingResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    @NameInMap("Description")
    @Validation(required = true)
    public String description;

    @NameInMap("Source")
    @Validation(required = true)
    public Source source;

    @NameInMap("FilterPattern")
    @Validation(required = true)
    public String filterPattern;

    @NameInMap("Sink")
    @Validation(required = true)
    public Sink sink;

    @NameInMap("RunOptions")
    @Validation(required = true)
    public RunOptions runOptions;

    @NameInMap("Tag")
    @Validation(required = true)
    public String tag;

    @NameInMap("Status")
    @Validation(required = true)
    public String status;

    public static GetEventStreamingResponse build(java.util.Map<String, ?> map) {
        GetEventStreamingResponse self = new GetEventStreamingResponse();
        return TeaModel.build(map, self);
    }

    public GetEventStreamingResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public GetEventStreamingResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public GetEventStreamingResponse setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

    public GetEventStreamingResponse setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public GetEventStreamingResponse setSource(Source source) {
        this.source = source;
        return this;
    }
    public Source getSource() {
        return this.source;
    }

    public GetEventStreamingResponse setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public GetEventStreamingResponse setSink(Sink sink) {
        this.sink = sink;
        return this;
    }
    public Sink getSink() {
        return this.sink;
    }

    public GetEventStreamingResponse setRunOptions(RunOptions runOptions) {
        this.runOptions = runOptions;
        return this;
    }
    public RunOptions getRunOptions() {
        return this.runOptions;
    }

    public GetEventStreamingResponse setTag(String tag) {
        this.tag = tag;
        return this;
    }
    public String getTag() {
        return this.tag;
    }

    public GetEventStreamingResponse setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

}
