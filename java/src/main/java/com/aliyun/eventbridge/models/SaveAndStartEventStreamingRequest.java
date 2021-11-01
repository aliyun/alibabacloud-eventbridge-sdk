// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The request of Save and start event streaming procss
 */
public class SaveAndStartEventStreamingRequest extends TeaModel {
    @NameInMap("Name")
    @Validation(required = true)
    public String name;

    @NameInMap("Description")
    public String description;

    @NameInMap("EBEventSourceEntry")
    public String EBEventSourceEntry;

    @NameInMap("FilterPattern")
    public String filterPattern;

    @NameInMap("Targets")
    @Validation(required = true)
    public java.util.List<TargetEntry> targets;

    public static SaveAndStartEventStreamingRequest build(java.util.Map<String, ?> map) {
        SaveAndStartEventStreamingRequest self = new SaveAndStartEventStreamingRequest();
        return TeaModel.build(map, self);
    }

    public SaveAndStartEventStreamingRequest setName(String name) {
        this.name = name;
        return this;
    }
    public String getName() {
        return this.name;
    }

    public SaveAndStartEventStreamingRequest setDescription(String description) {
        this.description = description;
        return this;
    }
    public String getDescription() {
        return this.description;
    }

    public SaveAndStartEventStreamingRequest setEBEventSourceEntry(String EBEventSourceEntry) {
        this.EBEventSourceEntry = EBEventSourceEntry;
        return this;
    }
    public String getEBEventSourceEntry() {
        return this.EBEventSourceEntry;
    }

    public SaveAndStartEventStreamingRequest setFilterPattern(String filterPattern) {
        this.filterPattern = filterPattern;
        return this;
    }
    public String getFilterPattern() {
        return this.filterPattern;
    }

    public SaveAndStartEventStreamingRequest setTargets(java.util.List<TargetEntry> targets) {
        this.targets = targets;
        return this;
    }
    public java.util.List<TargetEntry> getTargets() {
        return this.targets;
    }

}
