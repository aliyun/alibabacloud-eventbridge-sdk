// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceRocketMQParameters
     */
    public class SourceRocketMQParameters : TeaModel {
        [NameInMap("RegionId")]
        [Validation(Required=false)]
        public string RegionId { get; set; }

        [NameInMap("InstanceId")]
        [Validation(Required=false)]
        public string InstanceId { get; set; }

        [NameInMap("Topic")]
        [Validation(Required=false)]
        public string Topic { get; set; }

        [NameInMap("Tag")]
        [Validation(Required=false)]
        public string Tag { get; set; }

        [NameInMap("Timestamp")]
        [Validation(Required=false)]
        public int? Timestamp { get; set; }

        [NameInMap("Offset")]
        [Validation(Required=false)]
        public string Offset { get; set; }

        [NameInMap("GroupID")]
        [Validation(Required=true)]
        public string GroupID { get; set; }

    }

}
