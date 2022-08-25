// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

public class EventTrace extends TeaModel {
    @NameInMap("ResourceOwnerId")
    @Validation(required = true)
    public String resourceOwnerId;

    @NameInMap("Action")
    @Validation(required = true)
    public String action;

    @NameInMap("EventId")
    @Validation(required = true)
    public String eventId;

    @NameInMap("EventBusName")
    @Validation(required = true)
    public String eventBusName;

    @NameInMap("ActionTime")
    @Validation(required = true)
    public String actionTime;

    @NameInMap("EventSource")
    @Validation(required = true)
    public String eventSource;

    @NameInMap("ReceivedTime")
    @Validation(required = true)
    public Long receivedTime;

    @NameInMap("RuleName")
    @Validation(required = true)
    public String ruleName;

    @NameInMap("RuleMatchingTime")
    @Validation(required = true)
    public Long ruleMatchingTime;

    @NameInMap("NotifyLatency")
    @Validation(required = true)
    public Long notifyLatency;

    @NameInMap("NotifyTime")
    @Validation(required = true)
    public Long notifyTime;

    @NameInMap("Endpoint")
    @Validation(required = true)
    public String endpoint;

    @NameInMap("NotifyStatus")
    @Validation(required = true)
    public String notifyStatus;

    public static EventTrace build(java.util.Map<String, ?> map) {
        EventTrace self = new EventTrace();
        return TeaModel.build(map, self);
    }

    public EventTrace setResourceOwnerId(String resourceOwnerId) {
        this.resourceOwnerId = resourceOwnerId;
        return this;
    }
    public String getResourceOwnerId() {
        return this.resourceOwnerId;
    }

    public EventTrace setAction(String action) {
        this.action = action;
        return this;
    }
    public String getAction() {
        return this.action;
    }

    public EventTrace setEventId(String eventId) {
        this.eventId = eventId;
        return this;
    }
    public String getEventId() {
        return this.eventId;
    }

    public EventTrace setEventBusName(String eventBusName) {
        this.eventBusName = eventBusName;
        return this;
    }
    public String getEventBusName() {
        return this.eventBusName;
    }

    public EventTrace setActionTime(String actionTime) {
        this.actionTime = actionTime;
        return this;
    }
    public String getActionTime() {
        return this.actionTime;
    }

    public EventTrace setEventSource(String eventSource) {
        this.eventSource = eventSource;
        return this;
    }
    public String getEventSource() {
        return this.eventSource;
    }

    public EventTrace setReceivedTime(Long receivedTime) {
        this.receivedTime = receivedTime;
        return this;
    }
    public Long getReceivedTime() {
        return this.receivedTime;
    }

    public EventTrace setRuleName(String ruleName) {
        this.ruleName = ruleName;
        return this;
    }
    public String getRuleName() {
        return this.ruleName;
    }

    public EventTrace setRuleMatchingTime(Long ruleMatchingTime) {
        this.ruleMatchingTime = ruleMatchingTime;
        return this;
    }
    public Long getRuleMatchingTime() {
        return this.ruleMatchingTime;
    }

    public EventTrace setNotifyLatency(Long notifyLatency) {
        this.notifyLatency = notifyLatency;
        return this;
    }
    public Long getNotifyLatency() {
        return this.notifyLatency;
    }

    public EventTrace setNotifyTime(Long notifyTime) {
        this.notifyTime = notifyTime;
        return this;
    }
    public Long getNotifyTime() {
        return this.notifyTime;
    }

    public EventTrace setEndpoint(String endpoint) {
        this.endpoint = endpoint;
        return this;
    }
    public String getEndpoint() {
        return this.endpoint;
    }

    public EventTrace setNotifyStatus(String notifyStatus) {
        this.notifyStatus = notifyStatus;
        return this;
    }
    public String getNotifyStatus() {
        return this.notifyStatus;
    }

}
