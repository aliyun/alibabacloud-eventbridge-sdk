// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of DeadLetterQueue
 */
public class DeadLetterQueue extends TeaModel {
    @NameInMap("Arn")
    public String arn;

    public static DeadLetterQueue build(java.util.Map<String, ?> map) {
        DeadLetterQueue self = new DeadLetterQueue();
        return TeaModel.build(map, self);
    }

    public DeadLetterQueue setArn(String arn) {
        this.arn = arn;
        return this;
    }
    public String getArn() {
        return this.arn;
    }

}
