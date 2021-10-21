// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceKafkaParameters
     */
    public class SourceKafkaParameters : TeaModel {
        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public string InstanceId { get; set; }

        [NameInMap("Topic")]
        [Validation(Required=false)]
        public string Topic { get; set; }

        [NameInMap("ConsumerGroup")]
        [Validation(Required=true)]
        public string ConsumerGroup { get; set; }

        [NameInMap("OffsetRest")]
        [Validation(Required=false)]
        public string OffsetRest { get; set; }

    }

}
