// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of PauseEventStreaming
 */
public class PauseEventStreamingRequest extends TeaModel {
    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    public static PauseEventStreamingRequest build(java.util.Map<String, ?> map) {
        PauseEventStreamingRequest self = new PauseEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public PauseEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

}
