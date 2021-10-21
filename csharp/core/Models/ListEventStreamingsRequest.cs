// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of search EventStreaming
     */
    public class ListEventStreamingsRequest : TeaModel {
        [NameInMap("NamePrefix")]
        [Validation(Required=false)]
        public string NamePrefix { get; set; }

        [NameInMap("SourceType")]
        [Validation(Required=false)]
        public string SourceType { get; set; }

        [NameInMap("SinkType")]
        [Validation(Required=false)]
        public string SinkType { get; set; }

        [NameInMap("Limit")]
        [Validation(Required=false)]
        public int? Limit { get; set; }

        [NameInMap("NextToken")]
        [Validation(Required=false)]
        public string NextToken { get; set; }

        [NameInMap("Tag")]
        [Validation(Required=false)]
        public string Tag { get; set; }

    }

}
