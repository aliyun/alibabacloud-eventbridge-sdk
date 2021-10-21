// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The eventsource of event streaming
     */
    public class EBEventSourceEntry : TeaModel {
        [NameInMap("Name")]
        [Validation(Required=true)]
        public string Name { get; set; }

        [NameInMap("IsNew")]
        [Validation(Required=true)]
        public bool? New { get; set; }

        [NameInMap("Description")]
        [Validation(Required=true)]
        public string Description { get; set; }

        [NameInMap("ExternalSourceType")]
        [Validation(Required=true)]
        public string ExternalSourceType { get; set; }

        [NameInMap("ExternalSourceConfig")]
        [Validation(Required=true)]
        public Dictionary<string, object> ExternalSourceConfig { get; set; }

    }

}
