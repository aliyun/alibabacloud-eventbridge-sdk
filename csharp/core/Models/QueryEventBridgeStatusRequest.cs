// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of query EventBridge status for a given user
     */
    public class QueryEventBridgeStatusRequest : TeaModel {
        /// <summary>
        /// the accountId of resource owner
        /// </summary>
        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

    }

}
