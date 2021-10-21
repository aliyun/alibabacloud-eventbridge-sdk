// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of Source
     */
    public class Source : TeaModel {
        [NameInMap("SourceMNSParameters")]
        [Validation(Required=false)]
        public SourceMNSParameters SourceMNSParameters { get; set; }

        [NameInMap("SourceRabbitMQParameters")]
        [Validation(Required=false)]
        public SourceRabbitMQParameters SourceRabbitMQParameters { get; set; }

        [NameInMap("SourceRocketMQParameters")]
        [Validation(Required=false)]
        public SourceRocketMQParameters SourceRocketMQParameters { get; set; }

        [NameInMap("SourceKafkaParameters")]
        [Validation(Required=false)]
        public SourceKafkaParameters SourceKafkaParameters { get; set; }

    }

}
