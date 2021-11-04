// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of delete event streaming
 */
public class DeleteEventStreamingRequest extends TeaModel {
    @NameInMap("EventStreamingName")
    @Validation(required = true)
    public String eventStreamingName;

    public static DeleteEventStreamingRequest build(java.util.Map<String, ?> map) {
        DeleteEventStreamingRequest self = new DeleteEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public DeleteEventStreamingRequest setEventStreamingName(String eventStreamingName) {
        this.eventStreamingName = eventStreamingName;
        return this;
    }
    public String getEventStreamingName() {
        return this.eventStreamingName;
    }

}
