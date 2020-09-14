// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of create an EventBus rule on Aliyun
     */
    public class CreateRuleRequest : TeaModel {
        [NameInMap("EventBusName")]
        [Validation(Required=true, MaxLength=127)]
        public string EventBusName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=false)]
        public string Description { get; set; }

        [NameInMap("RuleName")]
        [Validation(Required=true)]
        public string RuleName { get; set; }

        [NameInMap("Status")]
        [Validation(Required=false)]
        public string Status { get; set; }

        [NameInMap("FilterPattern")]
        [Validation(Required=false)]
        public string FilterPattern { get; set; }

        [NameInMap("Targets")]
        [Validation(Required=true)]
        public List<TargetEntry> Targets { get; set; }

    }

}
