// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge;

import com.aliyun.tea.*;
import com.aliyun.eventbridge.models.*;
import com.aliyun.tea.interceptor.InterceptorChain;
import com.aliyun.tea.interceptor.RequestInterceptor;
import com.aliyun.tea.interceptor.ResponseInterceptor;
import com.aliyun.tea.interceptor.RuntimeOptionsInterceptor;
import com.aliyun.teautil.*;
import com.aliyun.teautil.models.*;
import com.aliyun.eventbridge.base.*;
import com.aliyun.credentials.*;
import com.aliyun.credentials.models.*;

public class EventBridgeClient implements EventBridge {
    private final static InterceptorChain interceptorChain = InterceptorChain.create();
    public String _protocol;
    public Integer _readTimeout;
    public Integer _connectTimeout;
    public String _httpProxy;
    public String _httpsProxy;
    public String _noProxy;
    public Integer _maxIdleConns;
    public String _endpoint;
    public String _regionId;
    public com.aliyun.credentials.Client _credential;
    /**
     * Init client with Config
     * @param config config contains the necessary information to create a client
     */
    public EventBridgeClient(com.aliyun.eventbridge.models.Config config) {
        if (com.aliyun.teautil.Common.isUnset(TeaModel.buildMap(config))) {
            throw new TeaException(TeaConverter.buildMap(
                new TeaPair("code", "ParameterMissing"),
                new TeaPair("message", "'config' can not be unset")
            ));
        }

        com.aliyun.teautil.Common.validateModel(config);
        if (!com.aliyun.teautil.Common.empty(config.accessKeyId) && !com.aliyun.teautil.Common.empty(config.accessKeySecret)) {
            String credentialType = "access_key";
            if (!com.aliyun.teautil.Common.empty(config.securityToken)) {
                credentialType = "sts";
            }

            com.aliyun.credentials.models.Config credentialConfig = com.aliyun.credentials.models.Config.build(TeaConverter.buildMap(
                new TeaPair("accessKeyId", config.accessKeyId),
                new TeaPair("type", credentialType),
                new TeaPair("accessKeySecret", config.accessKeySecret),
                new TeaPair("securityToken", config.securityToken)
            ));
            this._credential = new com.aliyun.credentials.Client(credentialConfig);
        } else if (!com.aliyun.teautil.Common.isUnset(config.credential)) {
            this._credential = config.credential;
        } else {
            throw new TeaException(TeaConverter.buildMap(
                new TeaPair("code", "ParameterMissing"),
                new TeaPair("message", "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset")
            ));
        }

        if (com.aliyun.teautil.Common.empty(config.endpoint)) {
            throw new TeaException(TeaConverter.buildMap(
                new TeaPair("code", "ParameterMissing"),
                new TeaPair("message", "'endpoint' can not be unset")
            ));
        }

        if (com.aliyun.eventbridge.base.EventBridgeUtil.startWith(config.endpoint, "http") || com.aliyun.eventbridge.base.EventBridgeUtil.startWith(config.endpoint, "https")) {
            throw new TeaException(TeaConverter.buildMap(
                new TeaPair("code", "ParameterError"),
                new TeaPair("message", "'endpoint' shouldn't start with 'http' or 'https'")
            ));
        }

        this._regionId = config.regionId;
        this._protocol = config.protocol;
        this._endpoint = config.endpoint;
        this._readTimeout = config.readTimeout;
        this._connectTimeout = config.connectTimeout;
        this._httpProxy = config.httpProxy;
        this._httpsProxy = config.httpsProxy;
        this._maxIdleConns = config.maxIdleConns;
    }

