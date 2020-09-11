// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.NameInMap;
import com.aliyun.tea.TeaModel;
import com.aliyun.tea.Validation;

/**
 * The result detail of target operation
 */
public class TargetResultEntry extends TeaModel {
    @NameInMap("ErrorCode")
    @Validation(required = true)
    public String errorCode;

    @NameInMap("ErrorMessage")
    @Validation(required = true)
    public String errorMessage;

    @NameInMap("EntryId")
    @Validation(required = true)
    public String entryId;

    public static TargetResultEntry build(java.util.Map<String, ?> map) {
        TargetResultEntry self = new TargetResultEntry();
        return TeaModel.build(map, self);
    }

    public TargetResultEntry setErrorCode(String errorCode) {
        this.errorCode = errorCode;
        return this;
    }

    public String getErrorCode() {
        return this.errorCode;
    }

    public TargetResultEntry setErrorMessage(String errorMessage) {
        this.errorMessage = errorMessage;
        return this;
    }

    public String getErrorMessage() {
        return this.errorMessage;
    }

    public TargetResultEntry setEntryId(String entryId) {
        this.entryId = entryId;
        return this;
    }

    public String getEntryId() {
        return this.entryId;
    }

}
