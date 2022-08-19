// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The config of BatchWindow
 */
public class BatchWindow extends TeaModel {
    @NameInMap("CountBasedWindow")
    public Integer countBasedWindow;

    @NameInMap("TimeBasedWindow")
    public Integer timeBasedWindow;

    public static BatchWindow build(java.util.Map<String, ?> map) {
        BatchWindow self = new BatchWindow();
        return TeaModel.build(map, self);
    }

    public BatchWindow setCountBasedWindow(Integer countBasedWindow) {
        this.countBasedWindow = countBasedWindow;
        return this;
    }
    public Integer getCountBasedWindow() {
        return this.countBasedWindow;
    }

    public BatchWindow setTimeBasedWindow(Integer timeBasedWindow) {
        this.timeBasedWindow = timeBasedWindow;
        return this;
    }
    public Integer getTimeBasedWindow() {
        return this.timeBasedWindow;
    }

}
