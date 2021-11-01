// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The event source entry
     */
    public class EBAliyunOfficialEventSourceEntry : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=true)]
        public string Name { get; set; }

        [NameInMap("Description")]
        [Validation(Required=true)]
        public string Description { get; set; }

        [NameInMap("ARN")]
        [Validation(Required=true)]
        public string Arn { get; set; }

        [NameInMap("Status")]
        [Validation(Required=true)]
        public string Status { get; set; }

        [NameInMap("Ctime")]
        [Validation(Required=true)]
        public long? Ctime { get; set; }

        [NameInMap("AttachedBuses")]
        [Validation(Required=true)]
        public List<string> AttachedBuses { get; set; }

        [NameInMap("EventTypes")]
        [Validation(Required=true)]
        public List<EventTypeEntry> EventTypes { get; set; }

    }

}
