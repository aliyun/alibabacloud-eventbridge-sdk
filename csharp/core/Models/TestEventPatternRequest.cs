// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of testEventPattern
     */
    public class TestEventPatternRequest : TeaModel {
        [NameInMap("Event")]
        [Validation(Required=true, MaxLength=2048)]
        public string Event { get; set; }

        [NameInMap("EventPattern")]
        [Validation(Required=true, MaxLength=2048)]
        public string EventPattern { get; set; }

    }

}
