package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.*;
import com.aliyun.eventbridge.util.EventBuilder;
import com.aliyun.tea.TeaException;
import com.aliyun.teautil.models.RuntimeOptions;

public interface EventBridge {

    /**
     * <p>
     * Publish event to the aliyun EventBus.
     * </p>
     * <p>
     * There is a convenient way to create {@link CloudEvent}  is to
     * uesing {@link EventBuilder}, avoiding the need to create one manually.
     * </p>
     *
     * @param eventList a list of {@link CloudEvent},which follow the stanndard of
     *                  <a href="https://github.com/cloudevents"> Open Source CloudEvents </a>
     *
     * @return Result of the PutEvents operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    PutEventsResponse putEvents(java.util.List<CloudEvent> eventList) throws TeaException;

    /**
     * <p>
     * Publish event to the aliyun EventBus.
     * </p>
     * <p>
     * There is a convenient way to create {@link CloudEvent}  is to
     * uesing {@link EventBuilder}, avoiding the need to create one manually.
     * </p>
     *
     * @param eventList A list of {@link CloudEvent},which follow the stanndard of
     *                  <a href="https://github.com/cloudevents"> Open Source CloudEvents </a>
     * @param runtime   When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                  {@link RuntimeOptions}
     *
     * @return Result of the putEventsWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    PutEventsResponse putEventsWithOptions(java.util.List<CloudEvent> eventList,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events
     * from your custom applications and services.
     * </p>
     *
     * @param request The request param of createEventBus
     *
     * @return Result of the createEventBus operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateEventBusResponse createEventBus(CreateEventBusRequest request) throws TeaException;

    /**
     * <p>
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events
     * from your custom applications and services with RuntimeOptions.
     * </p>
     *
     * @param request The request param of createEventBus
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the createEventBusWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateEventBusResponse createEventBusWithOptions(CreateEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus.
     * </p>
     *
     * @param request The request param of deleteEventBus
     *
     * @return Result of the deleteEventBus operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteEventBusResponse deleteEventBus(DeleteEventBusRequest request) throws TeaException;

    /**
     * <p>
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus with
     * RuntimeOptions.
     * </p>
     *
     * @param request The request param of deleteEventBusWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the deleteEventBusWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteEventBusResponse deleteEventBusWithOptions(DeleteEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Displays details about an event bus in your account
     * </p>
     *
     * @param request The request param of getEventBus
     *
     * @return Result of the getEventBus operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    GetEventBusResponse getEventBus(GetEventBusRequest request) throws TeaException;

    /**
     * <p>
     * Displays details about an event bus in your account with RuntimeOptions.
     * </p>
     *
     * @param request The request param of getEventBusWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the getEventBusWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    GetEventBusResponse getEventBusWithOptions(GetEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search
     * criteria.
     * </p>
     *
     * @param request The request param of listEventBuses
     *
     * @return Result of the listEventBuses operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListEventBusesResponse listEventBuses(ListEventBusesRequest request) throws TeaException;

    /**
     * <p>
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search
     * criteria with RuntimeOptions.
     * </p>
     *
     * @param request The request param of listEventBusesWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the listEventBusesWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListEventBusesResponse listEventBusesWithOptions(ListEventBusesRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Create an EventBus rule on Aliyun
     * </p>
     *
     * @param request The request param of createRule
     *
     * @return Result of the createRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateRuleResponse createRule(CreateRuleRequest request) throws TeaException;

    /**
     * Create an EventBus rule on Aliyun with RuntimeOptions.
     * </p>
     *
     * @param request The request param of createRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the createRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateRuleResponse createRuleWithOptions(CreateRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Deletes the specified rule.
     * </p>
     *
     * @param request The request param of deleteRule
     *
     * @return Result of the deleteRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteRuleResponse deleteRule(DeleteRuleRequest request) throws TeaException;

    /**
     * <p>
     * Deletes the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of deleteRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the deleteRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteRuleResponse deleteRuleWithOptions(DeleteRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Disables the specified rule.
     * </p>
     *
     * @param request The request param of disableRule
     *
     * @return Result of the disableRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DisableRuleResponse disableRule(DisableRuleRequest request) throws TeaException;

    /**
     * <p>
     * Disables the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of disableRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the disableRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DisableRuleResponse disableRuleWithOptions(DisableRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Enables the specified rule.
     * </p>
     *
     * @param request The request param of enableRule
     *
     * @return Result of the enableRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    EnableRuleResponse enableRule(EnableRuleRequest request) throws TeaException;

    /**
     * <p>
     * Enables the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of enableRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the enableRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    EnableRuleResponse enableRuleWithOptions(EnableRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Describes the specified rule.
     * </p>
     *
     * @param request The request param of getRule
     *
     * @return Result of the getRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    GetRuleResponse getRule(GetRuleRequest request) throws TeaException;

    /**
     * <p>
     * Describes the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of getRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the getRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    GetRuleResponse getRuleWithOptions(GetRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime)
        throws TeaException;

    /**
     * <p>
     * List all the rules which meet the search criteria.
     * </p>
     *
     * @param request The request param of listRules
     *
     * @return Result of the listRules operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListRulesResponse listRules(ListRulesRequest request) throws TeaException;

    /**
     * <p>
     * List all the rules which meet the search criteria with RuntimeOptions.
     * </p>
     *
     * @param request The request param of listRulesWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the listRulesWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListRulesResponse listRulesWithOptions(ListRulesRequest request, com.aliyun.teautil.models.RuntimeOptions runtime)
        throws TeaException;

    /**
     * <p>
     * Update the specified rule.
     * </p>
     *
     * @param request The request param of updateRule
     *
     * @return Result of the updateRule operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    UpdateRuleResponse updateRule(UpdateRuleRequest request) throws TeaException;

    /**
     * <p>
     * Update the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of updateRuleWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the updateRuleWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    UpdateRuleResponse updateRuleWithOptions(UpdateRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Adds the specified targets to the specified rule.
     * </p>
     *
     * @param request The request param of createTargets
     *
     * @return Result of the createTargets operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateTargetsResponse createTargets(CreateTargetsRequest request) throws TeaException;

    /**
     * <p>
     * Adds the specified targets to the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of createTargetsWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the createTargetsWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    CreateTargetsResponse createTargetsWithOptions(CreateTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Delete the specified targets from the specified rule.
     * </p>
     *
     * @param request The request param of deleteTargets
     *
     * @return Result of the deleteTargets operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteTargetsResponse deleteTargets(DeleteTargetsRequest request) throws TeaException;

    /**
     * <p>
     * Delete the specified targets from the specified rule with RuntimeOptions.
     * </p>
     *
     * @param request The request param of deleteTargetsWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the deleteTargetsWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    DeleteTargetsResponse deleteTargetsWithOptions(DeleteTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * List all the Targets which meet the search criteria.
     * </p>
     *
     * @param request The request param of listTargets
     *
     * @return Result of the listTargets operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListTargetsResponse listTargets(ListTargetsRequest request) throws TeaException;

    /**
     * <p>
     * List all the Targets which meet the search criteria with RuntimeOptions.
     * </p>
     *
     * @param request The request param of listTargetsWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the listTargetsWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    ListTargetsResponse listTargetsWithOptions(ListTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Tests whether the specified event pattern matches the provided event.
     * </p>
     *
     * @param request The request param of testEventPattern
     *
     * @return Result of the testEventPattern operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    TestEventPatternResponse testEventPattern(TestEventPatternRequest request) throws TeaException;

    /**
     * <p>
     * Tests whether the specified event pattern matches the provided event with RuntimeOptions.
     * </p>
     *
     * @param request The request param of testEventPatternWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the testEventPatternWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    TestEventPatternResponse testEventPatternWithOptions(TestEventPatternRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Query the event traces by the event Id.
     * </p>
     *
     * @param request The request param of queryEventTraces
     *
     * @return Result of the queryEventTraces operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventTracesResponse queryEventTraces(QueryEventTracesRequest request) throws TeaException;

    /**
     * <p>
     * Query the event traces by the event Id with RuntimeOptions.
     * </p>
     *
     * @param request The request param of queryEventTracesWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the queryEventTracesWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventTracesResponse queryEventTracesWithOptions(QueryEventTracesRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;


    /**
     * <p>
     * Query the event traces by the event Id.
     * </p>
     *
     * @param request The request param of queryEventByEventId
     *
     * @return Result of the QueryEventByEventId operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventByEventIdResponse queryEventByEventId(QueryEventByEventIdRequest request) throws TeaException;

    /**
     * <p>
     * Query the event traces by the event Id with RuntimeOptions.
     * </p>
     *
     * @param request The request param of queryEventByEventIdWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the queryEventByEventIdWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventByEventIdResponse queryEventByEventIdWithOptions(QueryEventByEventIdRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

    /**
     * <p>
     * Query the event traces by the event period.
     * </p>
     *
     * @param request The request param of queryEventsByPeriod
     *
     * @return Result of the queryEventsByPeriod operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventsByPeriodResponse queryEventsByPeriod(QueryEventsByPeriodRequest request) throws TeaException;

    /**
     * <p>
     * Query the event traces by the event period with RuntimeOptions.
     * </p>
     *
     * @param request The request param of queryEventsByPeriodWithOptions
     * @param runtime When want to custom the request context,such as timeout,localAddr and so on, it can be seted by
     *                {@link RuntimeOptions}
     *
     * @return Result of the queryEventsByPeriodWithOptions operation returned by the service.
     *
     * @throws TeaException All the exception occurs due to expected or unexpected causes. When the exception is from
     *                      Eventbridge service, the error message is start with [EventBridgeError].
     */
    QueryEventsByPeriodResponse queryEventsByPeriodWithOptions(QueryEventsByPeriodRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime) throws TeaException;

}