// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceDTSParameters
     */
    public class SourceDTSParameters : TeaModel {
        [NameInMap("RegionId")]
        [Validation(Required=false)]
        public string RegionId { get; set; }

        [NameInMap("BrokerUrl")]
        [Validation(Required=true)]
        public string BrokerUrl { get; set; }

        [NameInMap("Topic")]
        [Validation(Required=true)]
        public string Topic { get; set; }

        [NameInMap("Sid")]
        [Validation(Required=true)]
        public string Sid { get; set; }

        [NameInMap("Username")]
        [Validation(Required=true)]
        public string Username { get; set; }

        [NameInMap("Password")]
        [Validation(Required=true)]
        public string Password { get; set; }

        [NameInMap("InitCheckPoint")]
        [Validation(Required=true)]
        public int? InitCheckPoint { get; set; }

        [NameInMap("TaskId")]
        [Validation(Required=true)]
        public string TaskId { get; set; }

    }

}
