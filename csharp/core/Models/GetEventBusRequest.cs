// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of get the detail of EventBus
     */
    public class GetEventBusRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

    }

}
