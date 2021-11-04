// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of listEventStreamingMetrics
 */
public class ListEventStreamingMetricsResponse extends TeaModel {
    @NameInMap("RequestId")
    @Validation(required = true)
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    @Validation(required = true)
    public String resourceOwnerAccountId;

    @NameInMap("EventStreamingMetrics")
    @Validation(required = true)
    public java.util.List<EventStreamingMetric> eventStreamingMetrics;

    public static ListEventStreamingMetricsResponse build(java.util.Map<String, ?> map) {
        ListEventStreamingMetricsResponse self = new ListEventStreamingMetricsResponse();
        return TeaModel.build(map, self);
    }

    public ListEventStreamingMetricsResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }
    public String getRequestId() {
        return this.requestId;
    }

    public ListEventStreamingMetricsResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }
    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public ListEventStreamingMetricsResponse setEventStreamingMetrics(java.util.List<EventStreamingMetric> eventStreamingMetrics) {
        this.eventStreamingMetrics = eventStreamingMetrics;
        return this;
    }
    public java.util.List<EventStreamingMetric> getEventStreamingMetrics() {
        return this.eventStreamingMetrics;
    }

}
