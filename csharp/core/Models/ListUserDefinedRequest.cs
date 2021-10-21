// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of listUserDefinedEventSources
     */
    public class ListUserDefinedRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=false)]
        public string EventBusName { get; set; }

        [NameInMap("NextToken")]
        [Validation(Required=false)]
        public string NextToken { get; set; }

        [NameInMap("Limit")]
        [Validation(Required=false)]
        public int? Limit { get; set; }

    }

}
