// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkFcParameters
     */
    public class SinkFcParameters : TeaModel {
        [NameInMap("ServiceName")]
        [Validation(Required=false)]
        public TargetParameter ServiceName { get; set; }

        [NameInMap("FunctionName")]
        [Validation(Required=false)]
        public TargetParameter FunctionName { get; set; }

        [NameInMap("Body")]
        [Validation(Required=false)]
        public TargetParameter Body { get; set; }

        [NameInMap("Qualifier")]
        [Validation(Required=false)]
        public TargetParameter Qualifier { get; set; }

        [NameInMap("InvocationType")]
        [Validation(Required=false)]
        public TargetParameter InvocationType { get; set; }

        [NameInMap("BatchSize")]
        [Validation(Required=false)]
        public TargetParameter BatchSize { get; set; }

        [NameInMap("ExtendConfig")]
        [Validation(Required=false)]
        public Dictionary<string, object> ExtendConfig { get; set; }

    }

}
