// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of Sink
 */
public class Sink extends TeaModel {
    @NameInMap("SinkMNSParameters")
    public SinkMNSParameters sinkMNSParameters;

    @NameInMap("SinkRabbitMQParameters")
    public SinkRabbitMQParameters sinkRabbitMQParameters;

    @NameInMap("SinkKafkaParameters")
    public SinkKafkaParameters sinkKafkaParameters;

    @NameInMap("SinkRocketMQParameters")
    public SinkRocketMQParameters sinkRocketMQParameters;

    @NameInMap("SinkFcParameters")
    public SinkFcParameters sinkFcParameters;

    @NameInMap("SinkOdpsParameters")
    public SinkOdpsParameters sinkOdpsParameters;

    @NameInMap("SinkSLSParameters")
    public SinkSLSParameters sinkSLSParameters;

    public static Sink build(java.util.Map<String, ?> map) {
        Sink self = new Sink();
        return TeaModel.build(map, self);
    }

    public Sink setSinkMNSParameters(SinkMNSParameters sinkMNSParameters) {
        this.sinkMNSParameters = sinkMNSParameters;
        return this;
    }
    public SinkMNSParameters getSinkMNSParameters() {
        return this.sinkMNSParameters;
    }

    public Sink setSinkRabbitMQParameters(SinkRabbitMQParameters sinkRabbitMQParameters) {
        this.sinkRabbitMQParameters = sinkRabbitMQParameters;
        return this;
    }
    public SinkRabbitMQParameters getSinkRabbitMQParameters() {
        return this.sinkRabbitMQParameters;
    }

    public Sink setSinkKafkaParameters(SinkKafkaParameters sinkKafkaParameters) {
        this.sinkKafkaParameters = sinkKafkaParameters;
        return this;
    }
    public SinkKafkaParameters getSinkKafkaParameters() {
        return this.sinkKafkaParameters;
    }

    public Sink setSinkRocketMQParameters(SinkRocketMQParameters sinkRocketMQParameters) {
        this.sinkRocketMQParameters = sinkRocketMQParameters;
        return this;
    }
    public SinkRocketMQParameters getSinkRocketMQParameters() {
        return this.sinkRocketMQParameters;
    }

    public Sink setSinkFcParameters(SinkFcParameters sinkFcParameters) {
        this.sinkFcParameters = sinkFcParameters;
        return this;
    }
    public SinkFcParameters getSinkFcParameters() {
        return this.sinkFcParameters;
    }

    public Sink setSinkOdpsParameters(SinkOdpsParameters sinkOdpsParameters) {
        this.sinkOdpsParameters = sinkOdpsParameters;
        return this;
    }
    public SinkOdpsParameters getSinkOdpsParameters() {
        return this.sinkOdpsParameters;
    }

    public Sink setSinkSLSParameters(SinkSLSParameters sinkSLSParameters) {
        this.sinkSLSParameters = sinkSLSParameters;
        return this;
    }
    public SinkSLSParameters getSinkSLSParameters() {
        return this.sinkSLSParameters;
    }

}
