// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of EBEventStreamingEntry
     */
    public class EBEventStreamingEntry : TeaModel {
        [NameInMap("EventStreamingName")]
        [Validation(Required=false)]
        public string EventStreamingName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=false)]
        public string Description { get; set; }

        [NameInMap("Source")]
        [Validation(Required=false)]
        public Source Source { get; set; }

        [NameInMap("FilterPattern")]
        [Validation(Required=false)]
        public string FilterPattern { get; set; }

        [NameInMap("Sink")]
        [Validation(Required=false)]
        public Sink Sink { get; set; }

        [NameInMap("RunOptions")]
        [Validation(Required=false)]
        public RunOptions RunOptions { get; set; }

        [NameInMap("Tag")]
        [Validation(Required=false)]
        public string Tag { get; set; }

        [NameInMap("Status")]
        [Validation(Required=false)]
        public string Status { get; set; }

    }

}
