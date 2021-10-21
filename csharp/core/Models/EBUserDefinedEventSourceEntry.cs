// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The event source entry
     */
    public class EBUserDefinedEventSourceEntry : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=false)]
        public string Name { get; set; }

        [NameInMap("Description")]
        [Validation(Required=false)]
        public string Description { get; set; }

        [NameInMap("ARN")]
        [Validation(Required=false)]
        public string Arn { get; set; }

        [NameInMap("Status")]
        [Validation(Required=false)]
        public string Status { get; set; }

        [NameInMap("Ctime")]
        [Validation(Required=false)]
        public long? Ctime { get; set; }

        [NameInMap("EventBusName")]
        [Validation(Required=false)]
        public string EventBusName { get; set; }

        [NameInMap("SourceRabbitMQParameters")]
        [Validation(Required=false)]
        public SourceRabbitMQParameters SourceRabbitMQParameters { get; set; }

        [NameInMap("SourceMNSParameters")]
        [Validation(Required=false)]
        public SourceMNSParameters SourceMNSParameters { get; set; }

        [NameInMap("SourceRocketMQParameters")]
        [Validation(Required=true)]
        public SourceRocketMQParameters SourceRocketMQParameters { get; set; }

        [NameInMap("SourceKafkaParameters")]
        [Validation(Required=true)]
        public SourceKafkaParameters SourceKafkaParameters { get; set; }

    }

}
