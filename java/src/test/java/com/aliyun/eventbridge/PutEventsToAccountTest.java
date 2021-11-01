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
import com.google.gson.Gson;
import org.junit.Before;
import org.junit.Test;

public class PutEventsToAccountTest {

    private EventBridge client;

    @Before
    public void init() {
        Config config = new Config();
        config.setAccessKeyId("LTAI4GAwBZyVoSFw87iE2ZRv")
            .setAccessKeySecret("QW88l3c5WofE4IDeCi45MXMARVR5jG")
            .setEndpoint("prepub.eventbridge.cn-hangzhou-vpc.aliyuncs.com");
        client = new EventBridgeClient(config);
    }

    @Test
    public void testPutEventsToAccount() {
        List<CloudEvent> cloudEventList = new ArrayList<>();
        cloudEventList.add(EventBuilder.builder()
            .withId(UUID.randomUUID()
                .toString())
            .withSource(URI.create("acs.aliyuncvc"))
            .withType("aliyuncvc:MeetingEvent:MeetingStateEvent")
            .withSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .withJsonStringData("{ \"bus\":" + " \"demo\" }")
            .withTime(new Date())
            .withAliyunEventBus("jingluo")
            .build());
        while (true){
            PutEventsResponse putEventsResponse = client.putEventsToAccount("1186095474286448", cloudEventList);
            System.out.println(new Gson().toJson(putEventsResponse));
        }

    }
}