    @Override
    public java.util.Map<String, ?> doRequest(String action, String protocol, String method, String pathname, java.util.Map<String, String> query, Object body, RuntimeOptions runtime) {
        java.util.Map<String, Object> runtime_ = TeaConverter.buildMap(
            new TeaPair("timeouted", "retry"),
            new TeaPair("readTimeout", com.aliyun.teautil.Common.defaultNumber(runtime.readTimeout, _readTimeout)),
            new TeaPair("connectTimeout", com.aliyun.teautil.Common.defaultNumber(runtime.connectTimeout, _connectTimeout)),
            new TeaPair("httpProxy", com.aliyun.teautil.Common.defaultString(runtime.httpProxy, _httpProxy)),
            new TeaPair("httpsProxy", com.aliyun.teautil.Common.defaultString(runtime.httpsProxy, _httpsProxy)),
            new TeaPair("noProxy", com.aliyun.teautil.Common.defaultString(runtime.noProxy, _noProxy)),
            new TeaPair("maxIdleConns", com.aliyun.teautil.Common.defaultNumber(runtime.maxIdleConns, _maxIdleConns)),
            new TeaPair("retry", TeaConverter.buildMap(
                new TeaPair("retryable", runtime.autoretry),
                new TeaPair("maxAttempts", com.aliyun.teautil.Common.defaultNumber(runtime.maxAttempts, 3))
            )),
            new TeaPair("backoff", TeaConverter.buildMap(
                new TeaPair("policy", com.aliyun.teautil.Common.defaultString(runtime.backoffPolicy, "no")),
                new TeaPair("period", com.aliyun.teautil.Common.defaultNumber(runtime.backoffPeriod, 1))
            )),
            new TeaPair("ignoreSSL", runtime.ignoreSSL)
        );

        TeaRequest _lastRequest = null;
        long _now = System.currentTimeMillis();
        int _retryTimes = 0;
        while (Tea.allowRetry((java.util.Map<String, Object>) runtime_.get("retry"), _retryTimes, _now)) {
            if (_retryTimes > 0) {
                int backoffTime = Tea.getBackoffTime(runtime_.get("backoff"), _retryTimes);
                if (backoffTime > 0) {
                    Tea.sleep(backoffTime);
                }
            }
            _retryTimes = _retryTimes + 1;
            try {
                TeaRequest request_ = new TeaRequest();
                request_.protocol = com.aliyun.teautil.Common.defaultString(_protocol, protocol);
                request_.method = method;
                request_.pathname = pathname;
                request_.headers = TeaConverter.buildMap(
                    new TeaPair("date", com.aliyun.teautil.Common.getDateUTCString()),
                    new TeaPair("host", _endpoint),
                    new TeaPair("accept", "application/json"),
                    new TeaPair("x-acs-signature-nonce", com.aliyun.teautil.Common.getNonce()),
                    new TeaPair("x-acs-signature-method", "HMAC-SHA1"),
                    new TeaPair("x-acs-signature-version", "1.0"),
                    new TeaPair("x-eventbridge-version", "2015-06-06"),
                    new TeaPair("user-agent", com.aliyun.teautil.Common.getUserAgent(" aliyun-eventbridge-sdk/1.2.0"))
                );
                if (!com.aliyun.teautil.Common.isUnset(_regionId)) {
                    request_.headers.put("x-eventbridge-regionId", _regionId);
                }

                if (!com.aliyun.teautil.Common.isUnset(body)) {
                    request_.body = Tea.toReadable(com.aliyun.teautil.Common.toJSONString(body));
                    request_.headers.put("content-type", "application/json; charset=utf-8");
                }

                if (com.aliyun.teautil.Common.equalString(action, "putEvents")) {
                    request_.headers.put("content-type", "application/cloudevents-batch+json; charset=utf-8");
                }

                if (!com.aliyun.teautil.Common.isUnset(query)) {
                    request_.query = query;
                }

                String accessKeyId = _credential.getAccessKeyId();
                String accessKeySecret = _credential.getAccessKeySecret();
                String securityToken = _credential.getSecurityToken();
                if (!com.aliyun.teautil.Common.empty(securityToken)) {
                    request_.headers.put("x-acs-accesskey-id", accessKeyId);
                    request_.headers.put("x-acs-security-token", securityToken);
                }

                String stringToSign = com.aliyun.eventbridge.base.EventBridgeUtil.getStringToSign(request_);
                request_.headers.put("authorization", "acs:" + accessKeyId + ":" + com.aliyun.eventbridge.base.EventBridgeUtil.getSignature(stringToSign, accessKeySecret) + "");
                _lastRequest = request_;
                TeaResponse response_ = Tea.doAction(request_, runtime_);

                Object result = com.aliyun.teautil.Common.readAsJSON(response_.body);
                java.util.Map<String, Object> tmp = com.aliyun.teautil.Common.assertAsMap(result);
                if (com.aliyun.teautil.Common.is4xx(response_.statusCode) || com.aliyun.teautil.Common.is5xx(response_.statusCode)) {
                    throw new TeaException(TeaConverter.buildMap(
                        new TeaPair("code", tmp.get("code")),
                        new TeaPair("message", "[EventBridgeError-" + tmp.get("requestId") + "] " + tmp.get("message") + ""),
                        new TeaPair("data", tmp)
                    ));
                }

                return tmp;
            } catch (Exception e) {
                if (Tea.isRetryable(e)) {
                    continue;
                }
                if (e instanceof TeaException) {
                    throw e;
                }
                throw new TeaException(e.getMessage(), e);
            }
        }

        throw new TeaUnretryableException(_lastRequest);
    }

