// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The metrics of event streaming
     */
    public class EventStreamingMetric : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=false)]
        public string Name { get; set; }

        [NameInMap("TPS")]
        [Validation(Required=false)]
        public double? Tps { get; set; }

        [NameInMap("DelayTime")]
        [Validation(Required=false)]
        public long? DelayTime { get; set; }

        [NameInMap("DiffOffset")]
        [Validation(Required=false)]
        public long? DiffOffset { get; set; }

        [NameInMap("LastDateSyncTime")]
        [Validation(Required=false)]
        public long? LastDateSyncTime { get; set; }

        [NameInMap("LastHeartBeat")]
        [Validation(Required=false)]
        public long? LastHeartBeat { get; set; }

        [NameInMap("Status")]
        [Validation(Required=false)]
        public string Status { get; set; }

    }

}
