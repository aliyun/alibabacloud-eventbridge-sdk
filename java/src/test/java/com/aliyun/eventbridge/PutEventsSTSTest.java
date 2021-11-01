package com.aliyun.eventbridge;

import com.aliyun.auth.sts.STSCertificate;
import com.aliyun.auth.sts.STSService;
import com.aliyun.auth.sts.STSServiceImpl;
import com.aliyun.eventbridge.models.CloudEvent;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.PutEventsResponse;
import com.aliyun.eventbridge.util.EventBuilder;
import com.aliyuncs.DefaultAcsClient;
import com.aliyuncs.IAcsClient;
import com.aliyuncs.auth.sts.AssumeRoleRequest;
import com.aliyuncs.auth.sts.AssumeRoleResponse;
import com.aliyuncs.exceptions.ClientException;
import com.aliyuncs.profile.DefaultProfile;
import com.google.gson.Gson;
import org.junit.Test;

import java.net.URI;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.UUID;

public class PutEventsSTSTest {

    private EventBridge client;

    @Test
    public void testPutEvents() throws Exception {
        STSService stsService = new STSServiceImpl("sts.cn-huhehaote.aliyuncs.com", "cn-huhehaote",
                "LTAI4G3Qaw8Mqso8tRav5L4r", "p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B");
        STSCertificate stsCertificate = stsService.get("1652288660416536", "mns-role-for-b",
                "AliyunEventBridgePutEventsPolicy");
        String accessKey = stsCertificate.getAccessId();
        String secretKey = stsCertificate.getAccessKey();
        String token = stsCertificate.getStsToken();

        System.out.printf("accessKey=" + accessKey);
        System.out.printf("secretKey=" + secretKey);
        System.out.printf("token=" + token);
        Config config = new Config();
        config.setAccessKeyId(accessKey)
                .setAccessKeySecret(secretKey)
                .setSecurityToken(token)
                .setEndpoint("1439989007797786.eventbridge.cn-huhehaote.aliyuncs.com");
        client = new EventBridgeClient(config);
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
        PutEventsResponse putEventsResponse = client.putEvents(cloudEventList);
        System.out.println(new Gson().toJson(putEventsResponse));
    }

    @Test
    public void testPutEventsSTS() throws ClientException {
        DefaultProfile profile = DefaultProfile.getProfile("cn-huhehaote", "LTAI4FyubsunkhDW4dJxX6aH", "mfzHMbYvKUixUBtFWzaEKGHwV3Ikdi");
        IAcsClient client = new DefaultAcsClient(profile);

        AssumeRoleRequest request = new AssumeRoleRequest();
        request.setRegionId("cn-huhehaote");
        request.setRoleArn("acs:ram::1652288660416536:role/mns-role-for-b");
        request.setRoleSessionName("test-eb-actiontrail-session");
//request.setAssumeRoleFor("1652288660416536");

        final AssumeRoleResponse acsResponse = client.getAcsResponse(request);

        Config authConfig = new Config();
        authConfig.accessKeyId = acsResponse.getCredentials().getAccessKeyId();
        authConfig.accessKeySecret = acsResponse.getCredentials().getAccessKeySecret();
//        authConfig.endpoint = "eventbridge.cn-hangzhou-pre.aliyuncs.com";
        authConfig.endpoint = "1652288660416536.eventbridge.cn-huhehaote.aliyuncs.com";
//        authConfig.endpoint = "1186095474286448.eventbridge.cn-huhehaote.aliyuncs.com";
//        authConfig.endpoint = "1439989007797786.eventbridge.cn-hangzhou-pre.aliyuncs.com";

        authConfig.securityToken = acsResponse.getCredentials().getSecurityToken();
        EventBridgeClient eventBridgeClient = new EventBridgeClient(authConfig);
        List<CloudEvent> cloudEventList = new ArrayList<>();
        cloudEventList.add(EventBuilder.builder()
                .withId(UUID.randomUUID()
                        .toString())
                .withSource(URI.create("acs.aliyuncvc"))
                .withType("aliyuncvc:MeetingEvent:MeetingStateEvent")
                .withSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
                .withJsonStringData("{ \"bus\":" + " \"demo\" }")
                .withTime(new Date())
                .withAliyunEventBus("MyEventBus")//myBus
                .build());
        PutEventsResponse putEventsResponse = eventBridgeClient.putEvents(cloudEventList);
        System.out.println(new Gson().toJson(putEventsResponse));
    }

}
