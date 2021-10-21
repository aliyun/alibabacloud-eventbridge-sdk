// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of Save and start event streaming procss
     */
    public class SaveAndStartEventStreamingRequest : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=true)]
        public string Name { get; set; }

        [NameInMap("Description")]
        [Validation(Required=false)]
        public string Description { get; set; }

        [NameInMap("EBEventSourceEntry")]
        [Validation(Required=false)]
        public string EBEventSourceEntry { get; set; }

        [NameInMap("FilterPattern")]
        [Validation(Required=false)]
        public string FilterPattern { get; set; }

        [NameInMap("Targets")]
        [Validation(Required=true)]
        public List<TargetEntry> Targets { get; set; }

    }

}
