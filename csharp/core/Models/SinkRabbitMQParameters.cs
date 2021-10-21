// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkRabbitMQParameters
     */
    public class SinkRabbitMQParameters : TeaModel {
        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public TargetParameter InstanceId { get; set; }

        [NameInMap("VirtualHostName")]
        [Validation(Required=false)]
        public TargetParameter VirtualHostName { get; set; }

        [NameInMap("TargetType")]
        [Validation(Required=false)]
        public TargetParameter TargetType { get; set; }

        [NameInMap("Exchange")]
        [Validation(Required=false)]
        public TargetParameter Exchange { get; set; }

        [NameInMap("RoutingKey")]
        [Validation(Required=false)]
        public TargetParameter RoutingKey { get; set; }

        [NameInMap("QueueName")]
        [Validation(Required=false)]
        public TargetParameter QueueName { get; set; }

        [NameInMap("Body")]
        [Validation(Required=false)]
        public TargetParameter Body { get; set; }

        [NameInMap("MessageId")]
        [Validation(Required=false)]
        public TargetParameter MessageId { get; set; }

        [NameInMap("Properties")]
        [Validation(Required=false)]
        public TargetParameter Properties { get; set; }

    }

}
