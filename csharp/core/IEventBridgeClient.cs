// This file is auto-generated, don't edit it. Thanks.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks;

using Tea;
using Tea.Utils;

using AlibabaCloud.SDK.EventBridge.Models;

namespace AlibabaCloud.SDK.EventBridge
{
    public interface IEventBridgeClient 
    {
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
        Dictionary<string, object> DoRequest(string action, string protocol, string method, string pathname, Dictionary<string, string> query, object body, Dictionary<string, string> headers, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);
        /**
         * Publish event to the aliyun EventBus
         */
        PutEventsResponse PutEvents(List<CloudEvent> eventList);

        /**
         * Publish event to the aliyun EventBus
         */
        PutEventsResponse PutEventsWithOptions(List<CloudEvent> eventList, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Publish event to the aliyun specified account's event bus
         */
        PutEventsResponse PutEventsToAccount(string accoutid, List<CloudEvent> eventList);

        /**
         * Publish event to the aliyun specified account's event bus
         */
        PutEventsResponse PutEventsToAccountWithOptions(string accoutid, List<CloudEvent> eventList, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        CreateEventBusResponse CreateEventBus(CreateEventBusRequest request);

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        CreateEventBusResponse CreateEventBusWithOptions(CreateEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * List the aliyun official event source within your account
         */
        ListAliyunOfficialResponse ListAliyunOfficialEventSources(ListAliyunOfficialRequest request);

        /**
         * List the aliyun official event source within your account
         */
        ListAliyunOfficialResponse ListAliyunOfficialEventSourcesWithOptions(ListAliyunOfficialRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * List the user defined event source within your account
         */
        ListUserDefinedResponse ListUserDefinedEventSources(ListUserDefinedRequest request);

        /**
         * List the user defined event source within your account
         */
        ListUserDefinedResponse ListUserDefinedEventSourcesWithOptions(ListUserDefinedRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        DeleteEventBusResponse DeleteEventBus(DeleteEventBusRequest request);

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        DeleteEventBusResponse DeleteEventBusWithOptions(DeleteEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Displays details about an event bus in your account
         */
        GetEventBusResponse GetEventBus(GetEventBusRequest request);

        /**
         * Displays details about an event bus in your account
         */
        GetEventBusResponse GetEventBusWithOptions(GetEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        ListEventBusesResponse ListEventBuses(ListEventBusesRequest request);

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        ListEventBusesResponse ListEventBusesWithOptions(ListEventBusesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Create an EventBus rule on Aliyun
         */
        CreateRuleResponse CreateRule(CreateRuleRequest request);

        /**
         * Create an EventBus rule on Aliyun
         */
        CreateRuleResponse CreateRuleWithOptions(CreateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Deletes the specified rule.
         */
        DeleteRuleResponse DeleteRule(DeleteRuleRequest request);

        /**
         * Deletes the specified rule.
         */
        DeleteRuleResponse DeleteRuleWithOptions(DeleteRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Disables the specified rule
         */
        DisableRuleResponse DisableRule(DisableRuleRequest request);

        /**
         * Disables the specified rule
         */
        DisableRuleResponse DisableRuleWithOptions(DisableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Enables the specified rule
         */
        EnableRuleResponse EnableRule(EnableRuleRequest request);

        /**
         * Enables the specified rule
         */
        EnableRuleResponse EnableRuleWithOptions(EnableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Describes the specified rule
         */
        GetRuleResponse GetRule(GetRuleRequest request);

        /**
         * Describes the specified rule
         */
        GetRuleResponse GetRuleWithOptions(GetRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * List all the rules which meet the search criteria
         */
        ListRulesResponse ListRules(ListRulesRequest request);

        /**
         * List all the rules which meet the search criteria
         */
        ListRulesResponse ListRulesWithOptions(ListRulesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * update the specified rule.
         */
        UpdateRuleResponse UpdateRule(UpdateRuleRequest request);

        /**
         * update the specified rule.
         */
        UpdateRuleResponse UpdateRuleWithOptions(UpdateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Adds the specified targets to the specified rule
         */
        CreateTargetsResponse CreateTargets(CreateTargetsRequest request);

        /**
         * Adds the specified targets to the specified rule
         */
        CreateTargetsResponse CreateTargetsWithOptions(CreateTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Delete the specified targets from the specified rule
         */
        DeleteTargetsResponse DeleteTargets(DeleteTargetsRequest request);

        /**
         * Delete the specified targets from the specified rule
         */
        DeleteTargetsResponse DeleteTargetsWithOptions(DeleteTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * List all the Targets which meet the search criteria
         */
        ListTargetsResponse ListTargets(ListTargetsRequest request);

        /**
         * List all the Targets which meet the search criteria
         */
        ListTargetsResponse ListTargetsWithOptions(ListTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        TestEventPatternResponse TestEventPattern(TestEventPatternRequest request);

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        TestEventPatternResponse TestEventPatternWithOptions(TestEventPatternRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);

        /**
         * Check the activation status of EventBridge service for a given user
         */
        QueryEventBridgeStatusResponse QueryEventBridgeStatus(QueryEventBridgeStatusRequest request);

        /**
         * Check the activation status of EventBridge service for a given user
         */
        QueryEventBridgeStatusResponse QueryEventBridgeStatusWithOptions(QueryEventBridgeStatusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime);
   }
}
