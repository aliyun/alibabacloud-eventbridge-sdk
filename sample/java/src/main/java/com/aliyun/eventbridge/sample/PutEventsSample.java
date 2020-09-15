package com.aliyun.eventbridge.sample;

import java.net.URI;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import com.aliyun.eventbridge.EventBridge;
import com.aliyun.eventbridge.EventBridgeClient;
import com.aliyun.eventbridge.models.CloudEvent;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.PutEventsResponse;
import com.aliyun.eventbridge.util.EventBuilder;
import com.google.gson.Gson;

public class PutEventsSample {

    private EventBridge eventBridgeClient;

    public PutEventsSample() {
        Config authConfig = new Config();
        authConfig.accessKeyId = "{accessKeyId}";
        authConfig.accessKeySecret = "{accessKeySecret}";
        authConfig.endpoint = "{endpoint}";
        eventBridgeClient = new EventBridgeClient(authConfig);
    }

    public void putEventsSample() {
        List<CloudEvent> cloudEventList = new ArrayList<>();
        cloudEventList.add(EventBuilder.builder()
            .withId("a5074581-7e74-4e4c-868f-47e7afdf8445")
            .withSource(URI.create("acs.oss"))
            .withType("oss:ObjectCreated:PostObject")
            .withSubject("acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .withTime(new Date())
            .withJsonString("{ \"E-Mail\": \"${email}\" }")
            .withAliyunEventBus("demo-bus")
            .build());
        cloudEventList.add(EventBuilder.builder()
            .withId("a5074581-7e74-4e4c-868f-47e7afdf8444")
            .withSource(URI.create("acs.oss"))
            .withType("oss:ObjectCreated:PostObject")
            .withSubject("acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
            .withTime(new Date())
            .withJsonString("{ \"E-Mail\": \"${email}\" }")
            .withAliyunEventBus("demo-bus")
            .build());
        PutEventsResponse putEventsResponse = eventBridgeClient.putEvents(cloudEventList);
        System.out.println(new Gson().toJson(putEventsResponse));
    }

    public static void main(String[] args){
        PutEventsSample sample = new PutEventsSample();
        try {
            sample.putEventsSample();
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }
}
