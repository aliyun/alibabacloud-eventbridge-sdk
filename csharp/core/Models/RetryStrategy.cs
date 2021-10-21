// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of RetryStrategy
     */
    public class RetryStrategy : TeaModel {
        [NameInMap("PushRetryStrategy")]
        [Validation(Required=false)]
        public string PushRetryStrategy { get; set; }

        [NameInMap("MaximumEventAgeInSeconds")]
        [Validation(Required=false)]
        public int? MaximumEventAgeInSeconds { get; set; }

        [NameInMap("MaximumRetryAttempts")]
        [Validation(Required=false)]
        public int? MaximumRetryAttempts { get; set; }

    }

}
