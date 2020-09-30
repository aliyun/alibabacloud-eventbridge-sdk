// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of TargetEntry
     */
    public class TargetEntry : TeaModel {
        [NameInMap("Id")]
        [Validation(Required=true)]
        public string Id { get; set; }

        [NameInMap("Type")]
        [Validation(Required=true)]
        public string Type { get; set; }

        [NameInMap("Endpoint")]
        [Validation(Required=true)]
        public string Endpoint { get; set; }

        [NameInMap("PushRetryStrategy")]
        [Validation(Required=false)]
        public string PushRetryStrategy { get; set; }

        [NameInMap("ParamList")]
        [Validation(Required=false)]
        public List<EBTargetParam> ParamList { get; set; }

    }

}
