package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.*;

public interface EventBridge {

    /**
     * Encapsulate the request and invoke the network
     * @param action the api name
     * @param protocol http or https
     * @param method e.g. GET
     * @param pathname pathname of every api
     * @param query which contains request params
     * @param body content of request
     * @param runtime which controls some details of call api, such as retry times
     * @return the response
     */
    java.util.Map<String, ?> doRequest(String action, String protocol, String method, String pathname, java.util.Map<String, String> query, Object body, java.util.Map<String, String> headers, RuntimeOptions runtime);

    /**
     * Publish event to the aliyun EventBus
     */
    PutEventsResponse putEvents(java.util.List<CloudEvent> eventList);

    /**
     * Publish event to the aliyun EventBus
     */
    PutEventsResponse putEventsWithOptions(java.util.List<CloudEvent> eventList, RuntimeOptions runtime);

    /**
     * Publish event to the aliyun specified account's event bus
     */
    PutEventsResponse putEventsToAccount(String accoutid, java.util.List<CloudEvent> eventList);

    /**
     * Publish event to the aliyun specified account's event bus
     */
    PutEventsResponse putEventsToAccountWithOptions(String accoutid, java.util.List<CloudEvent> eventList, RuntimeOptions runtime);

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    CreateEventBusResponse createEventBus(CreateEventBusRequest request);

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    CreateEventBusResponse createEventBusWithOptions(CreateEventBusRequest request, RuntimeOptions runtime);

    /**
     * List the aliyun official event source within your account
     */
    ListAliyunOfficialResponse listAliyunOfficialEventSources(ListAliyunOfficialRequest request);

    /**
     * List the aliyun official event source within your account
     */
    ListAliyunOfficialResponse listAliyunOfficialEventSourcesWithOptions(ListAliyunOfficialRequest request, RuntimeOptions runtime);

    /**
     * List the user defined event source within your account
     */
    ListUserDefinedResponse listUserDefinedEventSources(ListUserDefinedRequest request);

    /**
     * List the user defined event source within your account
     */
    ListUserDefinedResponse listUserDefinedEventSourcesWithOptions(ListUserDefinedRequest request, RuntimeOptions runtime);

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    DeleteEventBusResponse deleteEventBus(DeleteEventBusRequest request);

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    DeleteEventBusResponse deleteEventBusWithOptions(DeleteEventBusRequest request, RuntimeOptions runtime);

    /**
     * Displays details about an event bus in your account
     */
    GetEventBusResponse getEventBus(GetEventBusRequest request);

    /**
     * Displays details about an event bus in your account
     */
    GetEventBusResponse getEventBusWithOptions(GetEventBusRequest request, RuntimeOptions runtime);

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    ListEventBusesResponse listEventBuses(ListEventBusesRequest request);

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    ListEventBusesResponse listEventBusesWithOptions(ListEventBusesRequest request, RuntimeOptions runtime);

    /**
     * Query the event traces by the event Id
     */
    QueryEventByEventIdResponse queryEventByEventId(QueryEventByEventIdRequest request);

    /**
     * Query the event traces by the event Id
     */
    QueryEventByEventIdResponse queryEventByEventIdWithOptions(QueryEventByEventIdRequest request, RuntimeOptions runtime);

    /**
     *Query the event traces by the event period
     */
    QueryEventsByPeriodResponse queryEventsByPeriod(QueryEventsByPeriodRequest request);

    /**
     * Query the event traces by the event period
     */
    QueryEventsByPeriodResponse queryEventsByPeriodWithOptions(QueryEventsByPeriodRequest request, RuntimeOptions runtime);

    /**
     * Query the event traces by the event Id
     */
    QueryEventTracesResponse queryEventTraces(QueryEventTracesRequest request);

    /**
     * Query the event traces by the event Id
     */
    QueryEventTracesResponse queryEventTracesWithOptions(QueryEventTracesRequest request, RuntimeOptions runtime);

    /**
     * delete event streaming
     */
    DeleteEventStreamingResponse deleteEventStreaming(DeleteEventStreamingRequest request);

