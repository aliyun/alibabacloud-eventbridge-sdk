// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of createEventSource
 */
public class CreateEventSourceRequest extends TeaModel {
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
    public SourceRocketMQParameters SourceRocketMQParameters;

    @NameInMap("SourceScheduledEventParameters")
    public SourceScheduledEventParameters sourceScheduledEventParameters;

    @NameInMap("SourceHttpEventParameters")
    public SourceHttpEventParameters sourceHttpEventParameters;

    @NameInMap("SourceSLSParameters")
    public SourceSLSParameters sourceSLSParameters;

    public static CreateEventSourceRequest build(java.util.Map<String, ?> map) {
        CreateEventSourceRequest self = new CreateEventSourceRequest();
        return TeaModel.build(map, self);
    }

    public CreateEventSourceRequest setEventSourceName(String eventSourceName) {
        this.eventSourceName = eventSourceName;
        return this;
    }
    public String getEventSourceName() {
        return this.eventSourceName;
    }

    public CreateEventSourceRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public CreateEventSourceRequest setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public CreateEventSourceRequest setSourceRabbitMQParameters(SourceRabbitMQParameters sourceRabbitMQParameters) {
        this.sourceRabbitMQParameters = sourceRabbitMQParameters;
        return this;
    }
    public SourceRabbitMQParameters getSourceRabbitMQParameters() {
        return this.sourceRabbitMQParameters;
    }

    public CreateEventSourceRequest setSourceMNSParameters(SourceMNSParameters sourceMNSParameters) {
        this.sourceMNSParameters = sourceMNSParameters;
        return this;
    }
    public SourceMNSParameters getSourceMNSParameters() {
        return this.sourceMNSParameters;
    }

    public CreateEventSourceRequest setSourceRocketMQParameters(SourceRocketMQParameters SourceRocketMQParameters) {
        this.SourceRocketMQParameters = SourceRocketMQParameters;
        return this;
    }
    public SourceRocketMQParameters getSourceRocketMQParameters() {
        return this.SourceRocketMQParameters;
    }

    public CreateEventSourceRequest setSourceScheduledEventParameters(SourceScheduledEventParameters sourceScheduledEventParameters) {
        this.sourceScheduledEventParameters = sourceScheduledEventParameters;
        return this;
    }
    public SourceScheduledEventParameters getSourceScheduledEventParameters() {
        return this.sourceScheduledEventParameters;
    }

    public CreateEventSourceRequest setSourceHttpEventParameters(SourceHttpEventParameters sourceHttpEventParameters) {
        this.sourceHttpEventParameters = sourceHttpEventParameters;
        return this;
    }
    public SourceHttpEventParameters getSourceHttpEventParameters() {
        return this.sourceHttpEventParameters;
    }

    public CreateEventSourceRequest setSourceSLSParameters(SourceSLSParameters sourceSLSParameters) {
        this.sourceSLSParameters = sourceSLSParameters;
        return this;
    }
    public SourceSLSParameters getSourceSLSParameters() {
        return this.sourceSLSParameters;
    }

}
