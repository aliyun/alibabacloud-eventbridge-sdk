// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of deleteEventSource
     */
    public class DeleteEventSourceRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=false)]
        public string EventBusName { get; set; }

        [NameInMap("EventSourceName")]
        [Validation(Required=true)]
        public string EventSourceName { get; set; }

    }

}
