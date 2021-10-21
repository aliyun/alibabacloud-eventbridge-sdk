// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The response of get the detail of EventBus
     */
    public class GetEventBusResponse : TeaModel {
        [NameInMap("RequestId")]
        [Validation(Required=true)]
        public string RequestId { get; set; }

        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

        [NameInMap("EventBusARN")]
        [Validation(Required=true)]
        public string EventBusARN { get; set; }

        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=true)]
        public string Description { get; set; }

        [NameInMap("CreateTimestamp")]
        [Validation(Required=true)]
        public long? CreateTimestamp { get; set; }

    }

}
