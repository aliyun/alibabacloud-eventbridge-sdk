// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The request of update the event source
     */
    public class UpdateEventSourceRequest : TeaModel {
        [NameInMap("EventSourceName")]
        [Validation(Required=true, MaxLength=127)]
        public string EventSourceName { get; set; }

        [NameInMap("Description")]
        [Validation(Required=false)]
        public string Description { get; set; }

        [NameInMap("EventBusName")]
        [Validation(Required=true)]
        public string EventBusName { get; set; }

        [NameInMap("SourceRabbitMQParameters")]
        [Validation(Required=false)]
        public SourceRabbitMQParameters SourceRabbitMQParameters { get; set; }

        [NameInMap("SourceMNSParameters")]
        [Validation(Required=false)]
        public SourceMNSParameters SourceMNSParameters { get; set; }

        [NameInMap("SourceRocketMQParameters")]
        [Validation(Required=false)]
        public SourceRocketMQParameters SourceRocketMQParameters { get; set; }

        [NameInMap("SourceScheduledEventParameters")]
        [Validation(Required=false)]
        public SourceScheduledEventParameters SourceScheduledEventParameters { get; set; }

        [NameInMap("SourceHttpEventParameters")]
        [Validation(Required=false)]
        public SourceHttpEventParameters SourceHttpEventParameters { get; set; }

    }

}
