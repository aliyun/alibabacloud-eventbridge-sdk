package com.aliyun.eventbridge;

import java.net.URI;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Map;

import com.aliyun.eventbridge.models.CloudEvent;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.PutEventsResponse;
import com.aliyun.eventbridge.util.EventBuilder;
import com.aliyun.tea.TeaException;
import com.aliyuncs.DefaultAcsClient;
import com.aliyuncs.IAcsClient;
import com.aliyuncs.auth.sts.AssumeRoleRequest;
import com.aliyuncs.auth.sts.AssumeRoleResponse;
import com.aliyuncs.exceptions.ClientException;
import com.aliyuncs.profile.DefaultProfile;
import com.google.gson.Gson;

public class PutEventsSample {

    private EventBridge eventBridgeClient;

    public PutEventsSample() throws ClientException {
        //DefaultProfile profile = DefaultProfile.getProfile("cn-hangzhou", "LTAI4FgmiPe9EQDV2KQqP3gy", "AznlitVyNXd93EEUvAZHbwFAUarRJO");
        //IAcsClient client = new DefaultAcsClient(profile);
        //
        //AssumeRoleWithServiceIdentityRequest request = new AssumeRoleWithServiceIdentityRequest();
        //request.setSysRegionId("cn-hangzhou");
        //request.setRoleArn("acs:ram::1186095474286448:role/ram-for-account-a");
        //request.setRoleSessionName("test-eb-actiontrail-session");
        //request.setAssumeRoleFor("1652288660416536");

        //final AssumeRoleWithServiceIdentityResponse acsResponse = client.getAcsResponse(request);

        DefaultProfile profile = DefaultProfile.getProfile("cn-hangzhou", "LTAI5tHsMVzmLKXPWyokWbmE", "qiXr7ky4Ok70MGfRVwlIDwUAo4KH6z");
        IAcsClient client = new DefaultAcsClient(profile);

        AssumeRoleRequest request = new AssumeRoleRequest();
        request.setRegionId("cn-hangzhou");
        request.setRoleArn("acs:ram::1186095474286448:role/ram-for-account-a");
        request.setRoleSessionName("test-eb-actiontrail-session");

        final AssumeRoleResponse acsResponse = client.getAcsResponse(request);

        System.out.println(new Gson().toJson(acsResponse.getCredentials()));

        Config authConfig = new Config();
        authConfig.accessKeyId = acsResponse.getCredentials().getAccessKeyId();
        authConfig.accessKeySecret = acsResponse.getCredentials().getAccessKeySecret();
        authConfig.securityToken = acsResponse.getCredentials().getSecurityToken();
        authConfig.endpoint = "1186095474286448.eventbridge.cn-hangzhou-pre.aliyuncs.com";
        eventBridgeClient = new EventBridgeClient(authConfig);
    }

    public void putEventsSample() {
        List<CloudEvent> cloudEventList = new ArrayList<>();
        String a = "";
        for (int i = 0; i < 1; i++) {
            a += 'a';
        }
        for (int i = 0; i < 1; i++) {
            cloudEventList.add(EventBuilder.builder()
                .withId("a5074581-7e74-4e4c-868f-47e7afdf****")
                .withSource(URI.create("acs.oss.abc" + i))
                .withType("oss:ObjectCreated:PostObject")
                .withSubject("acs:oss:cn-hangzhou:{yourAccountId}:xls-papk/game_apk/123.jpg")
                .withTime(new Date())
                .withJsonStringData(a)
                .withAliyunEventBus("testagin")
                .build());
        }

        final Map<String, Object> extensions = (Map<String, Object>)cloudEventList.get(0)
            .getExtensions();
        extensions.put("aliyunoriginalaccountid", "123");
        try {
            PutEventsResponse putEventsResponse = eventBridgeClient.putEvents(cloudEventList);
            System.out.println(new Gson().toJson(putEventsResponse));
        } catch (TeaException e) {
            e.printStackTrace();
            System.out.println(e.code);
        }
    }

    public static void main(String[] args) throws InterruptedException, ClientException {
        PutEventsSample sample = new PutEventsSample();
        System.setProperty("ahas.license", "b9835638c263497cbc35864cfba85092");
        sample.putEventsSample();
    }
}