    /**
     * Publish event to the aliyun EventBus
     */
    @Override
    public PutEventsResponse putEvents(java.util.List<CloudEvent> eventList) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.putEventsWithOptions(eventList, runtime);
    }

    /**
     * Publish event to the aliyun EventBus
     */
    @Override
    public PutEventsResponse putEventsWithOptions(java.util.List<CloudEvent> eventList, RuntimeOptions runtime) {
        for (CloudEvent cloudEvent : eventList) {
            if (com.aliyun.teautil.Common.isUnset(cloudEvent.specversion)) {
                cloudEvent.specversion = "1.0";
            }

            if (com.aliyun.teautil.Common.isUnset(cloudEvent.datacontenttype)) {
                cloudEvent.datacontenttype = "application/json; charset=utf-8";
            }

            com.aliyun.teautil.Common.validateModel(cloudEvent);
        }
        Object body = com.aliyun.eventbridge.base.EventBridgeUtil.serialize(eventList);
        return TeaModel.toModel(this.doRequest("putEvents", "HTTP", "POST", "/openapi/putEvents", null, body, runtime), new PutEventsResponse());
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    @Override
    public CreateEventBusResponse createEventBus(CreateEventBusRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.createEventBusWithOptions(request, runtime);
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    @Override
    public CreateEventBusResponse createEventBusWithOptions(CreateEventBusRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createEventBus", "HTTP", "POST", "/openapi/createEventBus", null, TeaModel.buildMap(request), runtime), new CreateEventBusResponse());
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    @Override
    public DeleteEventBusResponse deleteEventBus(DeleteEventBusRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.deleteEventBusWithOptions(request, runtime);
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    @Override
    public DeleteEventBusResponse deleteEventBusWithOptions(DeleteEventBusRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteEventBus", "HTTP", "POST", "/openapi/deleteEventBus", null, TeaModel.buildMap(request), runtime), new DeleteEventBusResponse());
    }

    /**
     * Displays details about an event bus in your account
     */
    @Override
    public GetEventBusResponse getEventBus(GetEventBusRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.getEventBusWithOptions(request, runtime);
    }

    /**
     * Displays details about an event bus in your account
     */
    @Override
    public GetEventBusResponse getEventBusWithOptions(GetEventBusRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("getEventBus", "HTTP", "POST", "/openapi/getEventBus", null, TeaModel.buildMap(request), runtime), new GetEventBusResponse());
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    @Override
    public ListEventBusesResponse listEventBuses(ListEventBusesRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listEventBusesWithOptions(request, runtime);
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    @Override
    public ListEventBusesResponse listEventBusesWithOptions(ListEventBusesRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listEventBuses", "HTTP", "POST", "/openapi/listEventBuses", null, TeaModel.buildMap(request), runtime), new ListEventBusesResponse());
    }

    /**
     * Create an EventBus rule on Aliyun
     */
    @Override
    public CreateRuleResponse createRule(CreateRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.createRuleWithOptions(request, runtime);
    }

    /**
     * Create an EventBus rule on Aliyun
     */
    @Override
    public CreateRuleResponse createRuleWithOptions(CreateRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createRule", "HTTP", "POST", "/openapi/createRule", null, TeaModel.buildMap(request), runtime), new CreateRuleResponse());
    }

    /**
     * Deletes the specified rule.
     */
    @Override
    public DeleteRuleResponse deleteRule(DeleteRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.deleteRuleWithOptions(request, runtime);
    }

    /**
     * Deletes the specified rule.
     */
    @Override
    public DeleteRuleResponse deleteRuleWithOptions(DeleteRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteRule", "HTTP", "POST", "/openapi/deleteRule", null, TeaModel.buildMap(request), runtime), new DeleteRuleResponse());
    }

    /**
     * Disables the specified rule
     */
    @Override
    public DisableRuleResponse disableRule(DisableRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.disableRuleWithOptions(request, runtime);
    }

    /**
     * Disables the specified rule
     */
    @Override
    public DisableRuleResponse disableRuleWithOptions(DisableRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("disableRule", "HTTP", "POST", "/openapi/disableRule", null, TeaModel.buildMap(request), runtime), new DisableRuleResponse());
    }

    /**
     * Enables the specified rule
     */
    @Override
    public EnableRuleResponse enableRule(EnableRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.enableRuleWithOptions(request, runtime);
    }

    /**
     * Enables the specified rule
     */
    @Override
    public EnableRuleResponse enableRuleWithOptions(EnableRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("enableRule", "HTTP", "POST", "/openapi/enableRule", null, TeaModel.buildMap(request), runtime), new EnableRuleResponse());
    }

    /**
     * Describes the specified rule
     */
    @Override
    public GetRuleResponse getRule(GetRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.getRuleWithOptions(request, runtime);
    }

    /**
     * Describes the specified rule
     */
    @Override
    public GetRuleResponse getRuleWithOptions(GetRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("getRule", "HTTP", "POST", "/openapi/getRule", null, TeaModel.buildMap(request), runtime), new GetRuleResponse());
    }

    /**
     * List all the rules which meet the search criteria
     */
    @Override
    public ListRulesResponse listRules(ListRulesRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listRulesWithOptions(request, runtime);
    }

    /**
     * List all the rules which meet the search criteria
     */
    @Override
    public ListRulesResponse listRulesWithOptions(ListRulesRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listRules", "HTTP", "POST", "/openapi/listRules", null, TeaModel.buildMap(request), runtime), new ListRulesResponse());
    }

    /**
     * update the specified rule.
     */
    @Override
    public UpdateRuleResponse updateRule(UpdateRuleRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.updateRuleWithOptions(request, runtime);
    }

    /**
     * update the specified rule.
     */
    @Override
    public UpdateRuleResponse updateRuleWithOptions(UpdateRuleRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("updateRule", "HTTP", "POST", "/openapi/updateRule", null, TeaModel.buildMap(request), runtime), new UpdateRuleResponse());
    }

    /**
     * Adds the specified targets to the specified rule
     */
    @Override
    public CreateTargetsResponse createTargets(CreateTargetsRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.createTargetsWithOptions(request, runtime);
    }

    /**
     * Adds the specified targets to the specified rule
     */
    @Override
    public CreateTargetsResponse createTargetsWithOptions(CreateTargetsRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createTargets", "HTTP", "POST", "/openapi/createTargets", null, TeaModel.buildMap(request), runtime), new CreateTargetsResponse());
    }

    /**
     * Delete the specified targets from the specified rule
     */
    @Override
    public DeleteTargetsResponse deleteTargets(DeleteTargetsRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.deleteTargetsWithOptions(request, runtime);
    }

    /**
     * Delete the specified targets from the specified rule
     */
    @Override
    public DeleteTargetsResponse deleteTargetsWithOptions(DeleteTargetsRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteTargets", "HTTP", "POST", "/openapi/deleteTargets", null, TeaModel.buildMap(request), runtime), new DeleteTargetsResponse());
    }

    /**
     * List all the Targets which meet the search criteria
     */
    @Override
    public ListTargetsResponse listTargets(ListTargetsRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listTargetsWithOptions(request, runtime);
    }

    /**
     * List all the Targets which meet the search criteria
     */
    @Override
    public ListTargetsResponse listTargetsWithOptions(ListTargetsRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listTargets", "HTTP", "POST", "/openapi/listTargets", null, TeaModel.buildMap(request), runtime), new ListTargetsResponse());
    }

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    @Override
    public TestEventPatternResponse testEventPattern(TestEventPatternRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.testEventPatternWithOptions(request, runtime);
    }

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    @Override
    public TestEventPatternResponse testEventPatternWithOptions(TestEventPatternRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("testEventPattern", "HTTP", "POST", "/openapi/testEventPattern", null, TeaModel.buildMap(request), runtime), new TestEventPatternResponse());
    }

    /**
     * TQuery the event traces by the event Id.
     */
    @Override
    public QueryEventTracesResponse queryEventTraces(QueryEventTracesRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.queryEventTracesWithOptions(request, runtime);
    }

    /**
     * Query the event traces by the event Id.
     */
    @Override
    public QueryEventTracesResponse queryEventTracesWithOptions(QueryEventTracesRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("queryEventTraces", "HTTP", "POST", "/openapi/queryEventTraces", null, TeaModel.buildMap(request), runtime), new QueryEventTracesResponse());
    }

    /**
     * Query the event traces by the event Id.
     */
    @Override
    public QueryEventByEventIdResponse queryEventByEventId(QueryEventByEventIdRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.queryEventByEventIdWithOptions(request, runtime);
    }

    /**
     * Query the event traces by the event Id.
     */
    @Override
    public QueryEventByEventIdResponse queryEventByEventIdWithOptions(QueryEventByEventIdRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("queryEventByEventId", "HTTP", "POST", "/openapi/queryEventByEventId", null, TeaModel.buildMap(request), runtime), new QueryEventByEventIdResponse());
    }

    /**
     * Query the event traces by the event period.
     */
    @Override
    public QueryEventsByPeriodResponse queryEventsByPeriod(QueryEventsByPeriodRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.queryEventsByPeriodWithOptions(request, runtime);
    }

    /**
     * Query the event traces by the event period.
     */
    @Override
    public QueryEventsByPeriodResponse queryEventsByPeriodWithOptions(QueryEventsByPeriodRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("queryEventsByPeriod", "HTTP", "POST", "/openapi/queryEventsByPeriod", null, TeaModel.buildMap(request), runtime), new QueryEventsByPeriodResponse());
    }

    public void addRuntimeOptionsInterceptor(RuntimeOptionsInterceptor interceptor) {
        interceptorChain.addRuntimeOptionsInterceptor(interceptor);
    }

    public void addRequestInterceptor(RequestInterceptor interceptor) {
        interceptorChain.addRequestInterceptor(interceptor);
    }

    public void addResponseInterceptor(ResponseInterceptor interceptor) {
        interceptorChain.addResponseInterceptor(interceptor);
    }

    /**
     * Creates a new event source within your account
     */
    @Override
    public CreateEventSourceResponse createEventSource(CreateEventSourceRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.createEventSourceWithOptions(request, runtime);
    }

    /**
     * Creates a new event source within your account
     */
    @Override
    public CreateEventSourceResponse createEventSourceWithOptions(CreateEventSourceRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createEventSource", "HTTP", "POST", "/openapi/v2/createEventSource", null, TeaModel.buildMap(request), runtime), new CreateEventSourceResponse());
    }

    /**
     * Delete the event source
     */
    @Override
    public DeleteEventSourceResponse deleteEventSource(DeleteEventSourceRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.deleteEventSourceWithOptions(request, runtime);
    }

    /**
     * Delete the event source
     */
    @Override
    public DeleteEventSourceResponse deleteEventSourceWithOptions(DeleteEventSourceRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteEventSource", "HTTP", "POST", "/openapi/v2/deleteEventSource", null, TeaModel.buildMap(request), runtime), new DeleteEventSourceResponse());
    }

    /**
     * Update the event source
     */
    @Override
    public UpdateEventSourceResponse updateEventSource(UpdateEventSourceRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.updateEventSourceWithOptions(request, runtime);
    }

    /**
     * Update the event source
     */
    @Override
    public UpdateEventSourceResponse updateEventSourceWithOptions(UpdateEventSourceRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("updateEventSource", "HTTP", "POST", "/openapi/v2/updateEventSource", null, TeaModel.buildMap(request), runtime), new UpdateEventSourceResponse());
    }

    /**
     * List the user defined event source within your account
     */
    @Override
    public ListUserDefinedResponse listUserDefinedEventSources(ListUserDefinedRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listUserDefinedEventSourcesWithOptions(request, runtime);
    }

    /**
     * List the user defined event source within your account
     */
    @Override
    public ListUserDefinedResponse listUserDefinedEventSourcesWithOptions(ListUserDefinedRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listUserDefinedEventSources", "HTTP", "POST", "/openapi/v2/listUserDefinedEventSources", null, TeaModel.buildMap(request), runtime), new ListUserDefinedResponse());
    }

    /**
     * List the aliyun official event source within your account
     */
    @Override
    public ListAliyunOfficialResponse listAliyunOfficialEventSources(ListAliyunOfficialRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listAliyunOfficialEventSourcesWithOptions(request, runtime);
    }

    /**
     * List the aliyun official event source within your account
     */
    @Override
    public ListAliyunOfficialResponse listAliyunOfficialEventSourcesWithOptions(ListAliyunOfficialRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listAliyunOfficialEventSources", "HTTP", "POST", "/openapi/v2/listAliyunOfficialEventSources", null, TeaModel.buildMap(request), runtime), new ListAliyunOfficialResponse());
    }

    /**
     * Create event streaming procss
     */
    @Override
    public CreateEventStreamingResponse createEventStreaming(CreateEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.createEventStreamingWithOptions(request, runtime);
    }

    /**
     * Create event streaming procss
     */
    @Override
    public CreateEventStreamingResponse createEventStreamingWithOptions(CreateEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createEventStreaming", "HTTP", "POST", "/openapi/v2/createEventStreaming", null, TeaModel.buildMap(request), runtime), new CreateEventStreamingResponse());
    }

    /**
     * delete event streaming
     */
    @Override
    public DeleteEventStreamingResponse deleteEventStreaming(DeleteEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.deleteEventStreamingWithOptions(request, runtime);
    }

    /**
     * delete event streaming
     */
    @Override
    public DeleteEventStreamingResponse deleteEventStreamingWithOptions(DeleteEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteEventStreaming", "HTTP", "POST", "/openapi/v2/deleteEventStreaming", null, TeaModel.buildMap(request), runtime), new DeleteEventStreamingResponse());
    }

    /**
     * create event streaming
     */
    @Override
    public GetEventStreamingResponse getEventStreaming(GetEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.getEventStreamingWithOptions(request, runtime);
    }

    /**
     * create event streaming
     */
    @Override
    public GetEventStreamingResponse getEventStreamingWithOptions(GetEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("getEventStreaming", "HTTP", "POST", "/openapi/v2/getEventStreaming", null, TeaModel.buildMap(request), runtime), new GetEventStreamingResponse());
    }

    /**
     * List the metrics of event streaming
     */
    @Override
    public ListEventStreamingMetricsResponse listEventStreamingMetrics(ListEventStreamingMetricsRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listEventStreamingMetricsWithOptions(request, runtime);
    }

    /**
     * List the metrics of event streaming
     */
    @Override
    public ListEventStreamingMetricsResponse listEventStreamingMetricsWithOptions(ListEventStreamingMetricsRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listEventStreamingMetrics", "HTTP", "POST", "/openapi/v2/listEventStreamingMetrics", null, TeaModel.buildMap(request), runtime), new ListEventStreamingMetricsResponse());
    }

    /**
     * create event streaming
     */
    @Override
    public ListEventStreamingsResponse listEventStreamings(ListEventStreamingsRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.listEventStreamingsWithOptions(request, runtime);
    }

    /**
     * create event streaming
     */
    @Override
    public ListEventStreamingsResponse listEventStreamingsWithOptions(ListEventStreamingsRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listEventStreamings", "HTTP", "POST", "/openapi/v2/listEventStreamings", null, TeaModel.buildMap(request), runtime), new ListEventStreamingsResponse());
    }

    /**
     * delete event streaming
     */
    @Override
    public PauseEventStreamingResponse pauseEventStreaming(PauseEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.pauseEventStreamingWithOptions(request, runtime);
    }

    /**
     * delete event streaming
     */
    @Override
    public PauseEventStreamingResponse pauseEventStreamingWithOptions(PauseEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("startEventStreaming", "HTTP", "POST", "/openapi/v2/pauseEventStreaming", null, TeaModel.buildMap(request), runtime), new PauseEventStreamingResponse());
    }

    /**
     * create event streaming
     */
    @Override
    public StartEventStreamingResponse startEventStreaming(StartEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.startEventStreamingWithOptions(request, runtime);
    }

    /**
     * deprecated please use startEventStreamingWithOptions
     */
    @Override
    public StartEventStreamingResponse startEventStreamingsWithOptions(StartEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("startEventStreaming", "HTTP", "POST", "/openapi/v2/startEventStreaming", null, TeaModel.buildMap(request), runtime), new StartEventStreamingResponse());
    }

    /**
     * create event streaming
    */
    @Override
    public StartEventStreamingResponse startEventStreamingWithOptions(StartEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("startEventStreaming", "HTTP", "POST", "/openapi/v2/startEventStreaming", null, TeaModel.buildMap(request), runtime), new StartEventStreamingResponse());
    }

    /**
     * Update event streaming procss
     */
    @Override
    public UpdateEventStreamingResponse updateEventStreaming(UpdateEventStreamingRequest request) {
        RuntimeOptions runtime = new RuntimeOptions();
        return this.updateEventStreamingWithOptions(request, runtime);
    }

    /**
     * create event streaming
     */
    @Override
    public UpdateEventStreamingResponse updateEventStreamingWithOptions(UpdateEventStreamingRequest request, RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("updateEventStreaming", "HTTP", "POST", "/openapi/v2/updateEventStreaming", null, TeaModel.buildMap(request), runtime), new UpdateEventStreamingResponse());
    }
}
