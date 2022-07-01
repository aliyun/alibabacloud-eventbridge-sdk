// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The detail of SourceScheduledEventParameters
 */
public class SourceScheduledEventParameters extends TeaModel {
    @NameInMap("Schedule")
    @Validation(required = true)
    public String schedule;

    @NameInMap("TimeZone")
    @Validation(required = true)
    public String timeZone;

    @NameInMap("UserData")
    public java.util.Map<String, String> userData;

    public static SourceScheduledEventParameters build(java.util.Map<String, ?> map) {
        SourceScheduledEventParameters self = new SourceScheduledEventParameters();
        return TeaModel.build(map, self);
    }

    public SourceScheduledEventParameters setSchedule(String schedule) {
        this.schedule = schedule;
        return this;
    }
    public String getSchedule() {
        return this.schedule;
    }

    public SourceScheduledEventParameters setTimeZone(String timeZone) {
        this.timeZone = timeZone;
        return this;
    }
    public String getTimeZone() {
        return this.timeZone;
    }

    public SourceScheduledEventParameters setUserData(java.util.Map<String, String> userData) {
        this.userData = userData;
        return this;
    }
    public java.util.Map<String, String> getUserData() {
        return this.userData;
    }

}
