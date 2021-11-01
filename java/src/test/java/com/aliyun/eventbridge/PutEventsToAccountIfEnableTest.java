package com.aliyun.eventbridge;

import java.net.URI;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.UUID;

import com.aliyun.eventbridge.models.CloudEvent;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.PutEventsResponse;
import com.aliyun.eventbridge.util.EventBuilder;
import com.aliyun.eventbridge.util.KVCache;
import com.google.gson.Gson;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

public class PutEventsToAccountIfEnableTest {

    private EventBridge client;

    @Before
    public void init() {
        Config config = new Config();
        config.setAccessKeyId("LTAI4G3Qaw8Mqso8tRav5L4r")
            .setAccessKeySecret("p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B")
            .setEndpoint("eventbridge.cn-hangzhou.aliyuncs.com");
        client = new EventBridgeClient(config);
    }

    @Test
    public void testPutEventsToAccountByCache() {
        int loopSize = 100;
        List<CloudEvent> cloudEventList = new ArrayList<>();
        cloudEventList.add(EventBuilder.builder()
            .withId(UUID.randomUUID()
                .toString())
            .withSource(URI.create("acs.jingluo"))
            .withType("aliyuncvc:MeetingEvent:MeetingStateEvent")
            .withSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .withJsonStringData("{ \"bus\":" + " \"demo\" }")
            .withTime(new Date())
            .withAliyunEventBus("jingluo")
            .build());
        //PutEventsResponse putEventsResponse = putEventsResponse = client.putEventsToAccountIfEnable("1186095474286448", cloudEventList);
        //System.out.println(new Gson().toJson(putEventsResponse));
    }
}
