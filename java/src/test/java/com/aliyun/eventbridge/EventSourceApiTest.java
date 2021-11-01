package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.CreateEventSourceRequest;
import com.aliyun.eventbridge.models.CreateEventSourceResponse;
import com.aliyun.eventbridge.models.DeleteEventSourceRequest;
import com.aliyun.eventbridge.models.DeleteEventSourceResponse;
import com.aliyun.eventbridge.models.EBAliyunOfficialEventSourceEntry;
import com.aliyun.eventbridge.models.EBUserDefinedEventSourceEntry;
import com.aliyun.eventbridge.models.ListAliyunOfficialRequest;
import com.aliyun.eventbridge.models.ListAliyunOfficialResponse;
import com.aliyun.eventbridge.models.ListUserDefinedRequest;
import com.aliyun.eventbridge.models.ListUserDefinedResponse;
import com.aliyun.eventbridge.models.SourceRabbitMQParameters;
import com.aliyun.eventbridge.models.UpdateEventSourceRequest;
import com.aliyun.eventbridge.models.UpdateEventSourceResponse;
import com.google.gson.Gson;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * @author wb-zh378814
 * @Date 2021/8/4 9:54
 */
public class EventSourceApiTest {

    public static EventBridge createClient() {
        Config config = new Config();
        config.setAccessKeyId("LTAI4G3Qaw8Mqso8tRav5L4r")
            .setAccessKeySecret("p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B")
            .setEndpoint("1186095474286448.eventbridge.cn-hangzhou.aliyuncs.com");
        return new EventBridgeClient(config);
    }

    public static void createEventSource() {
        EventBridge eventBridge = createClient();
        CreateEventSourceRequest createEventSourceRequest = new CreateEventSourceRequest();
        createEventSourceRequest.setEventSourceName("acs.oss");
        createEventSourceRequest.setDescription("ECS事件源");
        createEventSourceRequest.setEventBusName("myBusTest");
        try {
            CreateEventSourceResponse eventSource = eventBridge.createEventSource(createEventSourceRequest);
            System.out.println(
                "code : " + eventSource.getRequestId() + " EventSourceARN : " + eventSource.getEventSourceARN());
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void createExternalEventSource() {
        EventBridge eventBridge = createClient();
        CreateEventSourceRequest createEventSourceRequest = new CreateEventSourceRequest();
        createEventSourceRequest.setEventSourceName("oss.test");
        createEventSourceRequest.setDescription("AMPQ事件源");
        createEventSourceRequest.setEventBusName("myBusTest");
        SourceRabbitMQParameters sourceRabbitMQParameters = new SourceRabbitMQParameters();
        sourceRabbitMQParameters.setVirtualHostName("eb-connect");
        sourceRabbitMQParameters.setInstanceId("amqp-cn-nif22u74f00p");
        sourceRabbitMQParameters.setRegionId("cn-zhangjiakou");
        sourceRabbitMQParameters.setQueueName("demo");
        createEventSourceRequest.setSourceRabbitMQParameters(sourceRabbitMQParameters);
        try {
            CreateEventSourceResponse eventSource = eventBridge.createEventSource(createEventSourceRequest);
            System.out.println(
                "code : " + eventSource.getRequestId() + " EventSourceARN : " + eventSource.getEventSourceARN());
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void updateEventSource() {
        EventBridge eventBridge = createClient();
        UpdateEventSourceRequest updateEventSourceRequest = new UpdateEventSourceRequest();
        updateEventSourceRequest.setEventSourceName("acs.oss");
        updateEventSourceRequest.setDescription("测试ECS事件源");
        updateEventSourceRequest.setEventBusName("myBusTest");
        try {
            UpdateEventSourceResponse updateEventSourceResponse = eventBridge.updateEventSource(
                updateEventSourceRequest);
            System.out.println("code : " + updateEventSourceResponse.getRequestId());
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void updateExternalEventSource() {
        EventBridge eventBridge = createClient();
        UpdateEventSourceRequest updateEventSourceRequest = new UpdateEventSourceRequest();
        updateEventSourceRequest.setEventSourceName("oss.test");
        updateEventSourceRequest.setDescription("Update-测试ECS事件源test");
        updateEventSourceRequest.setEventBusName("myBusTest");
        SourceRabbitMQParameters sourceRabbitMQParameters = new SourceRabbitMQParameters();
        sourceRabbitMQParameters.setVirtualHostName("eb-connect");
        sourceRabbitMQParameters.setInstanceId("amqp-cn-nif22u74f00p");
        sourceRabbitMQParameters.setRegionId("cn-zhangjiakou");
        sourceRabbitMQParameters.setQueueName("demo");
        updateEventSourceRequest.setSourceRabbitMQParameters(sourceRabbitMQParameters);
        try {
            UpdateEventSourceResponse updateEventSourceResponse = eventBridge.updateEventSource(
                updateEventSourceRequest);
            System.out.println("code : " + updateEventSourceResponse.getRequestId());
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void deleteEventSource(String eventSourceName) {
        EventBridge eventBridge = createClient();
        DeleteEventSourceRequest deleteEventSourceRequest = new DeleteEventSourceRequest();
        deleteEventSourceRequest.setEventSourceName(eventSourceName);
        try {
            DeleteEventSourceResponse deleteEventSourceResponse = eventBridge.deleteEventSource(
                deleteEventSourceRequest);
            System.out.println(deleteEventSourceResponse.getRequestId() + "  "
                + deleteEventSourceResponse.getResourceOwnerAccountId());
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void listAliyunOfficialEventSources() {
        EventBridge eventBridge = createClient();
        ListAliyunOfficialRequest listAliyunOfficialRequest = new ListAliyunOfficialRequest();
        try {
            ListAliyunOfficialResponse listAliyunOfficialResponse = eventBridge.listAliyunOfficialEventSources(
                listAliyunOfficialRequest);
            System.out.println(new Gson().toJson(listAliyunOfficialResponse));
        } catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }

    public static void listUserDefinedEventSources() {
        EventBridge eventBridge = createClient();
        ListUserDefinedRequest listUserDefinedRequest = new ListUserDefinedRequest();
        try {
            ListUserDefinedResponse listUserDefinedResponse = eventBridge.listUserDefinedEventSources(
                listUserDefinedRequest);
            System.out.println(new Gson().toJson(listUserDefinedResponse));
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    public static void main(String[] args) {
        //createEventSource();
        //updateEventSource();
        //deleteEventSource("acs.oss");
        //deleteEventSource("acs.oss.test");
        //createExternalEventSource();
        //updateExternalEventSource();
        //listAliyunOfficialEventSources();
        listUserDefinedEventSources();
    }

}
