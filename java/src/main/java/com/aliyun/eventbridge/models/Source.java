// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of Source
 */
public class Source extends TeaModel {
    @NameInMap("SourceMNSParameters")
    public SourceMNSParameters sourceMNSParameters;

    @NameInMap("SourceRabbitMQParameters")
    public SourceRabbitMQParameters sourceRabbitMQParameters;

    @NameInMap("SourceRocketMQParameters")
    public SourceRocketMQParameters sourceRocketMQParameters;

    @NameInMap("SourceKafkaParameters")
    public SourceKafkaParameters sourceKafkaParameters;

    @NameInMap("SourceMQTTParameters")
    public SourceMQTTParameters sourceMQTTParameters;

    @NameInMap("SourceDTSParameters")
    public SourceDTSParameters sourceDTSParameters;

    @NameInMap("SourceSLSParameters")
    public SourceSLSParameters sourceSLSParameters;

    public static Source build(java.util.Map<String, ?> map) {
        Source self = new Source();
        return TeaModel.build(map, self);
    }

    public Source setSourceMNSParameters(SourceMNSParameters sourceMNSParameters) {
        this.sourceMNSParameters = sourceMNSParameters;
        return this;
    }
    public SourceMNSParameters getSourceMNSParameters() {
        return this.sourceMNSParameters;
    }

    public Source setSourceRabbitMQParameters(SourceRabbitMQParameters sourceRabbitMQParameters) {
        this.sourceRabbitMQParameters = sourceRabbitMQParameters;
        return this;
    }
    public SourceRabbitMQParameters getSourceRabbitMQParameters() {
        return this.sourceRabbitMQParameters;
    }

    public Source setSourceRocketMQParameters(SourceRocketMQParameters sourceRocketMQParameters) {
        this.sourceRocketMQParameters = sourceRocketMQParameters;
        return this;
    }
    public SourceRocketMQParameters getSourceRocketMQParameters() {
        return this.sourceRocketMQParameters;
    }

    public Source setSourceKafkaParameters(SourceKafkaParameters sourceKafkaParameters) {
        this.sourceKafkaParameters = sourceKafkaParameters;
        return this;
    }
    public SourceKafkaParameters getSourceKafkaParameters() {
        return this.sourceKafkaParameters;
    }

    public Source setSourceMQTTParameters(SourceMQTTParameters sourceMQTTParameters) {
        this.sourceMQTTParameters = sourceMQTTParameters;
        return this;
    }
    public SourceMQTTParameters getSourceMQTTParameters() {
        return this.sourceMQTTParameters;
    }

    public Source setSourceDTSParameters(SourceDTSParameters sourceDTSParameters) {
        this.sourceDTSParameters = sourceDTSParameters;
        return this;
    }
    public SourceDTSParameters getSourceDTSParameters() {
        return this.sourceDTSParameters;
    }

    public Source setSourceSLSParameters(SourceSLSParameters sourceSLSParameters) {
        this.sourceSLSParameters = sourceSLSParameters;
        return this;
    }
    public SourceSLSParameters getSourceSLSParameters() {
        return this.sourceSLSParameters;
    }

}
