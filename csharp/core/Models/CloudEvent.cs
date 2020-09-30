// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections.Generic;
using System.IO;

using Tea;

namespace AlibabaCloud.SDK.EventBridge.Models
{
    /**
     * Cloud Event Stanard Froamt
     */
    public class CloudEvent : TeaModel {
        [NameInMap("id")]
        [Validation(Required=true)]
        public string Id { get; set; }

        [NameInMap("source")]
        [Validation(Required=true, MaxLength=128)]
        public string Source { get; set; }

        [NameInMap("specversion")]
        [Validation(Required=false)]
        public string Specversion { get; set; }

        [NameInMap("type")]
        [Validation(Required=true, MaxLength=64)]
        public string Type { get; set; }

        [NameInMap("datacontenttype")]
        [Validation(Required=false)]
        public string Datacontenttype { get; set; }

        [NameInMap("dataschema")]
        [Validation(Required=false)]
        public string Dataschema { get; set; }

        [NameInMap("subject")]
        [Validation(Required=false)]
        public string Subject { get; set; }

        [NameInMap("time")]
        [Validation(Required=false, MaxLength=64, Pattern="[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*")]
        public string Time { get; set; }

        [NameInMap("extensions")]
        [Validation(Required=true)]
        public Dictionary<string, object> Extensions { get; set; }

        [NameInMap("data")]
        [Validation(Required=false)]
        public byte[] Data { get; set; }

    }

}
