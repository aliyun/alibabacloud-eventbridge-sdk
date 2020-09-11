// This file is auto-generated, don't edit it. Thanks.
package com.aliyun.eventbridge;

import com.aliyun.eventbridge.util.Serializer;
import com.aliyun.eventbridge.util.SignatureHelper;
import com.aliyun.tea.*;
import com.aliyun.eventbridge.models.*;

public class EventBridgeClient implements EventBridge {

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
    public EventBridgeClient(Config config) {
        if (com.aliyun.teautil.Common.isUnset(TeaModel.buildMap(config))) {
            throw new TeaException(TeaConverter.buildMap(
                new TeaPair("code", "ParameterMissing"),
                new TeaPair("message", "'config' can not be unset")
            ));
        }

        com.aliyun.teautil.Common.validateModel(config);
        if (!com.aliyun.teautil.Common.empty(config.accessKeyId) && !com.aliyun.teautil.Common.empty(config.accessKeySecret)) {
            if (!com.aliyun.teautil.Common.empty(config.securityToken)) {
                config.type = "sts";
            } else {
                config.type = "access_key";
            }

            com.aliyun.credentials.models.Config credentialConfig = com.aliyun.credentials.models.Config.build(TeaConverter.buildMap(
                new TeaPair("accessKeyId", config.accessKeyId),
                new TeaPair("type", config.type),
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

        this._regionId = config.regionId;
        this._protocol = config.protocol;
        this._endpoint = config.endpoint;
        this._readTimeout = config.readTimeout;
        this._connectTimeout = config.connectTimeout;
        this._httpProxy = config.httpProxy;
        this._httpsProxy = config.httpsProxy;
        this._maxIdleConns = config.maxIdleConns;
    }

    public java.util.Map<String, ?> doRequest(String action, String protocol, String method, String pathname, java.util.Map<String, String> query, Object body, com.aliyun.teautil.models.RuntimeOptions runtime) {
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
                    new TeaPair("user-agent", com.aliyun.teautil.Common.getUserAgent(" aliyun-eventbridge-sdk/1.1.0"))
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

                String stringToSign = SignatureHelper.getStringToSign(request_);
                request_.headers.put("authorization", "acs:" + accessKeyId + ":" + SignatureHelper.getSignature(stringToSign, accessKeySecret) + "");
                _lastRequest = request_;
                TeaResponse response_ = Tea.doAction(request_, runtime_);

                if (com.aliyun.teautil.Common.equalNumber(response_.statusCode, 204)) {
                    return TeaConverter.buildMap(
                        new TeaPair("requestId", response_.headers.get("x-eventbridge-request-id"))
                    );
                }

                Object result = com.aliyun.teautil.Common.readAsJSON(response_.body);
                java.util.Map<String, Object> tmp = com.aliyun.teautil.Common.assertAsMap(result);
                if (com.aliyun.teautil.Common.is4xx(response_.statusCode) || com.aliyun.teautil.Common.is5xx(response_.statusCode)) {
                    throw new TeaException(TeaConverter.buildMap(
                        new TeaPair("code", tmp.get("code")),
                        new TeaPair("message", "EventBridgeError" + tmp.get("message")),
                        new TeaPair("data", tmp)
                    ));
                }

                return TeaConverter.merge(Object.class,
                    TeaConverter.buildMap(
                        new TeaPair("requestId", response_.headers.get("x-eventbridge-request-id"))
                    ),
                    tmp
                );
            } catch (Exception e) {
                if (Tea.isRetryable(e)) {
                    continue;
                }
                throw new RuntimeException(e);
            }
        }

        throw new TeaUnretryableException(_lastRequest);
    }

    /**
     * Publish event to the aliyun EventBus
     */
    @Override
    public PutEventsResponse putEvents(java.util.List<CloudEvent> eventList) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.putEventsWithOptions(eventList, runtime);
    }

