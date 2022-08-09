// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of update the event source
 */
public class UpdateEventSourceRequest extends TeaModel {
    @NameInMap("EventSourceName")
    @Validation(required = true, maxLength = 127, minLength = 1)
    public String eventSourceName;

    @NameInMap("Description")
    public String description;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("SourceRabbitMQParameters")
    public SourceRabbitMQParameters sourceRabbitMQParameters;

    @NameInMap("SourceMNSParameters")
    public SourceMNSParameters sourceMNSParameters;

    @NameInMap("SourceRocketMQParameters")
    public SourceRocketMQParameters sourceRocketMQParameters;

    @NameInMap("SourceScheduledEventParameters")
    public SourceScheduledEventParameters sourceScheduledEventParameters;

    @NameInMap("SourceHttpEventParameters")
    public SourceHttpEventParameters sourceHttpEventParameters;

    @NameInMap("SourceSLSParameters")
    public SourceSLSParameters sourceSLSParameters;

    public static UpdateEventSourceRequest build(java.util.Map<String, ?> map) {
        UpdateEventSourceRequest self = new UpdateEventSourceRequest();
        return TeaModel.build(map, self);
    }

    public UpdateEventSourceRequest setEventSourceName(String eventSourceName) {
        this.eventSourceName = eventSourceName;
        return this;
    }
    public String getEventSourceName() {
        return this.eventSourceName;
    }

    public UpdateEventSourceRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public UpdateEventSourceRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public UpdateEventSourceRequest setSourceRabbitMQParameters(SourceRabbitMQParameters sourceRabbitMQParameters) {
        this.sourceRabbitMQParameters = sourceRabbitMQParameters;
        return this;
    }
    public SourceRabbitMQParameters getSourceRabbitMQParameters() {
        return this.sourceRabbitMQParameters;
    }

    public UpdateEventSourceRequest setSourceMNSParameters(SourceMNSParameters sourceMNSParameters) {
        this.sourceMNSParameters = sourceMNSParameters;
        return this;
    }
    public SourceMNSParameters getSourceMNSParameters() {
        return this.sourceMNSParameters;
    }

    public UpdateEventSourceRequest setSourceRocketMQParameters(SourceRocketMQParameters sourceRocketMQParameters) {
        this.sourceRocketMQParameters = sourceRocketMQParameters;
        return this;
    }
    public SourceRocketMQParameters getSourceRocketMQParameters() {
        return this.sourceRocketMQParameters;
    }

    public UpdateEventSourceRequest setSourceScheduledEventParameters(SourceScheduledEventParameters sourceScheduledEventParameters) {
        this.sourceScheduledEventParameters = sourceScheduledEventParameters;
        return this;
    }
    public SourceScheduledEventParameters getSourceScheduledEventParameters() {
        return this.sourceScheduledEventParameters;
    }

    public UpdateEventSourceRequest setSourceHttpEventParameters(SourceHttpEventParameters sourceHttpEventParameters) {
        this.sourceHttpEventParameters = sourceHttpEventParameters;
        return this;
    }
    public SourceHttpEventParameters getSourceHttpEventParameters() {
        return this.sourceHttpEventParameters;
    }

    public UpdateEventSourceRequest setSourceSLSParameters(SourceSLSParameters sourceSLSParameters) {
        this.sourceSLSParameters = sourceSLSParameters;
        return this;
    }
    public SourceSLSParameters getSourceSLSParameters() {
        return this.sourceSLSParameters;
    }

}
