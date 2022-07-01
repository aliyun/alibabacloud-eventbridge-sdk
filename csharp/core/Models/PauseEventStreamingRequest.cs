// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of PauseEventStreaming
     */
    public class PauseEventStreamingRequest : TeaModel {
        [NameInMap("EventStreamingName")]
        [Validation(Required=true)]
        public string EventStreamingName { get; set; }

    }

}
