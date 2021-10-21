// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of Sink
     */
    public class Sink : TeaModel {
        [NameInMap("SinkMNSParameters")]
        [Validation(Required=false)]
        public SinkMNSParameters SinkMNSParameters { get; set; }

        [NameInMap("SinkRabbitMQParameters")]
        [Validation(Required=false)]
        public SinkRabbitMQParameters SinkRabbitMQParameters { get; set; }

        [NameInMap("SinkKafkaParameters")]
        [Validation(Required=false)]
        public SinkKafkaParameters SinkKafkaParameters { get; set; }

        [NameInMap("SinkRocketMQParameters")]
        [Validation(Required=false)]
        public SinkRocketMQParameters SinkRocketMQParameters { get; set; }

        [NameInMap("SinkFcParameters")]
        [Validation(Required=false)]
        public SinkFcParameters SinkFcParameters { get; set; }

        [NameInMap("SinkOdpsParameters")]
        [Validation(Required=false)]
        public SinkOdpsParameters SinkOdpsParameters { get; set; }

    }

}
