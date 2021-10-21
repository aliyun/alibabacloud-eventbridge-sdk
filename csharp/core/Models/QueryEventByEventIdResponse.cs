// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The response of query event by id
     */
    public class QueryEventByEventIdResponse : TeaModel {
        [NameInMap("RequestId")]
        [Validation(Required=true)]
        public string RequestId { get; set; }

        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

        [NameInMap("TracedEvents")]
        [Validation(Required=false)]
        public List<TracedEvent> TracedEvents { get; set; }

        [NameInMap("NextToken")]
        [Validation(Required=false)]
        public string NextToken { get; set; }

        [NameInMap("Total")]
        [Validation(Required=false)]
        public int? Total { get; set; }

    }

}
