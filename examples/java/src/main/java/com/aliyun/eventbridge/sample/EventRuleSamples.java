package com.aliyun.eventbridge.sample;

import java.util.Arrays;
import java.util.List;

import com.aliyun.eventbridge.EventBridge;
import com.aliyun.eventbridge.EventBridgeClient;
import com.aliyun.eventbridge.models.Config;
import com.aliyun.eventbridge.models.CreateRuleRequest;
import com.aliyun.eventbridge.models.CreateRuleResponse;
import com.aliyun.eventbridge.models.CreateTargetsRequest;
import com.aliyun.eventbridge.models.CreateTargetsResponse;
import com.aliyun.eventbridge.models.DeleteRuleRequest;
import com.aliyun.eventbridge.models.DeleteTargetsRequest;
import com.aliyun.eventbridge.models.DeleteTargetsResponse;
import com.aliyun.eventbridge.models.DisableRuleRequest;
import com.aliyun.eventbridge.models.EBTargetParam;
import com.aliyun.eventbridge.models.EnableRuleRequest;
import com.aliyun.eventbridge.models.GetRuleRequest;
import com.aliyun.eventbridge.models.GetRuleResponse;
import com.aliyun.eventbridge.models.ListRulesRequest;
import com.aliyun.eventbridge.models.ListRulesResponse;
import com.aliyun.eventbridge.models.ListTargetsRequest;
import com.aliyun.eventbridge.models.ListTargetsResponse;
import com.aliyun.eventbridge.models.TargetEntry;
import com.aliyun.eventbridge.models.UpdateRuleRequest;
import com.aliyun.eventbridge.util.CommonStatus;
import com.google.common.collect.Lists;

public class EventRuleSamples {

    private EventBridge eventBridgeClient;

    public EventRuleSamples() {
        Config authConfig = new Config();
        authConfig.accessKeyId = "vZ3VL0SuJdHiEmvU";
        authConfig.accessKeySecret = "5WhwklGwaybTFrc3D6uERQ3MJtw5kp";
        authConfig.endpoint = "1370104181926700.eventbridge.test.com:7001";
        eventBridgeClient = new EventBridgeClient(authConfig);
    }

