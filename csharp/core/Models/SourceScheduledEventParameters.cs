// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceScheduledEventParameters
     */
    public class SourceScheduledEventParameters : TeaModel {
        [NameInMap("Schedule")]
        [Validation(Required=true)]
        public string Schedule { get; set; }

        [NameInMap("TimeZone")]
        [Validation(Required=true)]
        public string TimeZone { get; set; }

        [NameInMap("UserData")]
        [Validation(Required=false)]
        public Dictionary<string, string> UserData { get; set; }

    }

}
