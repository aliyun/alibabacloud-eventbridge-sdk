// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    public class QueryEventTracesResponse : TeaModel {
        [NameInMap("EventTraceList")]
        [Validation(Required=true)]
        public List<EventTrace> EventTraceList { get; set; }

    }

}
