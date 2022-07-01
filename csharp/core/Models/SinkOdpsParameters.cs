// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of SinkOdpsParameters
     */
    public class SinkOdpsParameters : TeaModel {
        [NameInMap("Project")]
        [Validation(Required=false)]
        public TargetParameter Project { get; set; }

        [NameInMap("Table")]
        [Validation(Required=false)]
        public TargetParameter Table { get; set; }

        [NameInMap("RoleName")]
        [Validation(Required=false)]
        public TargetParameter RoleName { get; set; }

        [NameInMap("Format")]
        [Validation(Required=false)]
        public TargetParameter Format { get; set; }

        [NameInMap("Mode")]
        [Validation(Required=false)]
        public TargetParameter Mode { get; set; }

        [NameInMap("PartitionWindowType")]
        [Validation(Required=false)]
        public TargetParameter PartitionWindowType { get; set; }

        [NameInMap("TimeZone")]
        [Validation(Required=false)]
        public TargetParameter TimeZone { get; set; }

        [NameInMap("UseStreaming")]
        [Validation(Required=false)]
        public TargetParameter UseStreaming { get; set; }

        [NameInMap("ExtendConfig")]
        [Validation(Required=false)]
        public Dictionary<string, object> ExtendConfig { get; set; }

    }

}
