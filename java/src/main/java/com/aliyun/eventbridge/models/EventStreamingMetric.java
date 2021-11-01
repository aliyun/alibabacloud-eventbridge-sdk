// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The metrics of event streaming
 */
public class EventStreamingMetric extends TeaModel {
    @NameInMap("Name")
    public String name;

    @NameInMap("TPS")
    public Double tps;

    @NameInMap("DelayTime")
    public Long delayTime;

    @NameInMap("DiffOffset")
    public Long diffOffset;

    @NameInMap("LastDateSyncTime")
    public Long lastDateSyncTime;

    @NameInMap("LastHeartBeat")
    public Long lastHeartBeat;

    @NameInMap("Status")
    public String status;

    public static EventStreamingMetric build(java.util.Map<String, ?> map) {
        EventStreamingMetric self = new EventStreamingMetric();
        return TeaModel.build(map, self);
    }

    public EventStreamingMetric setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public EventStreamingMetric setTps(Double tps) {
        this.tps = tps;
        return this;
    }
    public Double getTps() {
        return this.tps;
    }

    public EventStreamingMetric setDelayTime(Long delayTime) {
        this.delayTime = delayTime;
        return this;
    }
    public Long getDelayTime() {
        return this.delayTime;
    }

    public EventStreamingMetric setDiffOffset(Long diffOffset) {
        this.diffOffset = diffOffset;
        return this;
    }
    public Long getDiffOffset() {
        return this.diffOffset;
    }

    public EventStreamingMetric setLastDateSyncTime(Long lastDateSyncTime) {
        this.lastDateSyncTime = lastDateSyncTime;
        return this;
    }
    public Long getLastDateSyncTime() {
        return this.lastDateSyncTime;
    }

    public EventStreamingMetric setLastHeartBeat(Long lastHeartBeat) {
        this.lastHeartBeat = lastHeartBeat;
        return this;
    }
    public Long getLastHeartBeat() {
        return this.lastHeartBeat;
    }

    public EventStreamingMetric setStatus(String status) {
        this.status = status;
        return this;
    }
    public String getStatus() {
        return this.status;
    }

}