    /**
     * delete event streaming
     */
    DeleteEventStreamingResponse deleteEventStreamingWithOptions(DeleteEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * create event streaming
     */
    GetEventStreamingResponse getEventStreaming(GetEventStreamingRequest request);

    /**
     * create event streaming
     */
    GetEventStreamingResponse getEventStreamingWithOptions(GetEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * List the metrics of event streaming
     */
    ListEventStreamingMetricsResponse listEventStreamingMetrics(ListEventStreamingMetricsRequest request);

    /**
     * List the metrics of event streaming
     */
    ListEventStreamingMetricsResponse listEventStreamingMetricsWithOptions(ListEventStreamingMetricsRequest request, RuntimeOptions runtime);

    /**
     * Save and start event streaming procss
     */
    SaveAndStartEventStreamingResponse saveAndStartEventStreaming(SaveAndStartEventStreamingRequest request);

    /**
     * Save and start event streaming procss
     */
    SaveAndStartEventStreamingResponse saveAndStartEventStreamingWithOptions(SaveAndStartEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * Create an EventBus rule on Aliyun
     */
    CreateRuleResponse createRule(CreateRuleRequest request);

    /**
     * Create an EventBus rule on Aliyun
     */
    CreateRuleResponse createRuleWithOptions(CreateRuleRequest request, RuntimeOptions runtime);

    /**
     * Deletes the specified rule.
     */
    DeleteRuleResponse deleteRule(DeleteRuleRequest request);

    /**
     * Deletes the specified rule.
     */
    DeleteRuleResponse deleteRuleWithOptions(DeleteRuleRequest request, RuntimeOptions runtime);

    /**
     * Disables the specified rule
     */
    DisableRuleResponse disableRule(DisableRuleRequest request);

    /**
     * Disables the specified rule
     */
    DisableRuleResponse disableRuleWithOptions(DisableRuleRequest request, RuntimeOptions runtime);

    /**
     * Enables the specified rule
     */
    EnableRuleResponse enableRule(EnableRuleRequest request);

    /**
     * Enables the specified rule
     */
    EnableRuleResponse enableRuleWithOptions(EnableRuleRequest request, RuntimeOptions runtime);

    /**
     * Update event streaming procss
     */
    UpdateEventStreamingResponse updateEventStreaming(UpdateEventStreamingRequest request);

    /**
     * create event streaming
     */
    UpdateEventStreamingResponse updateEventStreamingWithOptions(UpdateEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * create event streaming
     */
    StartEventStreamingResponse startEventStreaming(StartEventStreamingRequest request);

    /**
     * create event streaming
     */
    StartEventStreamingResponse startEventStreamingsWithOptions(StartEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * delete event streaming
     */
    PauseEventStreamingResponse pauseEventStreaming(PauseEventStreamingRequest request);

    /**
     * delete event streaming
     */
    PauseEventStreamingResponse pauseEventStreamingWithOptions(PauseEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * create event streaming
     */
    listEventStreamingsResponse listEventStreamings(listEventStreamingsRequest request);

    /**
     * create event streaming
     */
    listEventStreamingsResponse listEventStreamingsWithOptions(listEventStreamingsRequest request, RuntimeOptions runtime);

    /**
     * Create event streaming procss
     */
    CreateEventStreamingResponse createEventStreaming(CreateEventStreamingRequest request);

    /**
     * Create event streaming procss
     */
    CreateEventStreamingResponse createEventStreamingWithOptions(CreateEventStreamingRequest request, RuntimeOptions runtime);

    /**
     * Creates a new event source within your account
     */
    CreateEventSourceResponse createEventSource(CreateEventSourceRequest request);

    /**
     * Creates a new event source within your account
     */
    CreateEventSourceResponse createEventSourceWithOptions(CreateEventSourceRequest request, RuntimeOptions runtime);

    /**
     * Delete the event source
     */
    DeleteEventSourceResponse deleteEventSource(DeleteEventSourceRequest request);

    /**
     * Delete the event source
     */
    DeleteEventSourceResponse deleteEventSourceWithOptions(DeleteEventSourceRequest request, RuntimeOptions runtime);

    /**
     * Update the event source
     */
    UpdateEventSourceResponse updateEventSource(UpdateEventSourceRequest request);

    /**
     * Update the event source
     */
    UpdateEventSourceResponse updateEventSourceWithOptions(UpdateEventSourceRequest request, RuntimeOptions runtime);

    /**
     * Describes the specified rule
     */
    GetRuleResponse getRule(GetRuleRequest request);

    /**
     * Describes the specified rule
     */
    GetRuleResponse getRuleWithOptions(GetRuleRequest request, RuntimeOptions runtime);

    /**
     * List all the rules which meet the search criteria
     */
    ListRulesResponse listRules(ListRulesRequest request);

    /**
     * List all the rules which meet the search criteria
     */
    ListRulesResponse listRulesWithOptions(ListRulesRequest request, RuntimeOptions runtime);

    /**
     * update the specified rule.
     */
    UpdateRuleResponse updateRule(UpdateRuleRequest request);

    /**
     * update the specified rule.
     */
    UpdateRuleResponse updateRuleWithOptions(UpdateRuleRequest request, RuntimeOptions runtime);

    /**
     * Adds the specified targets to the specified rule
     */
    CreateTargetsResponse createTargets(CreateTargetsRequest request);

    /**
     * Adds the specified targets to the specified rule
     */
    CreateTargetsResponse createTargetsWithOptions(CreateTargetsRequest request, RuntimeOptions runtime);

    /**
     * Delete the specified targets from the specified rule
     */
    DeleteTargetsResponse deleteTargets(DeleteTargetsRequest request);

    /**
     * Delete the specified targets from the specified rule
     */
    DeleteTargetsResponse deleteTargetsWithOptions(DeleteTargetsRequest request, RuntimeOptions runtime);

    /**
     * List all the Targets which meet the search criteria
     */
    ListTargetsResponse listTargets(ListTargetsRequest request);

    /**
     * List all the Targets which meet the search criteria
     */
    ListTargetsResponse listTargetsWithOptions(ListTargetsRequest request, RuntimeOptions runtime);

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    TestEventPatternResponse testEventPattern(TestEventPatternRequest request);

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    TestEventPatternResponse testEventPatternWithOptions(TestEventPatternRequest request, RuntimeOptions runtime);

    /**
     * Check the activation status of EventBridge service for a given user
     */
    QueryEventBridgeStatusResponse queryEventBridgeStatus(QueryEventBridgeStatusRequest request);

    /**
     * Check the activation status of EventBridge service for a given user
     */
    QueryEventBridgeStatusResponse queryEventBridgeStatusWithOptions(QueryEventBridgeStatusRequest request, RuntimeOptions runtime);

}