// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of delete event streaming
     */
    public class DeleteEventStreamingRequest : TeaModel {
        [NameInMap("EventStreamingName")]
        [Validation(Required=true)]
        public string EventStreamingName { get; set; }

    }

}
