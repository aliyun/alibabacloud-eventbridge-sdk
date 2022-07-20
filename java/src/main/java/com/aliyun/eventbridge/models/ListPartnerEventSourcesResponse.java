// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge.models;

import com.aliyun.tea.*;

/**
 * The response of listPartnerEventSources
 */
public class ListPartnerEventSourcesResponse extends TeaModel {
    @NameInMap("EventSources")
    public java.util.List<EBSaaSEventSourceEntry> eventSources;

    public static ListPartnerEventSourcesResponse build(java.util.Map<String, ?> map) {
        ListPartnerEventSourcesResponse self = new ListPartnerEventSourcesResponse();
        return TeaModel.build(map, self);
    }

    public ListPartnerEventSourcesResponse setEventSources(java.util.List<EBSaaSEventSourceEntry> eventSources) {
        this.eventSources = eventSources;
        return this;
    }
    public java.util.List<EBSaaSEventSourceEntry> getEventSources() {
        return this.eventSources;
    }

}
