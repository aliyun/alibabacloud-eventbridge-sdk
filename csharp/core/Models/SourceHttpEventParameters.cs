// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The detail of SourceHttpEventParameters
     */
    public class SourceHttpEventParameters : TeaModel {
        [NameInMap("Type")]
        [Validation(Required=true)]
        public string Type { get; set; }

        [NameInMap("Method")]
        [Validation(Required=true)]
        public List<string> Method { get; set; }

        [NameInMap("SecurityConfig")]
        [Validation(Required=true)]
        public string SecurityConfig { get; set; }

        [NameInMap("Ip")]
        [Validation(Required=false)]
        public List<string> Ip { get; set; }

        [NameInMap("Referer")]
        [Validation(Required=false)]
        public List<string> Referer { get; set; }

    }

}
