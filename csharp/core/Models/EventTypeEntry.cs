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
    public class EventTypeEntry : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=true)]
        public string Name { get; set; }

        [NameInMap("EventSourceName")]
        [Validation(Required=true)]
        public string EventSourceName { get; set; }

        [NameInMap("ShortName")]
        [Validation(Required=true)]
        public string ShortName { get; set; }

        [NameInMap("GroupName")]
        [Validation(Required=true)]
        public string GroupName { get; set; }

    }

}
