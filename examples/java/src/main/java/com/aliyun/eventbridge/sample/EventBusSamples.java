package com.aliyun.eventbridge.sample;

import com.aliyun.eventbridge.EventBridge;
import com.aliyun.eventbridge.EventBridgeClient;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.CreateEventBusRequest;
import com.aliyun.eventbridge.models.CreateEventBusResponse;
import com.aliyun.eventbridge.models.DeleteEventBusRequest;
import com.aliyun.eventbridge.models.GetEventBusRequest;
import com.aliyun.eventbridge.models.GetEventBusResponse;
import com.aliyun.eventbridge.models.ListEventBusesRequest;
import com.aliyun.eventbridge.models.ListEventBusesResponse;

public class EventBusSamples {

    private EventBridge eventBridgeClient;

    public EventBusSamples()  {
        Config authConfig = new Config();
        authConfig.accessKeyId = "{accessKeyId}";
        authConfig.accessKeySecret = "{accessKeySecret}";
        authConfig.endpoint = "{endpoint}";
        eventBridgeClient = new EventBridgeClient(authConfig);
    }

    public void createEventBusSample() {
        try {
            CreateEventBusRequest createEventBusRequest = new CreateEventBusRequest();
            createEventBusRequest.setEventBusName("demo-bus");
            createEventBusRequest.setDescription("my first bus on eventbridge!");
            CreateEventBusResponse response = eventBridgeClient.createEventBus(createEventBusRequest);
            System.out.println("create bus success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void deleteEventBusSample() {
        try {
            DeleteEventBusRequest deleteEventBusRequest = new DeleteEventBusRequest();
            deleteEventBusRequest.setEventBusName("myBus");
            eventBridgeClient.deleteEventBus(deleteEventBusRequest);
            System.out.println("delete bus success : " + deleteEventBusRequest.getEventBusName());
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void getEventBusSample() {
        try {
            GetEventBusRequest describeEventBusRequest = new GetEventBusRequest();
            describeEventBusRequest.setEventBusName("myBus");
            GetEventBusResponse deScribeResponse = eventBridgeClient.getEventBus(describeEventBusRequest);
            System.out.println("describe bus success : " + deScribeResponse);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void listEventBusSample() {
        try {
            ListEventBusesRequest listEventBusesRequest = new ListEventBusesRequest();
            ListEventBusesResponse response = eventBridgeClient.listEventBuses(listEventBusesRequest);
            System.out.println("list bus success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args)  {
        EventBusSamples sample = new EventBusSamples();
        try {
            sample.createEventBusSample();
            //sample.getEventBusSample();
            //sample.listEventBusSample();
            //sample.deleteEventBusSample();
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }
}
