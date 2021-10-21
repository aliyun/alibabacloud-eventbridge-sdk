// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of listEventStreamingMetrics
     */
    public class ListEventStreamingMetricsRequest : TeaModel {
        [NameInMap("EventStreamingNames")]
        [Validation(Required=false)]
        public List<string> EventStreamingNames { get; set; }

    }

}
