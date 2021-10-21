// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of listAliyunOfficialEventSources
     */
    public class ListAliyunOfficialRequest : TeaModel {
        [NameInMap("NextToken")]
        [Validation(Required=false)]
        public string NextToken { get; set; }

        [NameInMap("Limit")]
        [Validation(Required=false)]
        public int? Limit { get; set; }

    }

}
