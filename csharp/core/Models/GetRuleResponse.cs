// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The response of Get EventBus
     */
    public class GetRuleResponse : TeaModel {
        [NameInMap("RequestId")]
        [Validation(Required=true)]
        public string RequestId { get; set; }

        [NameInMap("ResourceOwnerAccountId")]
        [Validation(Required=true)]
        public string ResourceOwnerAccountId { get; set; }

        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("RuleARN")]
        [Validation(Required=true)]
        public string RuleARN { get; set; }

        [NameInMap("RuleName")]
        [Validation(Required=true)]
        public string RuleName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=true)]
        public string Description { get; set; }

        [NameInMap("Status")]
        [Validation(Required=true)]
        public string Status { get; set; }

        [NameInMap("FilterPattern")]
        [Validation(Required=true)]
        public string FilterPattern { get; set; }

        [NameInMap("Targets")]
        [Validation(Required=true)]
        public List<TargetEntry> Targets { get; set; }

        [NameInMap("Ctime")]
        [Validation(Required=true)]
        public long? Ctime { get; set; }

        [NameInMap("Mtime")]
        [Validation(Required=true)]
        public long? Mtime { get; set; }

    }

}
