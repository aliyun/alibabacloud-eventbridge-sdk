// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The request of testEventPattern
 */
public class TestEventPatternRequest extends TeaModel {
    @NameInMap("Event")
    @Validation(required = true, maxLength = 2048)
    public String event;

    @NameInMap("EventPattern")
    @Validation(required = true, maxLength = 2048)
    public String eventPattern;

    public static TestEventPatternRequest build(java.util.Map<String, ?> map) {
        TestEventPatternRequest self = new TestEventPatternRequest();
        return TeaModel.build(map, self);
    }

    public TestEventPatternRequest setEvent(String event) {
        this.event = event;
        return this;
    }

    public String getEvent() {
        return this.event;
    }

    public TestEventPatternRequest setEventPattern(String eventPattern) {
        this.eventPattern = eventPattern;
        return this;
    }

    public String getEventPattern() {
        return this.eventPattern;
    }

}
