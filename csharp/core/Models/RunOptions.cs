// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The config of RunOptions
     */
    public class RunOptions : TeaModel {
        [NameInMap("MaximumTasks")]
        [Validation(Required=false)]
        public int? MaximumTasks { get; set; }

        [NameInMap("RetryStrategy")]
        [Validation(Required=false)]
        public RetryStrategy RetryStrategy { get; set; }

        [NameInMap("ErrorsTolerance")]
        [Validation(Required=false)]
        public string ErrorsTolerance { get; set; }

        [NameInMap("DeadLetterQueue")]
        [Validation(Required=false)]
        public DeadLetterQueue DeadLetterQueue { get; set; }

    }

}
