// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The response of testEventPattern
 */
public class TestEventPatternResponse extends TeaModel {
    @NameInMap("RequestId")
    public String requestId;

    @NameInMap("ResourceOwnerAccountId")
    public String resourceOwnerAccountId;

    @NameInMap("Result")
    @Validation(required = true)
    public Boolean result;

    public static TestEventPatternResponse build(java.util.Map<String, ?> map) {
        TestEventPatternResponse self = new TestEventPatternResponse();
        return TeaModel.build(map, self);
    }

    public TestEventPatternResponse setRequestId(String requestId) {
        this.requestId = requestId;
        return this;
    }

    public String getRequestId() {
        return this.requestId;
    }

    public TestEventPatternResponse setResourceOwnerAccountId(String resourceOwnerAccountId) {
        this.resourceOwnerAccountId = resourceOwnerAccountId;
        return this;
    }

    public String getResourceOwnerAccountId() {
        return this.resourceOwnerAccountId;
    }

    public TestEventPatternResponse setResult(Boolean result) {
        this.result = result;
        return this;
    }

    public Boolean getResult() {
        return this.result;
    }

}
