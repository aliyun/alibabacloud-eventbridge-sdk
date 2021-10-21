// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkMNSParameters
     */
    public class SinkMNSParameters : TeaModel {
        [NameInMap("QueueName")]
        [Validation(Required=false)]
        public TargetParameter QueueName { get; set; }

        [NameInMap("Body")]
        [Validation(Required=false)]
        public TargetParameter Body { get; set; }

    }

}