    /**
     * Publish event to the aliyun EventBus
     */
    @Override
    public PutEventsResponse putEventsWithOptions(java.util.List<CloudEvent> eventList, com.aliyun.teautil.models.RuntimeOptions runtime) {

        for (CloudEvent cloudEvent : eventList) {
            com.aliyun.teautil.Common.validateModel(cloudEvent);
        }
        Object body =Serializer.serialize(eventList);
        return TeaModel.toModel(this.doRequest("putEvents", "HTTP", "POST", "/openapi/putEvents", null, body, runtime), new PutEventsResponse());
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    @Override
    public CreateEventBusResponse createEventBus(CreateEventBusRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.createEventBusWithOptions(request, runtime);
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
     */
    @Override
    public CreateEventBusResponse createEventBusWithOptions(CreateEventBusRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createEventBus", "HTTP", "POST", "/openapi/createEventBus", null, TeaModel.buildMap(request), runtime), new CreateEventBusResponse());
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    @Override
    public DeleteEventBusResponse deleteEventBus(DeleteEventBusRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.deleteEventBusWithOptions(request, runtime);
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
     */
    @Override
    public DeleteEventBusResponse deleteEventBusWithOptions(DeleteEventBusRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteEventBus", "HTTP", "POST", "/openapi/deleteEventBus", null, TeaModel.buildMap(request), runtime), new DeleteEventBusResponse());
    }

    /**
     * Displays details about an event bus in your account
     */
    @Override
    public GetEventBusResponse getEventBus(GetEventBusRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.getEventBusWithOptions(request, runtime);
    }

    /**
     * Displays details about an event bus in your account
     */
    @Override
    public GetEventBusResponse getEventBusWithOptions(GetEventBusRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("getEventBus", "HTTP", "POST", "/openapi/getEventBus", null, TeaModel.buildMap(request), runtime), new GetEventBusResponse());
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    @Override
    public ListEventBusesResponse listEventBuses(ListEventBusesRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.listEventBusesWithOptions(request, runtime);
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     */
    @Override
    public ListEventBusesResponse listEventBusesWithOptions(ListEventBusesRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listEventBuses", "HTTP", "POST", "/openapi/listEventBuses", null, TeaModel.buildMap(request), runtime), new ListEventBusesResponse());
    }

    /**
     * Create an EventBus rule on Aliyun
     */
    @Override
    public CreateRuleResponse createRule(CreateRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.createRuleWithOptions(request, runtime);
    }

    /**
     * Create an EventBus rule on Aliyun
     */
    @Override
    public CreateRuleResponse createRuleWithOptions(CreateRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createRule", "HTTP", "POST", "/openapi/createRule", null, TeaModel.buildMap(request), runtime), new CreateRuleResponse());
    }

    /**
     * Deletes the specified rule.
     */
    @Override
    public DeleteRuleResponse deleteRule(DeleteRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.deleteRuleWithOptions(request, runtime);
    }

    /**
     * Deletes the specified rule.
     */
    @Override
    public DeleteRuleResponse deleteRuleWithOptions(DeleteRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteRule", "HTTP", "POST", "/openapi/deleteRule", null, TeaModel.buildMap(request), runtime), new DeleteRuleResponse());
    }

    /**
     * Disables the specified rule
     */
    @Override
    public DisableRuleResponse disableRule(DisableRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.disableRuleWithOptions(request, runtime);
    }

    /**
     * Disables the specified rule
     */
    @Override
    public DisableRuleResponse disableRuleWithOptions(DisableRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("disableRule", "HTTP", "POST", "/openapi/disableRule", null, TeaModel.buildMap(request), runtime), new DisableRuleResponse());
    }

    /**
     * Enables the specified rule
     */
    @Override
    public EnableRuleResponse enableRule(EnableRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.enableRuleWithOptions(request, runtime);
    }

    /**
     * Enables the specified rule
     */
    @Override
    public EnableRuleResponse enableRuleWithOptions(EnableRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("enableRule", "HTTP", "POST", "/openapi/enableRule", null, TeaModel.buildMap(request), runtime), new EnableRuleResponse());
    }

    /**
     * Describes the specified rule
     */
    @Override
    public GetRuleResponse getRule(GetRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.getRuleWithOptions(request, runtime);
    }

    /**
     * Describes the specified rule
     */
    @Override
    public GetRuleResponse getRuleWithOptions(GetRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("getRule", "HTTP", "POST", "/openapi/getRule", null, TeaModel.buildMap(request), runtime), new GetRuleResponse());
    }

    /**
     * List all the rules which meet the search criteria
     */
    @Override
    public ListRulesResponse listRules(ListRulesRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.listRulesWithOptions(request, runtime);
    }

    /**
     * List all the rules which meet the search criteria
     */
    @Override
    public ListRulesResponse listRulesWithOptions(ListRulesRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listRules", "HTTP", "POST", "/openapi/listRules", null, TeaModel.buildMap(request), runtime), new ListRulesResponse());
    }

    /**
     * update the specified rule.
     */
    @Override
    public UpdateRuleResponse updateRule(UpdateRuleRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.updateRuleWithOptions(request, runtime);
    }

    /**
     * update the specified rule.
     */
    @Override
    public UpdateRuleResponse updateRuleWithOptions(UpdateRuleRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("updateRule", "HTTP", "POST", "/openapi/updateRule", null, TeaModel.buildMap(request), runtime), new UpdateRuleResponse());
    }

    /**
     * Adds the specified targets to the specified rule
     */
    @Override
    public CreateTargetsResponse createTargets(CreateTargetsRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.createTargetsWithOptions(request, runtime);
    }

    /**
     * Adds the specified targets to the specified rule
     */
    @Override
    public CreateTargetsResponse createTargetsWithOptions(CreateTargetsRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("createTargets", "HTTP", "POST", "/openapi/createTargets", null, TeaModel.buildMap(request), runtime), new CreateTargetsResponse());
    }

