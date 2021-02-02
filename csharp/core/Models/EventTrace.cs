// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    public class EventTrace : TeaModel {
        [NameInMap("ResourceOwnerId")]
        [Validation(Required=true)]
        public string ResourceOwnerId { get; set; }

        [NameInMap("Action")]
        [Validation(Required=true)]
        public string Action { get; set; }

        [NameInMap("EventId")]
        [Validation(Required=true)]
        public string EventId { get; set; }

        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("ActionTime")]
        [Validation(Required=true)]
        public string ActionTime { get; set; }

    }

}
