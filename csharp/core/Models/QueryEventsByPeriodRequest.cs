// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of query the event traces by the event period
     */
    public class QueryEventsByPeriodRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("EventSource")]
        [Validation(Required=false)]
        public string EventSource { get; set; }

        [NameInMap("StartTime")]
        [Validation(Required=true)]
        public long? StartTime { get; set; }

        [NameInMap("EndTime")]
        [Validation(Required=true)]
        public long? EndTime { get; set; }

        [NameInMap("Limit")]
        [Validation(Required=true)]
        public int? Limit { get; set; }

        [NameInMap("NextToken")]
        [Validation(Required=true)]
        public int? NextToken { get; set; }

    }

}
