// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkRocketMQParameters
     */
    public class SinkRocketMQParameters : TeaModel {
        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public TargetParameter InstanceId { get; set; }

        [NameInMap("Topic")]
        [Validation(Required=false)]
        public TargetParameter Topic { get; set; }

        [NameInMap("Body")]
        [Validation(Required=false)]
        public TargetParameter Body { get; set; }

        [NameInMap("Properties")]
        [Validation(Required=false)]
        public TargetParameter Properties { get; set; }

        [NameInMap("Keys")]
        [Validation(Required=false)]
        public TargetParameter Keys { get; set; }

        [NameInMap("Tags")]
        [Validation(Required=false)]
        public TargetParameter Tags { get; set; }

    }

}
