// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of create event streaming
 */
public class GetEventStreamingRequest extends TeaModel {
    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    public static GetEventStreamingRequest build(java.util.Map<String, ?> map) {
        GetEventStreamingRequest self = new GetEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public GetEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

}
