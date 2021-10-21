// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The response of create event streaming
     */
    public class GetEventStreamingResponse : TeaModel {
        [NameInMap("RequestId")]
        [Validation(Required=true)]
        public string RequestId { get; set; }

        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

        [NameInMap("EventStreamingName")]
        [Validation(Required=true)]
        public string EventStreamingName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=true)]
        public string Description { get; set; }

        [NameInMap("Source")]
        [Validation(Required=true)]
        public Source Source { get; set; }

        [NameInMap("FilterPattern")]
        [Validation(Required=true)]
        public string FilterPattern { get; set; }

        [NameInMap("Sink")]
        [Validation(Required=true)]
        public Sink Sink { get; set; }

        [NameInMap("RunOptions")]
        [Validation(Required=true)]
        public RunOptions RunOptions { get; set; }

        [NameInMap("Tag")]
        [Validation(Required=true)]
        public string Tag { get; set; }

        [NameInMap("Status")]
        [Validation(Required=true)]
        public string Status { get; set; }

    }

}
