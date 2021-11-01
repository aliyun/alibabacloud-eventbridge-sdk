package com.aliyun.eventbridge;

import java.util.List;

import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.CreateEventStreamingRequest;
import com.aliyun.eventbridge.models.CreateEventStreamingResponse;
import com.aliyun.eventbridge.models.DeleteEventStreamingRequest;
import com.aliyun.eventbridge.models.DeleteEventStreamingResponse;
import com.aliyun.eventbridge.models.GetEventStreamingRequest;
import com.aliyun.eventbridge.models.GetEventStreamingResponse;
import com.aliyun.eventbridge.models.ListEventStreamingMetricsRequest;
import com.aliyun.eventbridge.models.ListEventStreamingMetricsResponse;
import com.aliyun.eventbridge.models.PauseEventStreamingRequest;
import com.aliyun.eventbridge.models.PauseEventStreamingResponse;
import com.aliyun.eventbridge.models.Sink;
import com.aliyun.eventbridge.models.SinkMNSParameters;
import com.aliyun.eventbridge.models.Source;
import com.aliyun.eventbridge.models.SourceMNSParameters;
import com.aliyun.eventbridge.models.StartEventStreamingRequest;
import com.aliyun.eventbridge.models.StartEventStreamingResponse;
import com.aliyun.eventbridge.models.TargetParameter;
import com.aliyun.eventbridge.models.UpdateEventStreamingRequest;
import com.aliyun.eventbridge.models.UpdateEventStreamingResponse;
import com.aliyun.eventbridge.models.listEventStreamingsRequest;
import com.aliyun.eventbridge.models.listEventStreamingsResponse;
import com.aliyun.tea.TeaException;
import com.google.common.collect.Lists;
import com.google.gson.Gson;
import org.junit.Test;

/**
 * @author wb-zh378814
 * @Date 2021/8/4 9:54
 */
public class EventStreamingApiTest {

    public static EventBridge createClient() {
        Config config = new Config();
        config.setAccessKeyId("LTAI5tGx4PsXBaXzitv843aN")
            .setAccessKeySecret("LC7nCRUZxTPFSXPk6R2X5KrF2WoqI6")
            //.setEndpoint("1439989007797786.eventbridge.test.com:7001");
            .setEndpoint("1439989007797786.eventbridge.cn-hangzhou.aliyuncs.com");
        return new EventBridgeClient(config);
    }

    @Test
    public void createEventStreaming() {
        EventBridge eventBridge = createClient();
        CreateEventStreamingRequest request = new CreateEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        request.setFilterPattern("{}");
        Source source = new Source();
        SourceMNSParameters sourceMNSParameters = new SourceMNSParameters();
        sourceMNSParameters.setQueueName("eventstreaming-source");
        sourceMNSParameters.setRegionId("cn-hangzhou");
        source.setSourceMNSParameters(sourceMNSParameters);
        request.setSource(source);

        Sink sink = new Sink();
        SinkMNSParameters sinkMNSParameters = new SinkMNSParameters();
        TargetParameter queueName = new TargetParameter();
        queueName.setForm("CONSTANT");
        queueName.setValue("eventstreaming-target");
        TargetParameter body = new TargetParameter();
        body.setForm("ORIGINAL");
        sinkMNSParameters.setQueueName(queueName);
        sinkMNSParameters.setBody(body);
        sink.setSinkMNSParameters(sinkMNSParameters);
        request.setSink(sink);
        try {
            CreateEventStreamingResponse response = eventBridge.createEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void updateEventStreaming() {
        EventBridge eventBridge = createClient();
        UpdateEventStreamingRequest request = new UpdateEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        request.setDescription("update");
        request.setFilterPattern("{}");
        Source source = new Source();
        SourceMNSParameters sourceMNSParameters = new SourceMNSParameters();
        sourceMNSParameters.setQueueName("eventstreaming-source");
        sourceMNSParameters.setRegionId("cn-hangzhou");
        source.setSourceMNSParameters(sourceMNSParameters);
        request.setSource(source);

        Sink sink = new Sink();
        SinkMNSParameters sinkMNSParameters = new SinkMNSParameters();
        TargetParameter queueName = new TargetParameter();
        queueName.setForm("CONSTANT");
        queueName.setValue("eventstreaming-target");
        TargetParameter body = new TargetParameter();
        body.setForm("ORIGINAL");
        sinkMNSParameters.setQueueName(queueName);
        sinkMNSParameters.setBody(body);
        sink.setSinkMNSParameters(sinkMNSParameters);
        request.setSink(sink);
        try {
            UpdateEventStreamingResponse response = eventBridge.updateEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void getEventStreaming() {
        EventBridge eventBridge = createClient();
        GetEventStreamingRequest request = new GetEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        try {
            GetEventStreamingResponse response = eventBridge.getEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void deleteEventStreaming() {
        EventBridge eventBridge = createClient();
        DeleteEventStreamingRequest request = new DeleteEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        try {
            DeleteEventStreamingResponse response = eventBridge.deleteEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void listEventStreamings() {
        EventBridge eventBridge = createClient();
        listEventStreamingsRequest request = new listEventStreamingsRequest();
        request.setLimit(10);
        request.setNextToken("0");
        try {
            listEventStreamingsResponse response = eventBridge.listEventStreamings(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void startEventStreaming() {
        EventBridge eventBridge = createClient();
        StartEventStreamingRequest request = new StartEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        try {
            StartEventStreamingResponse response = eventBridge.startEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void pauseEventStreaming() {
        EventBridge eventBridge = createClient();
        PauseEventStreamingRequest request = new PauseEventStreamingRequest();
        request.setEventStreamingName("eventstreaming-mns");
        try {
            PauseEventStreamingResponse response = eventBridge.pauseEventStreaming(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

    @Test
    public void listEventStreamingMetrics() {
        EventBridge eventBridge = createClient();
        ListEventStreamingMetricsRequest request = new ListEventStreamingMetricsRequest();
        List<String> eventStreamingNames = Lists.newArrayList("eventstreaming-mns");
        request.setEventStreamingNames(eventStreamingNames);
        try {
            ListEventStreamingMetricsResponse response = eventBridge.listEventStreamingMetrics(request);
            System.out.println(new Gson().toJson(response));
        } catch (Exception e) {
            if (e instanceof TeaException) {
                System.out.println(((TeaException)e).getCode());
            }
            e.printStackTrace();
        }
    }

}
