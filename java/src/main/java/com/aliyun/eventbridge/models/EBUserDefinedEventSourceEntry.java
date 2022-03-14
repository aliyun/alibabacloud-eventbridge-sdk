// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The event source entry
 */
public class EBUserDefinedEventSourceEntry extends TeaModel {
    @NameInMap("Name")
    public String name;

    @NameInMap("Description")
    public String description;

    @NameInMap("ARN")
    public String arn;

    @NameInMap("Status")
    public String status;

    @NameInMap("Ctime")
    public Long ctime;

    @NameInMap("EventBusName")
    public String eventBusName;

    @NameInMap("SourceRabbitMQParameters")
    public SourceRabbitMQParameters sourceRabbitMQParameters;

    @NameInMap("SourceMNSParameters")
    public SourceMNSParameters sourceMNSParameters;

    @NameInMap("SourceRocketMQParameters")
    @Validation(required = true)
    public SourceRocketMQParameters sourceRocketMQParameters;

    @NameInMap("SourceKafkaParameters")
    @Validation(required = true)
    public SourceKafkaParameters sourceKafkaParameters;

    @NameInMap("SourceHttpEventParameters")
    @Validation(required = true)
    public SourceHttpEventParameters sourceHttpEventParameters;

    public static EBUserDefinedEventSourceEntry build(java.util.Map<String, ?> map) {
        EBUserDefinedEventSourceEntry self = new EBUserDefinedEventSourceEntry();
        return TeaModel.build(map, self);
    }

    public EBUserDefinedEventSourceEntry setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EBUserDefinedEventSourceEntry setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public EBUserDefinedEventSourceEntry setArn(String arn) {
        this.arn = arn;
        return this;
    }
    public String getArn() {
        return this.arn;
    }

    public EBUserDefinedEventSourceEntry setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

    public EBUserDefinedEventSourceEntry setCtime(Long ctime) {
        this.ctime = ctime;
        return this;
    }
    public Long getCtime() {
        return this.ctime;
    }

    public EBUserDefinedEventSourceEntry setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public EBUserDefinedEventSourceEntry setSourceRabbitMQParameters(SourceRabbitMQParameters sourceRabbitMQParameters) {
        this.sourceRabbitMQParameters = sourceRabbitMQParameters;
        return this;
    }
    public SourceRabbitMQParameters getSourceRabbitMQParameters() {
        return this.sourceRabbitMQParameters;
    }

    public EBUserDefinedEventSourceEntry setSourceMNSParameters(SourceMNSParameters sourceMNSParameters) {
        this.sourceMNSParameters = sourceMNSParameters;
        return this;
    }
    public SourceMNSParameters getSourceMNSParameters() {
        return this.sourceMNSParameters;
    }

    public EBUserDefinedEventSourceEntry setSourceRocketMQParameters(SourceRocketMQParameters sourceRocketMQParameters) {
        this.sourceRocketMQParameters = sourceRocketMQParameters;
        return this;
    }
    public SourceRocketMQParameters getSourceRocketMQParameters() {
        return this.sourceRocketMQParameters;
    }

    public EBUserDefinedEventSourceEntry setSourceKafkaParameters(SourceKafkaParameters sourceKafkaParameters) {
        this.sourceKafkaParameters = sourceKafkaParameters;
        return this;
    }
    public SourceKafkaParameters getSourceKafkaParameters() {
        return this.sourceKafkaParameters;
    }

    public EBUserDefinedEventSourceEntry setSourceHttpEventParameters(SourceHttpEventParameters sourceHttpEventParameters) {
        this.sourceHttpEventParameters = sourceHttpEventParameters;
        return this;
    }
    public SourceHttpEventParameters getSourceHttpEventParameters() {
        return this.sourceHttpEventParameters;
    }

}
