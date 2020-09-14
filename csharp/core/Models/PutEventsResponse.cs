// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * put event response
     */
    public class PutEventsResponse : TeaModel {
        [NameInMap("RequestId")]
        [Validation(Required=true)]
        public string RequestId { get; set; }

        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

        [NameInMap("FailedEntryCount")]
        [Validation(Required=false)]
        public int? FailedEntryCount { get; set; }

        [NameInMap("EntryList")]
        [Validation(Required=false)]
        public List<PutEventsResponseEntry> EntryList { get; set; }

    }

}
