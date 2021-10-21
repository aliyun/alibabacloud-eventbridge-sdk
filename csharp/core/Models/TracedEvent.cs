// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The traced event
     */
    public class TracedEvent : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("EventId")]
        [Validation(Required=true)]
        public string EventId { get; set; }

        [NameInMap("EventSource")]
        [Validation(Required=true)]
        public string EventSource { get; set; }

        [NameInMap("EventReceivedTime")]
        [Validation(Required=true)]
        public long? EventReceivedTime { get; set; }

    }

}
