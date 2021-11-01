package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.CloudEvent;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.PutEventsResponse;
import com.aliyun.eventbridge.util.EventBuilder;
import com.google.gson.Gson;
import org.junit.Before;
import org.junit.Test;

import java.net.URI;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.UUID;

public class PutEventsToAccountSTSTest {

    private EventBridge client;

    @Before
    public void init() {
        Config config = new Config();
        config.setAccessKeyId(System.getenv("accessId"))
                .setAccessKeySecret(System.getenv("accessKey"))
                .setEndpoint(System.getenv("endpoint"));
        client = new EventBridgeClient(config);
    }

    @Test
    public void testPutEventsToAccountByCache() {
        List<CloudEvent> cloudEventList = new ArrayList<>();
        cloudEventList.add(EventBuilder.builder()
            .withId(UUID.randomUUID()
                .toString())
            .withSource(URI.create("acs.aliyuncvc"))
            .withType("aliyuncvc:MeetingEvent:MeetingStateEvent")
            .withSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .withJsonStringData("{ \"bus\":" + " \"demo\" }")
            .withTime(new Date())
            .withAliyunEventBus("default")
            .build());
            PutEventsResponse putEventsResponse = null;
        putEventsResponse = client.putEventsToAccount("1186095474286448", cloudEventList);
    }

}
