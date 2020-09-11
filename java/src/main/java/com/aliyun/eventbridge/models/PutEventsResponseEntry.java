// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;

/**
 * The detail of put event result
 */
public class PutEventsResponseEntry extends TeaModel {
    @NameInMap("EventId")
    public String eventId;

    @NameInMap("TraceId")
    public String traceId;

    @NameInMap("ErrorCode")
    public String errorCode;

    @NameInMap("ErrorMessage")
    public String errorMessage;

    public static PutEventsResponseEntry build(java.util.Map<String, ?> map) {
        PutEventsResponseEntry self = new PutEventsResponseEntry();
        return TeaModel.build(map, self);
    }

    public PutEventsResponseEntry setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }

    public String getEventId() {
        return this.eventId;
    }

    public PutEventsResponseEntry setTraceId(String traceId) {
        this.traceId = traceId;
        return this;
    }

    public String getTraceId() {
        return this.traceId;
    }

    public PutEventsResponseEntry setErrorCode(String errorCode) {
        this.errorCode = errorCode;
        return this;
    }

    public String getErrorCode() {
        return this.errorCode;
    }

    public PutEventsResponseEntry setErrorMessage(String errorMessage) {
        this.errorMessage = errorMessage;
        return this;
    }

    public String getErrorMessage() {
        return this.errorMessage;
    }

}
