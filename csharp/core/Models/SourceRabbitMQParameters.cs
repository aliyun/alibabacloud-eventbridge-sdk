// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceRabbitMQParameters
     */
    public class SourceRabbitMQParameters : TeaModel {
        [NameInMap("RegionId")]
        [Validation(Required=false)]
        public string RegionId { get; set; }

        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public string InstanceId { get; set; }

        [NameInMap("VirtualHostName")]
        [Validation(Required=true)]
        public string VirtualHostName { get; set; }

        [NameInMap("QueueName")]
        [Validation(Required=true)]
        public string QueueName { get; set; }

    }

}
