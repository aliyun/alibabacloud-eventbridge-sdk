// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of query the event by id
     */
    public class QueryEventByEventIdRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=false)]
        public string EventBusName { get; set; }

        [NameInMap("EventSource")]
        [Validation(Required=false)]
        public string EventSource { get; set; }

        [NameInMap("EventId")]
        [Validation(Required=false)]
        public string EventId { get; set; }

    }

}
