// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of ConcurrentConfig
 */
public class ConcurrentConfig extends TeaModel {
    @NameInMap("Concurrency")
    @Validation(required = true)
    public Integer concurrency;

    public static ConcurrentConfig build(java.util.Map<String, ?> map) {
        ConcurrentConfig self = new ConcurrentConfig();
        return TeaModel.build(map, self);
    }

    public ConcurrentConfig setConcurrency(Integer concurrency) {
        this.concurrency = concurrency;
        return this;
    }
    public Integer getConcurrency() {
        return this.concurrency;
    }

}