    /**
     * Delete the specified targets from the specified rule
     */
    @Override
    public DeleteTargetsResponse deleteTargets(DeleteTargetsRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.deleteTargetsWithOptions(request, runtime);
    }

    /**
     * Delete the specified targets from the specified rule
     */
    @Override
    public DeleteTargetsResponse deleteTargetsWithOptions(DeleteTargetsRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("deleteTargets", "HTTP", "POST", "/openapi/deleteTargets", null, TeaModel.buildMap(request), runtime), new DeleteTargetsResponse());
    }

    /**
     * List all the Targets which meet the search criteria
     */
    @Override
    public ListTargetsResponse listTargets(ListTargetsRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.listTargetsWithOptions(request, runtime);
    }

    /**
     * List all the Targets which meet the search criteria
     */
    @Override
    public ListTargetsResponse listTargetsWithOptions(ListTargetsRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("listTargets", "HTTP", "POST", "/openapi/listTargets", null, TeaModel.buildMap(request), runtime), new ListTargetsResponse());
    }

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    @Override
    public TestEventPatternResponse testEventPattern(TestEventPatternRequest request) {
        com.aliyun.teautil.models.RuntimeOptions runtime = new com.aliyun.teautil.models.RuntimeOptions();
        return this.testEventPatternWithOptions(request, runtime);
    }

    /**
     * Tests whether the specified event pattern matches the provided event
     */
    @Override
    public TestEventPatternResponse testEventPatternWithOptions(TestEventPatternRequest request, com.aliyun.teautil.models.RuntimeOptions runtime) {
        com.aliyun.teautil.Common.validateModel(request);
        return TeaModel.toModel(this.doRequest("testEventPattern", "HTTP", "POST", "/openapi/testEventPattern", null, TeaModel.buildMap(request), runtime), new TestEventPatternResponse());
    }
}
