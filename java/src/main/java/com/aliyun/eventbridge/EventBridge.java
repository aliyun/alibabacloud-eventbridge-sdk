package com.aliyun.eventbridge;

import com.aliyun.eventbridge.models.*;

public interface EventBridge {

    /**
     * Publish event to the aliyun EventBus.
     *
     * @param eventList
     *
     * @return
     */
    PutEventsResponse putEvents(java.util.List<CloudEvent> eventList);

    /**
     * Publish event to the aliyun EventBus with RuntimeOptions.
     *
     * @param eventList
     * @param runtime
     *
     * @return
     */
    PutEventsResponse putEventsWithOptions(java.util.List<CloudEvent> eventList,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events
     * from your custom applications and services.
     *
     * @param request
     *
     * @return
     */
    CreateEventBusResponse createEventBus(CreateEventBusRequest request);

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events
     * from your custom applications and services with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    CreateEventBusResponse createEventBusWithOptions(CreateEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus.
     *
     * @param request
     *
     * @return
     */
    DeleteEventBusResponse deleteEventBus(DeleteEventBusRequest request);

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus with
     * RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    DeleteEventBusResponse deleteEventBusWithOptions(DeleteEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Displays details about an event bus in your account
     *
     * @param request
     *
     * @return
     */
    GetEventBusResponse getEventBus(GetEventBusRequest request);

    /**
     * Displays details about an event bus in your account with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    GetEventBusResponse getEventBusWithOptions(GetEventBusRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search
     * criteria.
     *
     * @param request
     *
     * @return
     */
    ListEventBusesResponse listEventBuses(ListEventBusesRequest request);

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search
     * criteria with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    ListEventBusesResponse listEventBusesWithOptions(ListEventBusesRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Create an EventBus rule on Aliyun
     *
     * @param request
     *
     * @return
     */
    CreateRuleResponse createRule(CreateRuleRequest request);

    /**
     * Create an EventBus rule on Aliyun with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    CreateRuleResponse createRuleWithOptions(CreateRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Deletes the specified rule.
     *
     * @param request
     *
     * @return
     */
    DeleteRuleResponse deleteRule(DeleteRuleRequest request);

    /**
     * Deletes the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    DeleteRuleResponse deleteRuleWithOptions(DeleteRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Disables the specified rule.
     *
     * @param request
     *
     * @return
     */
    DisableRuleResponse disableRule(DisableRuleRequest request);

    /**
     * Disables the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    DisableRuleResponse disableRuleWithOptions(DisableRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Enables the specified rule.
     *
     * @param request
     *
     * @return
     */
    EnableRuleResponse enableRule(EnableRuleRequest request);

    /**
     * Enables the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    EnableRuleResponse enableRuleWithOptions(EnableRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Describes the specified rule.
     *
     * @param request
     *
     * @return
     */
    GetRuleResponse getRule(GetRuleRequest request);

    /**
     * Describes the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    GetRuleResponse getRuleWithOptions(GetRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * List all the rules which meet the search criteria.
     *
     * @param request
     *
     * @return
     */
    ListRulesResponse listRules(ListRulesRequest request);

    /**
     * List all the rules which meet the search criteria with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    ListRulesResponse listRulesWithOptions(ListRulesRequest request, com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Update the specified rule.
     *
     * @param request
     *
     * @return
     */
    UpdateRuleResponse updateRule(UpdateRuleRequest request);

    /**
     * Update the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    UpdateRuleResponse updateRuleWithOptions(UpdateRuleRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Adds the specified targets to the specified rule.
     *
     * @param request
     *
     * @return
     */
    CreateTargetsResponse createTargets(CreateTargetsRequest request);

    /**
     * Adds the specified targets to the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    CreateTargetsResponse createTargetsWithOptions(CreateTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Delete the specified targets from the specified rule.
     *
     * @param request
     *
     * @return
     */
    DeleteTargetsResponse deleteTargets(DeleteTargetsRequest request);

    /**
     * Delete the specified targets from the specified rule with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    DeleteTargetsResponse deleteTargetsWithOptions(DeleteTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * List all the Targets which meet the search criteria.
     *
     * @param request
     *
     * @return
     */
    ListTargetsResponse listTargets(ListTargetsRequest request);

    /**
     * List all the Targets which meet the search criteria with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    ListTargetsResponse listTargetsWithOptions(ListTargetsRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

    /**
     * Tests whether the specified event pattern matches the provided event.
     *
     * @param request
     *
     * @return
     */
    TestEventPatternResponse testEventPattern(TestEventPatternRequest request);

    /**
     * Tests whether the specified event pattern matches the provided event with RuntimeOptions.
     *
     * @param request
     * @param runtime
     *
     * @return
     */
    TestEventPatternResponse testEventPatternWithOptions(TestEventPatternRequest request,
        com.aliyun.teautil.models.RuntimeOptions runtime);

}