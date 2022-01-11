// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The detail of SourceScheduledEventParameters
 */
public class SourceScheduledEventParameters extends TeaModel {
    @NameInMap("Schedule")
    @Validation(required = true)
    public String Schedule;

    @NameInMap("TimeZone")
    @Validation(required = true)
    public String TimeZone;

    @NameInMap("UserData")
    public java.util.Map<String, ?> UserData;

    public static SourceScheduledEventParameters build(java.util.Map<String, ?> map) {
        SourceScheduledEventParameters self = new SourceScheduledEventParameters();
        return TeaModel.build(map, self);
    }

    public SourceScheduledEventParameters setSchedule(String Schedule) {
        this.Schedule = Schedule;
        return this;
    }
    public String getSchedule() {
        return this.Schedule;
    }

    public SourceScheduledEventParameters setTimeZone(String TimeZone) {
        this.TimeZone = TimeZone;
        return this;
    }
    public String getTimeZone() {
        return this.TimeZone;
    }

    public SourceScheduledEventParameters setUserData(java.util.Map<String, ?> UserData) {
        this.UserData = UserData;
        return this;
    }
    public java.util.Map<String, ?> getUserData() {
        return this.UserData;
    }

}
