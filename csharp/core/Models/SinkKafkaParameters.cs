// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkKafkaParameters
     */
    public class SinkKafkaParameters : TeaModel {
        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public TargetParameter InstanceId { get; set; }

        [NameInMap("Topic")]
        [Validation(Required=false)]
        public TargetParameter Topic { get; set; }

        [NameInMap("Acks")]
        [Validation(Required=false)]
        public TargetParameter Acks { get; set; }

        [NameInMap("Key")]
        [Validation(Required=false)]
        public TargetParameter Key { get; set; }

        [NameInMap("Value")]
        [Validation(Required=false)]
        public TargetParameter Value { get; set; }

        [NameInMap("ExtendConfig")]
        [Validation(Required=false)]
        public Dictionary<string, object> ExtendConfig { get; set; }

        [NameInMap("SaslUser")]
        [Validation(Required=false)]
        public TargetParameter SaslUser { get; set; }

    }

}