    public void createEventRuleSample() {
        try {
            CreateRuleRequest createEventRuleRequest = new CreateRuleRequest();
            EBTargetParam param1 = new EBTargetParam();
            param1.setResourceKey("URL");
            param1.setForm("CONSTANT");
            param1.setValue("https://oapi.dingtalk"
                + ".com/robot/send?access_token=1019d4a13b9e2ef6b2fu8374uhfe076fbad17b396fc5e9684814ed8460");

            EBTargetParam param2 = new EBTargetParam();
            param2.setResourceKey("SecretKey");
            param2.setForm("CONSTANT");
            param2.setValue("SEC121a71ff304a65b4f7cd90de101b43gf343321f4d9f6c1ca514300d15234");

            EBTargetParam param3 = new EBTargetParam();
            param3.setResourceKey("Body");
            param3.setForm("TEMPLATE");
            param3.setValue("{\n" + "    \"key\":\"$.source\",\n" + "    \"value\":\"$.data\"\n" + "}");
            param3.setTemplate("{\"msgtype\": \"text\",\"text\": " + "{\"content\": \"Hello：${key}\"}}");


            List<EBTargetParam> paramList = Lists.newArrayList(param1, param2, param3);
            TargetEntry targetEntry = new TargetEntry();
            targetEntry.setId("mnsQueueTarget");
            targetEntry.setType("acs.dingtalk");
            targetEntry.setParamList(paramList);
            targetEntry.setEndpoint("http://aliyun.com");

            List<TargetEntry> targetEntryList = Arrays.asList(targetEntry);
            createEventRuleRequest.setRuleName("myRule3");
            createEventRuleRequest.setEventBusName("myBus");
            createEventRuleRequest.setFilterPattern(
                "{\"source\":[\"crmabc.newsletter\"],\"type\":[\"UserSignUp\", \"UserLogin\"]}");
            createEventRuleRequest.setStatus(CommonStatus.ENABLE.getKey());
            createEventRuleRequest.setTargets(targetEntryList);
            CreateRuleResponse response = eventBridgeClient.createRule(createEventRuleRequest);
            System.out.println("create rule success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void deleteEventRuleSample() {
        try {
            DeleteRuleRequest deleteEventRuleRequest = new DeleteRuleRequest();
            deleteEventRuleRequest.setRuleName("myRule");
            deleteEventRuleRequest.setEventBusName("myBus");
            eventBridgeClient.deleteRule(deleteEventRuleRequest);
            System.out.println("delete rule success : " + deleteEventRuleRequest.getEventBusName() + "/"
                + deleteEventRuleRequest.getRuleName());
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void enableEventRuleSample() {
        try {
            EnableRuleRequest enableEventRuleRequest = new EnableRuleRequest();
            enableEventRuleRequest.setRuleName("myRule");
            enableEventRuleRequest.setEventBusName("myBus");
            eventBridgeClient.enableRule(enableEventRuleRequest);
            System.out.println("enable rule success : " + enableEventRuleRequest.getEventBusName() + "/"
                + enableEventRuleRequest.getRuleName());
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void disableEventRuleSample() {
        try {
            DisableRuleRequest disableEventRuleRequest = new DisableRuleRequest();
            disableEventRuleRequest.setRuleName("myRule");
            disableEventRuleRequest.setEventBusName("myBus");
            eventBridgeClient.disableRule(disableEventRuleRequest);
            System.out.println("disable rule success : " + disableEventRuleRequest.getEventBusName() + "/"
                + disableEventRuleRequest.getRuleName());
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void getEventRuleSample() {
        try {
            GetRuleRequest describeEventRuleRequest = new GetRuleRequest();
            describeEventRuleRequest.setRuleName("myRule");
            describeEventRuleRequest.setEventBusName("myBus");
            GetRuleResponse response = eventBridgeClient.getRule(describeEventRuleRequest);
            System.out.println("describe rule success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void listEventRuleSample() {
        try {
            ListRulesRequest listEventRulesRequest = new ListRulesRequest();
            listEventRulesRequest.setEventBusName("myBus");
            ListRulesResponse response = eventBridgeClient.listRules(listEventRulesRequest);
            System.out.println("list rule success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void updateEventRuleSample() {
        try {
            UpdateRuleRequest updateEventRuleRequest = new UpdateRuleRequest();
            updateEventRuleRequest.setRuleName("myRule");
            updateEventRuleRequest.setEventBusName("myBus");
            updateEventRuleRequest.setFilterPattern("{\"source\":[\"crmabc.newsletter\"],\"type\":[\"UserSignUp\"]}");
            eventBridgeClient.updateRule(updateEventRuleRequest);
            System.out.println("update rule success! ");
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void createTargetsSample() {
        try {
            TargetEntry targetEntry = new TargetEntry();
            targetEntry.setId("mnsQueueTarget");
            targetEntry.setEndpoint("acs:mns:{region}:{accountId}:queues/{queueName}");
            targetEntry.setPushRetryStrategy("BACKOFF_RETRY");
            targetEntry.setPushSelector("MATCHED_EVENT");

            CreateTargetsRequest createTargetsRequest = new CreateTargetsRequest();
            createTargetsRequest.setRuleName("myRule");
            createTargetsRequest.setEventBusName("myBus");
            createTargetsRequest.setTargets(Arrays.asList(targetEntry));
            CreateTargetsResponse response = eventBridgeClient.createTargets(createTargetsRequest);
            System.out.println("add targets success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void deleteTargetsSample() {
        try {
            DeleteTargetsRequest deleteTargetsResponse = new DeleteTargetsRequest();
            deleteTargetsResponse.setEventBusName("myRule");
            deleteTargetsResponse.setRuleName("myBus");
            deleteTargetsResponse.setTargetIds(Arrays.asList("httpTarget2"));
            DeleteTargetsResponse response = eventBridgeClient.deleteTargets(deleteTargetsResponse);
            System.out.println("remove targets success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public void listTargetsSample() {
        try {
            ListTargetsRequest listTargetsRequest = new ListTargetsRequest();
            listTargetsRequest.setRuleName("myRule");
            listTargetsRequest.setEventBusName("myBus");
            ListTargetsResponse response = eventBridgeClient.listTargets(listTargetsRequest);
            System.out.println("list targets success : " + response);
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        EventBusSamples eventBusSamples = new EventBusSamples();
        EventRuleSamples eventRuleSamples = new EventRuleSamples();
        try {
            // Create EventBus
            //eventBusSamples.createEventBusSample();
            eventRuleSamples.createEventRuleSample();
            //eventRuleSamples.getEventRuleSample();
            //eventRuleSamples.enableEventRuleSample();
            //eventRuleSamples.disableEventRuleSample();
            //eventRuleSamples.updateEventRuleSample();
            //eventRuleSamples.listEventRuleSample();
            //eventRuleSamples.createTargetsSample();
            //eventRuleSamples.listTargetsSample();
            //eventRuleSamples.deleteTargetsSample();
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }

}
