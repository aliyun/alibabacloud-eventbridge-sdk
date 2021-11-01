// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of StartEventStreaming
 */
public class StartEventStreamingRequest extends TeaModel {
    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    public static StartEventStreamingRequest build(java.util.Map<String, ?> map) {
        StartEventStreamingRequest self = new StartEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public StartEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

}
