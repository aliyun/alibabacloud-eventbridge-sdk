package com.aliyun.eventbridge;

import java.util.List;

import com.aliyun.eventbridge.base.EventBridgeUtil;
import com.aliyun.eventbridge.models.CloudEvent;
import com.google.common.collect.Lists;
import com.google.gson.Gson;
import junit.framework.TestCase;
import org.junit.Assert;
import org.junit.Test;

public class EventBridgeUtilTest extends TestCase {

    private final String JSON_OBJECT_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":{\"bus\":\"demo\"}}]";

    private final String JSON_ARRAY_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":[{\"bus\":\"demo\"},"
        + "{\"bus\":\"demo\"}]}]";

    private final String JSON_STRING_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":\"string\"}]";

    private final String JSON_NUMBER_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":100}]";

    private final String JSON_BOOLEAN_EVENT = "[{\"datacontenttype\":\"application/json\",\"data\":true}]";

    private final String BASE64_EVENT = "[{\"data_base64\":\"eyAiYnVzIjoiZGVtbyIgfQ\\u003d\\u003d\","
        + "\"datacontenttype\":\"application/octet-stream\"}]";

    @Test
    public void testJsonObjectSerialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/json")
            .setData(("{ \"bus\":\"demo\" }").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(JSON_OBJECT_EVENT, new Gson().toJson(object));
    }

    @Test
    public void testJsonArraySerialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/json")
            .setData(("[{\"bus\":\"demo\"},{\"bus\":\"demo\"}]").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(JSON_ARRAY_EVENT, new Gson().toJson(object));
    }

    @Test
    public void testJsonStringSerialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/json")
            .setData(("string").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(JSON_STRING_EVENT, new Gson().toJson(object));
    }

    @Test
    public void testJsonNumberSerialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/json")
            .setData(("100").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(JSON_NUMBER_EVENT, new Gson().toJson(object));
    }

    @Test
    public void testJsonBooleanSerialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/json")
            .setData(("true").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(JSON_BOOLEAN_EVENT, new Gson().toJson(object));
    }

    @Test
    public void testBase64Serialize() {
        CloudEvent cloudEvent = new CloudEvent();
        cloudEvent.setDatacontenttype("application/octet-stream")
            .setData(("{ \"bus\":\"demo\" }").getBytes());
        List<CloudEvent> cloudEventList = Lists.newArrayList(cloudEvent);
        Object object = EventBridgeUtil.serialize(cloudEventList);
        Assert.assertEquals(BASE64_EVENT, new Gson().toJson(object));
    }
}