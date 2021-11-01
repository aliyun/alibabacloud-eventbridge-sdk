// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of listEventStreamingMetrics
 */
public class ListEventStreamingMetricsRequest extends TeaModel {
    @NameInMap("EventStreamingNames")
    public java.util.List<String> eventStreamingNames;

    public static ListEventStreamingMetricsRequest build(java.util.Map<String, ?> map) {
        ListEventStreamingMetricsRequest self = new ListEventStreamingMetricsRequest();
        return TeaModel.build(map, self);
    }

    public ListEventStreamingMetricsRequest setEventStreamingNames(java.util.List<String> eventStreamingNames) {
        this.eventStreamingNames = eventStreamingNames;
        return this;
    }
    public java.util.List<String> getEventStreamingNames() {
        return this.eventStreamingNames;
    }

}
