// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * The param of EBTargetParam
     */
    public class EBTargetParam : TeaModel {
        [NameInMap("ResourceKey")]
        [Validation(Required=true)]
        public string ResourceKey { get; set; }

        [NameInMap("Form")]
        [Validation(Required=true)]
        public string Form { get; set; }

        [NameInMap("Value")]
        [Validation(Required=false)]
        public string Value { get; set; }

        [NameInMap("Template")]
        [Validation(Required=false)]
        public string Template { get; set; }

    }

}
