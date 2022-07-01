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
    public class EventBridgeClient : IEventBridgeClient
    {
        protected string _protocol;
        protected int? _readTimeout;
        protected int? _connectTimeout;
        protected string _httpProxy;
        protected string _httpsProxy;
        protected string _noProxy;
        protected int? _maxIdleConns;
        protected string _endpoint;
        protected string _regionId;
        protected Aliyun.Credentials.Client _credential;

        /**
         * Init client with Config
         * @param config config contains the necessary information to create a client
         */
        public EventBridgeClient(Config config)
        {
            if (AlibabaCloud.TeaUtil.Common.IsUnset(config.ToMap()))
            {
                throw new TeaException(new Dictionary<string, string>
                {
                    {"code", "ParameterMissing"},
                    {"message", "'config' can not be unset"},
                });
            }
            AlibabaCloud.TeaUtil.Common.ValidateModel(config);
            if (!AlibabaCloud.TeaUtil.Common.Empty(config.AccessKeyId) && !AlibabaCloud.TeaUtil.Common.Empty(config.AccessKeySecret))
            {
                string credentialType = "access_key";
                if (!AlibabaCloud.TeaUtil.Common.Empty(config.SecurityToken))
                {
                    credentialType = "sts";
                }
                Aliyun.Credentials.Models.Config credentialConfig = new Aliyun.Credentials.Models.Config
                {
                    AccessKeyId = config.AccessKeyId,
                    Type = credentialType,
                    AccessKeySecret = config.AccessKeySecret,
                    SecurityToken = config.SecurityToken,
                };
                this._credential = new Aliyun.Credentials.Client(credentialConfig);
            }
            else if (!AlibabaCloud.TeaUtil.Common.IsUnset(config.Credential))
            {
                this._credential = config.Credential;
            }
            else
            {
                throw new TeaException(new Dictionary<string, string>
                {
                    {"code", "ParameterMissing"},
                    {"message", "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset"},
                });
            }
            if (AlibabaCloud.TeaUtil.Common.Empty(config.Endpoint))
            {
                throw new TeaException(new Dictionary<string, string>
                {
                    {"code", "ParameterMissing"},
                    {"message", "'endpoint' can not be unset"},
                });
            }
            if (AlibabaCloud.EventBridgeUtil.Common.StartWith(config.Endpoint, "http") || AlibabaCloud.EventBridgeUtil.Common.StartWith(config.Endpoint, "https"))
            {
                throw new TeaException(new Dictionary<string, string>
                {
                    {"code", "ParameterError"},
                    {"message", "'endpoint' shouldn't start with 'http' or 'https'"},
                });
            }
            this._regionId = config.RegionId;
            this._protocol = config.Protocol;
            this._endpoint = config.Endpoint;
            this._readTimeout = config.ReadTimeout;
            this._connectTimeout = config.ConnectTimeout;
            this._httpProxy = config.HttpProxy;
            this._httpsProxy = config.HttpsProxy;
            this._maxIdleConns = config.MaxIdleConns;
        }

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
        public Dictionary<string, object> DoRequest(string action, string protocol, string method, string pathname, Dictionary<string, string> query, object body, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            Dictionary<string, object> runtime_ = new Dictionary<string, object>
            {
                {"timeouted", "retry"},
                {"readTimeout", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.ReadTimeout, _readTimeout)},
                {"connectTimeout", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.ConnectTimeout, _connectTimeout)},
                {"httpProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.HttpProxy, _httpProxy)},
                {"httpsProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.HttpsProxy, _httpsProxy)},
                {"noProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.NoProxy, _noProxy)},
                {"maxIdleConns", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.MaxIdleConns, _maxIdleConns)},
                {"retry", new Dictionary<string, object>
                {
                    {"retryable", runtime.Autoretry},
                    {"maxAttempts", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.MaxAttempts, 3)},
                }},
                {"backoff", new Dictionary<string, object>
                {
                    {"policy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.BackoffPolicy, "no")},
                    {"period", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.BackoffPeriod, 1)},
                }},
                {"ignoreSSL", runtime.IgnoreSSL},
            };

            TeaRequest _lastRequest = null;
            Exception _lastException = null;
            long _now = System.DateTime.Now.Millisecond;
            int _retryTimes = 0;
            while (TeaCore.AllowRetry((IDictionary) runtime_["retry"], _retryTimes, _now))
            {
                if (_retryTimes > 0)
                {
                    int backoffTime = TeaCore.GetBackoffTime((IDictionary)runtime_["backoff"], _retryTimes);
                    if (backoffTime > 0)
                    {
                        TeaCore.Sleep(backoffTime);
                    }
                }
                _retryTimes = _retryTimes + 1;
                try
                {
                    TeaRequest request_ = new TeaRequest();
                    request_.Protocol = AlibabaCloud.TeaUtil.Common.DefaultString(_protocol, protocol);
                    request_.Method = method;
                    request_.Pathname = pathname;
                    request_.Headers = new Dictionary<string, string>
                    {
                        {"date", AlibabaCloud.TeaUtil.Common.GetDateUTCString()},
                        {"host", _endpoint},
                        {"accept", "application/json"},
                        {"x-acs-signature-nonce", AlibabaCloud.TeaUtil.Common.GetNonce()},
                        {"x-acs-signature-method", "HMAC-SHA1"},
                        {"x-acs-signature-version", "1.0"},
                        {"x-eventbridge-version", "2015-06-06"},
                        {"user-agent", AlibabaCloud.TeaUtil.Common.GetUserAgent(" aliyun-eventbridge-sdk/1.2.0")},
                    };
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(_regionId))
                    {
                        request_.Headers["x-eventbridge-regionId"] = _regionId;
                    }
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(body))
                    {
                        request_.Body = TeaCore.BytesReadable(AlibabaCloud.TeaUtil.Common.ToJSONString(body));
                        request_.Headers["content-type"] = "application/json; charset=utf-8";
                    }
                    if (AlibabaCloud.TeaUtil.Common.EqualString(action, "putEvents"))
                    {
                        request_.Headers["content-type"] = "application/cloudevents-batch+json; charset=utf-8";
                    }
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(query))
                    {
                        request_.Query = query;
                    }
                    string accessKeyId = this._credential.GetAccessKeyId();
                    string accessKeySecret = this._credential.GetAccessKeySecret();
                    string securityToken = this._credential.GetSecurityToken();
                    if (!AlibabaCloud.TeaUtil.Common.Empty(securityToken))
                    {
                        request_.Headers["x-acs-accesskey-id"] = accessKeyId;
                        request_.Headers["x-acs-security-token"] = securityToken;
                    }
                    string stringToSign = AlibabaCloud.EventBridgeUtil.Common.GetStringToSign(request_);
                    request_.Headers["authorization"] = "acs:" + accessKeyId + ":" + AlibabaCloud.EventBridgeUtil.Common.GetSignature(stringToSign, accessKeySecret);
                    _lastRequest = request_;
                    TeaResponse response_ = TeaCore.DoAction(request_, runtime_);

                    object result = AlibabaCloud.TeaUtil.Common.ReadAsJSON(response_.Body);
                    Dictionary<string, object> tmp = AlibabaCloud.TeaUtil.Common.AssertAsMap(result);
                    if (AlibabaCloud.TeaUtil.Common.Is4xx(response_.StatusCode) || AlibabaCloud.TeaUtil.Common.Is5xx(response_.StatusCode))
                    {
                        throw new TeaException(new Dictionary<string, object>
                        {
                            {"code", tmp.Get("code")},
                            {"message", "[EventBridgeError-" + tmp.Get("requestId") + "] " + tmp.Get("message")},
                            {"data", tmp},
                        });
                    }
                    return tmp;
                }
                catch (Exception e)
                {
                    if (TeaCore.IsRetryable(e))
                    {
                        _lastException = e;
                        continue;
                    }
                    throw e;
                }
            }

            throw new TeaUnretryableException(_lastRequest, _lastException);
        }

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
        public async Task<Dictionary<string, object>> DoRequestAsync(string action, string protocol, string method, string pathname, Dictionary<string, string> query, object body, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            Dictionary<string, object> runtime_ = new Dictionary<string, object>
            {
                {"timeouted", "retry"},
                {"readTimeout", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.ReadTimeout, _readTimeout)},
                {"connectTimeout", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.ConnectTimeout, _connectTimeout)},
                {"httpProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.HttpProxy, _httpProxy)},
                {"httpsProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.HttpsProxy, _httpsProxy)},
                {"noProxy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.NoProxy, _noProxy)},
                {"maxIdleConns", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.MaxIdleConns, _maxIdleConns)},
                {"retry", new Dictionary<string, object>
                {
                    {"retryable", runtime.Autoretry},
                    {"maxAttempts", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.MaxAttempts, 3)},
                }},
                {"backoff", new Dictionary<string, object>
                {
                    {"policy", AlibabaCloud.TeaUtil.Common.DefaultString(runtime.BackoffPolicy, "no")},
                    {"period", AlibabaCloud.TeaUtil.Common.DefaultNumber(runtime.BackoffPeriod, 1)},
                }},
                {"ignoreSSL", runtime.IgnoreSSL},
            };

            TeaRequest _lastRequest = null;
            Exception _lastException = null;
            long _now = System.DateTime.Now.Millisecond;
            int _retryTimes = 0;
            while (TeaCore.AllowRetry((IDictionary) runtime_["retry"], _retryTimes, _now))
            {
                if (_retryTimes > 0)
                {
                    int backoffTime = TeaCore.GetBackoffTime((IDictionary)runtime_["backoff"], _retryTimes);
                    if (backoffTime > 0)
                    {
                        TeaCore.Sleep(backoffTime);
                    }
                }
                _retryTimes = _retryTimes + 1;
                try
                {
                    TeaRequest request_ = new TeaRequest();
                    request_.Protocol = AlibabaCloud.TeaUtil.Common.DefaultString(_protocol, protocol);
                    request_.Method = method;
                    request_.Pathname = pathname;
                    request_.Headers = new Dictionary<string, string>
                    {
                        {"date", AlibabaCloud.TeaUtil.Common.GetDateUTCString()},
                        {"host", _endpoint},
                        {"accept", "application/json"},
                        {"x-acs-signature-nonce", AlibabaCloud.TeaUtil.Common.GetNonce()},
                        {"x-acs-signature-method", "HMAC-SHA1"},
                        {"x-acs-signature-version", "1.0"},
                        {"x-eventbridge-version", "2015-06-06"},
                        {"user-agent", AlibabaCloud.TeaUtil.Common.GetUserAgent(" aliyun-eventbridge-sdk/1.2.0")},
                    };
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(_regionId))
                    {
                        request_.Headers["x-eventbridge-regionId"] = _regionId;
                    }
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(body))
                    {
                        request_.Body = TeaCore.BytesReadable(AlibabaCloud.TeaUtil.Common.ToJSONString(body));
                        request_.Headers["content-type"] = "application/json; charset=utf-8";
                    }
                    if (AlibabaCloud.TeaUtil.Common.EqualString(action, "putEvents"))
                    {
                        request_.Headers["content-type"] = "application/cloudevents-batch+json; charset=utf-8";
                    }
                    if (!AlibabaCloud.TeaUtil.Common.IsUnset(query))
                    {
                        request_.Query = query;
                    }
                    string accessKeyId = await this._credential.GetAccessKeyIdAsync();
                    string accessKeySecret = await this._credential.GetAccessKeySecretAsync();
                    string securityToken = await this._credential.GetSecurityTokenAsync();
                    if (!AlibabaCloud.TeaUtil.Common.Empty(securityToken))
                    {
                        request_.Headers["x-acs-accesskey-id"] = accessKeyId;
                        request_.Headers["x-acs-security-token"] = securityToken;
                    }
                    string stringToSign = AlibabaCloud.EventBridgeUtil.Common.GetStringToSign(request_);
                    request_.Headers["authorization"] = "acs:" + accessKeyId + ":" + AlibabaCloud.EventBridgeUtil.Common.GetSignature(stringToSign, accessKeySecret);
                    _lastRequest = request_;
                    TeaResponse response_ = await TeaCore.DoActionAsync(request_, runtime_);

                    object result = AlibabaCloud.TeaUtil.Common.ReadAsJSON(response_.Body);
                    Dictionary<string, object> tmp = AlibabaCloud.TeaUtil.Common.AssertAsMap(result);
                    if (AlibabaCloud.TeaUtil.Common.Is4xx(response_.StatusCode) || AlibabaCloud.TeaUtil.Common.Is5xx(response_.StatusCode))
                    {
                        throw new TeaException(new Dictionary<string, object>
                        {
                            {"code", tmp.Get("code")},
                            {"message", "[EventBridgeError-" + tmp.Get("requestId") + "] " + tmp.Get("message")},
                            {"data", tmp},
                        });
                    }
                    return tmp;
                }
                catch (Exception e)
                {
                    if (TeaCore.IsRetryable(e))
                    {
                        _lastException = e;
                        continue;
                    }
                    throw e;
                }
            }

            throw new TeaUnretryableException(_lastRequest, _lastException);
        }

        /**
         * Publish event to the aliyun EventBus
         */
        public PutEventsResponse PutEvents(List<CloudEvent> eventList)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return PutEventsWithOptions(eventList, runtime);
        }

        /**
         * Publish event to the aliyun EventBus
         */
        public async Task<PutEventsResponse> PutEventsAsync(List<CloudEvent> eventList)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await PutEventsWithOptionsAsync(eventList, runtime);
        }

        /**
         * Publish event to the aliyun EventBus
         */
        public PutEventsResponse PutEventsWithOptions(List<CloudEvent> eventList, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {

            foreach (var cloudEvent in eventList) {
                if (AlibabaCloud.TeaUtil.Common.IsUnset(cloudEvent.Specversion))
                {
                    cloudEvent.Specversion = "1.0";
                }
                if (AlibabaCloud.TeaUtil.Common.IsUnset(cloudEvent.Datacontenttype))
                {
                    cloudEvent.Datacontenttype = "application/json; charset=utf-8";
                }
                AlibabaCloud.TeaUtil.Common.ValidateModel(cloudEvent);
            }
            object body = AlibabaCloud.EventBridgeUtil.Common.Serialize(eventList);
            return TeaModel.ToObject<PutEventsResponse>(DoRequest("putEvents", "HTTP", "POST", "/openapi/putEvents", null, body, runtime));
        }

        /**
         * Publish event to the aliyun EventBus
         */
        public async Task<PutEventsResponse> PutEventsWithOptionsAsync(List<CloudEvent> eventList, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {

            foreach (var cloudEvent in eventList) {
                if (AlibabaCloud.TeaUtil.Common.IsUnset(cloudEvent.Specversion))
                {
                    cloudEvent.Specversion = "1.0";
                }
                if (AlibabaCloud.TeaUtil.Common.IsUnset(cloudEvent.Datacontenttype))
                {
                    cloudEvent.Datacontenttype = "application/json; charset=utf-8";
                }
                AlibabaCloud.TeaUtil.Common.ValidateModel(cloudEvent);
            }
            object body = AlibabaCloud.EventBridgeUtil.Common.Serialize(eventList);
            return TeaModel.ToObject<PutEventsResponse>(await DoRequestAsync("putEvents", "HTTP", "POST", "/openapi/putEvents", null, body, runtime));
        }

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        public CreateEventBusResponse CreateEventBus(CreateEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return CreateEventBusWithOptions(request, runtime);
        }

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        public async Task<CreateEventBusResponse> CreateEventBusAsync(CreateEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await CreateEventBusWithOptionsAsync(request, runtime);
        }

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        public CreateEventBusResponse CreateEventBusWithOptions(CreateEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventBusResponse>(DoRequest("createEventBus", "HTTP", "POST", "/openapi/createEventBus", null, request.ToMap(), runtime));
        }

        /**
         * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
         */
        public async Task<CreateEventBusResponse> CreateEventBusWithOptionsAsync(CreateEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventBusResponse>(await DoRequestAsync("createEventBus", "HTTP", "POST", "/openapi/createEventBus", null, request.ToMap(), runtime));
        }

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        public DeleteEventBusResponse DeleteEventBus(DeleteEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DeleteEventBusWithOptions(request, runtime);
        }

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        public async Task<DeleteEventBusResponse> DeleteEventBusAsync(DeleteEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DeleteEventBusWithOptionsAsync(request, runtime);
        }

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        public DeleteEventBusResponse DeleteEventBusWithOptions(DeleteEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventBusResponse>(DoRequest("deleteEventBus", "HTTP", "POST", "/openapi/deleteEventBus", null, request.ToMap(), runtime));
        }

        /**
         * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
         */
        public async Task<DeleteEventBusResponse> DeleteEventBusWithOptionsAsync(DeleteEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventBusResponse>(await DoRequestAsync("deleteEventBus", "HTTP", "POST", "/openapi/deleteEventBus", null, request.ToMap(), runtime));
        }

        /**
         * Displays details about an event bus in your account
         */
        public GetEventBusResponse GetEventBus(GetEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return GetEventBusWithOptions(request, runtime);
        }

        /**
         * Displays details about an event bus in your account
         */
        public async Task<GetEventBusResponse> GetEventBusAsync(GetEventBusRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await GetEventBusWithOptionsAsync(request, runtime);
        }

        /**
         * Displays details about an event bus in your account
         */
        public GetEventBusResponse GetEventBusWithOptions(GetEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetEventBusResponse>(DoRequest("getEventBus", "HTTP", "POST", "/openapi/getEventBus", null, request.ToMap(), runtime));
        }

        /**
         * Displays details about an event bus in your account
         */
        public async Task<GetEventBusResponse> GetEventBusWithOptionsAsync(GetEventBusRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetEventBusResponse>(await DoRequestAsync("getEventBus", "HTTP", "POST", "/openapi/getEventBus", null, request.ToMap(), runtime));
        }

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        public ListEventBusesResponse ListEventBuses(ListEventBusesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListEventBusesWithOptions(request, runtime);
        }

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        public async Task<ListEventBusesResponse> ListEventBusesAsync(ListEventBusesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListEventBusesWithOptionsAsync(request, runtime);
        }

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        public ListEventBusesResponse ListEventBusesWithOptions(ListEventBusesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventBusesResponse>(DoRequest("listEventBuses", "HTTP", "POST", "/openapi/listEventBuses", null, request.ToMap(), runtime));
        }

        /**
         * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
         */
        public async Task<ListEventBusesResponse> ListEventBusesWithOptionsAsync(ListEventBusesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventBusesResponse>(await DoRequestAsync("listEventBuses", "HTTP", "POST", "/openapi/listEventBuses", null, request.ToMap(), runtime));
        }

        /**
         * Create an EventBus rule on Aliyun
         */
        public CreateRuleResponse CreateRule(CreateRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return CreateRuleWithOptions(request, runtime);
        }

        /**
         * Create an EventBus rule on Aliyun
         */
        public async Task<CreateRuleResponse> CreateRuleAsync(CreateRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await CreateRuleWithOptionsAsync(request, runtime);
        }

        /**
         * Create an EventBus rule on Aliyun
         */
        public CreateRuleResponse CreateRuleWithOptions(CreateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateRuleResponse>(DoRequest("createRule", "HTTP", "POST", "/openapi/createRule", null, request.ToMap(), runtime));
        }

        /**
         * Create an EventBus rule on Aliyun
         */
        public async Task<CreateRuleResponse> CreateRuleWithOptionsAsync(CreateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateRuleResponse>(await DoRequestAsync("createRule", "HTTP", "POST", "/openapi/createRule", null, request.ToMap(), runtime));
        }

        /**
         * Deletes the specified rule.
         */
        public DeleteRuleResponse DeleteRule(DeleteRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DeleteRuleWithOptions(request, runtime);
        }

        /**
         * Deletes the specified rule.
         */
        public async Task<DeleteRuleResponse> DeleteRuleAsync(DeleteRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DeleteRuleWithOptionsAsync(request, runtime);
        }

        /**
         * Deletes the specified rule.
         */
        public DeleteRuleResponse DeleteRuleWithOptions(DeleteRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteRuleResponse>(DoRequest("deleteRule", "HTTP", "POST", "/openapi/deleteRule", null, request.ToMap(), runtime));
        }

        /**
         * Deletes the specified rule.
         */
        public async Task<DeleteRuleResponse> DeleteRuleWithOptionsAsync(DeleteRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteRuleResponse>(await DoRequestAsync("deleteRule", "HTTP", "POST", "/openapi/deleteRule", null, request.ToMap(), runtime));
        }

        /**
         * Disables the specified rule
         */
        public DisableRuleResponse DisableRule(DisableRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DisableRuleWithOptions(request, runtime);
        }

        /**
         * Disables the specified rule
         */
        public async Task<DisableRuleResponse> DisableRuleAsync(DisableRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DisableRuleWithOptionsAsync(request, runtime);
        }

        /**
         * Disables the specified rule
         */
        public DisableRuleResponse DisableRuleWithOptions(DisableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DisableRuleResponse>(DoRequest("disableRule", "HTTP", "POST", "/openapi/disableRule", null, request.ToMap(), runtime));
        }

        /**
         * Disables the specified rule
         */
        public async Task<DisableRuleResponse> DisableRuleWithOptionsAsync(DisableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DisableRuleResponse>(await DoRequestAsync("disableRule", "HTTP", "POST", "/openapi/disableRule", null, request.ToMap(), runtime));
        }

        /**
         * Enables the specified rule
         */
        public EnableRuleResponse EnableRule(EnableRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return EnableRuleWithOptions(request, runtime);
        }

        /**
         * Enables the specified rule
         */
        public async Task<EnableRuleResponse> EnableRuleAsync(EnableRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await EnableRuleWithOptionsAsync(request, runtime);
        }

        /**
         * Enables the specified rule
         */
        public EnableRuleResponse EnableRuleWithOptions(EnableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<EnableRuleResponse>(DoRequest("enableRule", "HTTP", "POST", "/openapi/enableRule", null, request.ToMap(), runtime));
        }

        /**
         * Enables the specified rule
         */
        public async Task<EnableRuleResponse> EnableRuleWithOptionsAsync(EnableRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<EnableRuleResponse>(await DoRequestAsync("enableRule", "HTTP", "POST", "/openapi/enableRule", null, request.ToMap(), runtime));
        }

        /**
         * Describes the specified rule
         */
        public GetRuleResponse GetRule(GetRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return GetRuleWithOptions(request, runtime);
        }

        /**
         * Describes the specified rule
         */
        public async Task<GetRuleResponse> GetRuleAsync(GetRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await GetRuleWithOptionsAsync(request, runtime);
        }

        /**
         * Describes the specified rule
         */
        public GetRuleResponse GetRuleWithOptions(GetRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetRuleResponse>(DoRequest("getRule", "HTTP", "POST", "/openapi/getRule", null, request.ToMap(), runtime));
        }

        /**
         * Describes the specified rule
         */
        public async Task<GetRuleResponse> GetRuleWithOptionsAsync(GetRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetRuleResponse>(await DoRequestAsync("getRule", "HTTP", "POST", "/openapi/getRule", null, request.ToMap(), runtime));
        }

        /**
         * List all the rules which meet the search criteria
         */
        public ListRulesResponse ListRules(ListRulesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListRulesWithOptions(request, runtime);
        }

        /**
         * List all the rules which meet the search criteria
         */
        public async Task<ListRulesResponse> ListRulesAsync(ListRulesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListRulesWithOptionsAsync(request, runtime);
        }

        /**
         * List all the rules which meet the search criteria
         */
        public ListRulesResponse ListRulesWithOptions(ListRulesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListRulesResponse>(DoRequest("listRules", "HTTP", "POST", "/openapi/listRules", null, request.ToMap(), runtime));
        }

        /**
         * List all the rules which meet the search criteria
         */
        public async Task<ListRulesResponse> ListRulesWithOptionsAsync(ListRulesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListRulesResponse>(await DoRequestAsync("listRules", "HTTP", "POST", "/openapi/listRules", null, request.ToMap(), runtime));
        }

        /**
         * update the specified rule.
         */
        public UpdateRuleResponse UpdateRule(UpdateRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return UpdateRuleWithOptions(request, runtime);
        }

        /**
         * update the specified rule.
         */
        public async Task<UpdateRuleResponse> UpdateRuleAsync(UpdateRuleRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await UpdateRuleWithOptionsAsync(request, runtime);
        }

        /**
         * update the specified rule.
         */
        public UpdateRuleResponse UpdateRuleWithOptions(UpdateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateRuleResponse>(DoRequest("updateRule", "HTTP", "POST", "/openapi/updateRule", null, request.ToMap(), runtime));
        }

        /**
         * update the specified rule.
         */
        public async Task<UpdateRuleResponse> UpdateRuleWithOptionsAsync(UpdateRuleRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateRuleResponse>(await DoRequestAsync("updateRule", "HTTP", "POST", "/openapi/updateRule", null, request.ToMap(), runtime));
        }

        /**
         * Adds the specified targets to the specified rule
         */
        public CreateTargetsResponse CreateTargets(CreateTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return CreateTargetsWithOptions(request, runtime);
        }

        /**
         * Adds the specified targets to the specified rule
         */
        public async Task<CreateTargetsResponse> CreateTargetsAsync(CreateTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await CreateTargetsWithOptionsAsync(request, runtime);
        }

        /**
         * Adds the specified targets to the specified rule
         */
        public CreateTargetsResponse CreateTargetsWithOptions(CreateTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateTargetsResponse>(DoRequest("createTargets", "HTTP", "POST", "/openapi/createTargets", null, request.ToMap(), runtime));
        }

        /**
         * Adds the specified targets to the specified rule
         */
        public async Task<CreateTargetsResponse> CreateTargetsWithOptionsAsync(CreateTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateTargetsResponse>(await DoRequestAsync("createTargets", "HTTP", "POST", "/openapi/createTargets", null, request.ToMap(), runtime));
        }

        /**
         * Delete the specified targets from the specified rule
         */
        public DeleteTargetsResponse DeleteTargets(DeleteTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DeleteTargetsWithOptions(request, runtime);
        }

        /**
         * Delete the specified targets from the specified rule
         */
        public async Task<DeleteTargetsResponse> DeleteTargetsAsync(DeleteTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DeleteTargetsWithOptionsAsync(request, runtime);
        }

        /**
         * Delete the specified targets from the specified rule
         */
        public DeleteTargetsResponse DeleteTargetsWithOptions(DeleteTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteTargetsResponse>(DoRequest("deleteTargets", "HTTP", "POST", "/openapi/deleteTargets", null, request.ToMap(), runtime));
        }

        /**
         * Delete the specified targets from the specified rule
         */
        public async Task<DeleteTargetsResponse> DeleteTargetsWithOptionsAsync(DeleteTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteTargetsResponse>(await DoRequestAsync("deleteTargets", "HTTP", "POST", "/openapi/deleteTargets", null, request.ToMap(), runtime));
        }

        /**
         * List all the Targets which meet the search criteria
         */
        public ListTargetsResponse ListTargets(ListTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListTargetsWithOptions(request, runtime);
        }

        /**
         * List all the Targets which meet the search criteria
         */
        public async Task<ListTargetsResponse> ListTargetsAsync(ListTargetsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListTargetsWithOptionsAsync(request, runtime);
        }

        /**
         * List all the Targets which meet the search criteria
         */
        public ListTargetsResponse ListTargetsWithOptions(ListTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListTargetsResponse>(DoRequest("listTargets", "HTTP", "POST", "/openapi/listTargets", null, request.ToMap(), runtime));
        }

        /**
         * List all the Targets which meet the search criteria
         */
        public async Task<ListTargetsResponse> ListTargetsWithOptionsAsync(ListTargetsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListTargetsResponse>(await DoRequestAsync("listTargets", "HTTP", "POST", "/openapi/listTargets", null, request.ToMap(), runtime));
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public TestEventPatternResponse TestEventPattern(TestEventPatternRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return TestEventPatternWithOptions(request, runtime);
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public async Task<TestEventPatternResponse> TestEventPatternAsync(TestEventPatternRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await TestEventPatternWithOptionsAsync(request, runtime);
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public TestEventPatternResponse TestEventPatternWithOptions(TestEventPatternRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<TestEventPatternResponse>(DoRequest("testEventPattern", "HTTP", "POST", "/openapi/testEventPattern", null, request.ToMap(), runtime));
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public async Task<TestEventPatternResponse> TestEventPatternWithOptionsAsync(TestEventPatternRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<TestEventPatternResponse>(await DoRequestAsync("testEventPattern", "HTTP", "POST", "/openapi/testEventPattern", null, request.ToMap(), runtime));
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public QueryEventTracesResponse QueryEventTraces(QueryEventTracesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return QueryEventTracesWithOptions(request, runtime);
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public async Task<QueryEventTracesResponse> QueryEventTracesAsync(QueryEventTracesRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await QueryEventTracesWithOptionsAsync(request, runtime);
        }

        /**
         * Query the event traces by the event Id.
         */
        public QueryEventTracesResponse QueryEventTracesWithOptions(QueryEventTracesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventTracesResponse>(DoRequest("queryEventTraces", "HTTP", "POST", "/openapi/queryEventTraces", null, request.ToMap(), runtime));
        }

        /**
         * Query the event traces by the event Id.
         */
        public async Task<QueryEventTracesResponse> QueryEventTracesWithOptionsAsync(QueryEventTracesRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventTracesResponse>(await DoRequestAsync("queryEventTraces", "HTTP", "POST", "/openapi/queryEventTraces", null, request.ToMap(), runtime));
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public QueryEventByEventIdResponse QueryEventByEventId(QueryEventByEventIdRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return QueryEventByEventIdWithOptions(request, runtime);
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public async Task<QueryEventByEventIdResponse> QueryEventByEventIdAsync(QueryEventByEventIdRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await QueryEventByEventIdWithOptionsAsync(request, runtime);
        }

        /**
         * Query the event traces by the event Id.
         */
        public QueryEventByEventIdResponse QueryEventByEventIdWithOptions(QueryEventByEventIdRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventByEventIdResponse>(DoRequest("queryEventByEventId", "HTTP", "POST", "/openapi/queryEventByEventId", null, request.ToMap(), runtime));
        }

        /**
         * Query the event traces by the event Id.
         */
        public async Task<QueryEventByEventIdResponse> QueryEventByEventIdWithOptionsAsync(QueryEventByEventIdRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventByEventIdResponse>(await DoRequestAsync("queryEventByEventId", "HTTP", "POST", "/openapi/queryEventByEventId", null, request.ToMap(), runtime));
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public QueryEventsByPeriodResponse QueryEventsByPeriod(QueryEventsByPeriodRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return QueryEventsByPeriodWithOptions(request, runtime);
        }

        /**
         * Tests whether the specified event pattern matches the provided event
         */
        public async Task<QueryEventsByPeriodResponse> QueryEventsByPeriodAsync(QueryEventsByPeriodRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await QueryEventsByPeriodWithOptionsAsync(request, runtime);
        }

        /**
         * Query the event traces by the event Id.
         */
        public QueryEventsByPeriodResponse QueryEventsByPeriodWithOptions(QueryEventsByPeriodRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventsByPeriodResponse>(DoRequest("queryEventsByPeriod", "HTTP", "POST", "/openapi/queryEventsByPeriod", null, request.ToMap(), runtime));
        }

        /**
         * Query the event traces by the event Id.
         */
        public async Task<QueryEventsByPeriodResponse> QueryEventsByPeriodWithOptionsAsync(QueryEventsByPeriodRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<QueryEventsByPeriodResponse>(await DoRequestAsync("queryEventsByPeriod", "HTTP", "POST", "/openapi/queryEventsByPeriod", null, request.ToMap(), runtime));
        }

        /**
         * Creates a new event source within your account
         */
        public CreateEventSourceResponse CreateEventSource(CreateEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return CreateEventSourceWithOptions(request, runtime);
        }

        /**
         * Creates a new event source within your account
         */
        public async Task<CreateEventSourceResponse> CreateEventSourceAsync(CreateEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await CreateEventSourceWithOptionsAsync(request, runtime);
        }

        /**
         * Creates a new event source within your account
         */
        public CreateEventSourceResponse CreateEventSourceWithOptions(CreateEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventSourceResponse>(DoRequest("createEventSource", "HTTP", "POST", "/openapi/v2/createEventSource", null, request.ToMap(), runtime));
        }

        /**
         * Creates a new event source within your account
         */
        public async Task<CreateEventSourceResponse> CreateEventSourceWithOptionsAsync(CreateEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventSourceResponse>(await DoRequestAsync("createEventSource", "HTTP", "POST", "/openapi/v2/createEventSource", null, request.ToMap(), runtime));
        }

        /**
         * Delete the event source
         */
        public DeleteEventSourceResponse DeleteEventSource(DeleteEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DeleteEventSourceWithOptions(request, runtime);
        }

        /**
         * Delete the event source
         */
        public async Task<DeleteEventSourceResponse> DeleteEventSourceAsync(DeleteEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DeleteEventSourceWithOptionsAsync(request, runtime);
        }

        /**
         * Delete the event source
         */
        public DeleteEventSourceResponse DeleteEventSourceWithOptions(DeleteEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventSourceResponse>(DoRequest("deleteEventSource", "HTTP", "POST", "/openapi/v2/deleteEventSource", null, request.ToMap(), runtime));
        }

        /**
         * Delete the event source
         */
        public async Task<DeleteEventSourceResponse> DeleteEventSourceWithOptionsAsync(DeleteEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventSourceResponse>(await DoRequestAsync("deleteEventSource", "HTTP", "POST", "/openapi/v2/deleteEventSource", null, request.ToMap(), runtime));
        }

        /**
         * Update the event source
         */
        public UpdateEventSourceResponse UpdateEventSource(UpdateEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return UpdateEventSourceWithOptions(request, runtime);
        }

        /**
         * Update the event source
         */
        public async Task<UpdateEventSourceResponse> UpdateEventSourceAsync(UpdateEventSourceRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await UpdateEventSourceWithOptionsAsync(request, runtime);
        }

        /**
         * Update the event source
         */
        public UpdateEventSourceResponse UpdateEventSourceWithOptions(UpdateEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateEventSourceResponse>(DoRequest("updateEventSource", "HTTP", "POST", "/openapi/v2/updateEventSource", null, request.ToMap(), runtime));
        }

        /**
         * Update the event source
         */
        public async Task<UpdateEventSourceResponse> UpdateEventSourceWithOptionsAsync(UpdateEventSourceRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateEventSourceResponse>(await DoRequestAsync("updateEventSource", "HTTP", "POST", "/openapi/v2/updateEventSource", null, request.ToMap(), runtime));
        }

        /**
         * List the user defined event source within your account
         */
        public ListUserDefinedResponse ListUserDefinedEventSources(ListUserDefinedRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListUserDefinedEventSourcesWithOptions(request, runtime);
        }

        /**
         * List the user defined event source within your account
         */
        public async Task<ListUserDefinedResponse> ListUserDefinedEventSourcesAsync(ListUserDefinedRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListUserDefinedEventSourcesWithOptionsAsync(request, runtime);
        }

        /**
         * List the user defined event source within your account
         */
        public ListUserDefinedResponse ListUserDefinedEventSourcesWithOptions(ListUserDefinedRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListUserDefinedResponse>(DoRequest("listUserDefinedEventSources", "HTTP", "POST", "/openapi/v2/listUserDefinedEventSources", null, request.ToMap(), runtime));
        }

        /**
         * List the user defined event source within your account
         */
        public async Task<ListUserDefinedResponse> ListUserDefinedEventSourcesWithOptionsAsync(ListUserDefinedRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListUserDefinedResponse>(await DoRequestAsync("listUserDefinedEventSources", "HTTP", "POST", "/openapi/v2/listUserDefinedEventSources", null, request.ToMap(), runtime));
        }

        /**
         * List the aliyun official event source within your account
         */
        public ListAliyunOfficialResponse ListAliyunOfficialEventSources(ListAliyunOfficialRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListAliyunOfficialEventSourcesWithOptions(request, runtime);
        }

        /**
         * List the aliyun official event source within your account
         */
        public async Task<ListAliyunOfficialResponse> ListAliyunOfficialEventSourcesAsync(ListAliyunOfficialRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListAliyunOfficialEventSourcesWithOptionsAsync(request, runtime);
        }

        /**
         * List the aliyun official event source within your account
         */
        public ListAliyunOfficialResponse ListAliyunOfficialEventSourcesWithOptions(ListAliyunOfficialRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListAliyunOfficialResponse>(DoRequest("listAliyunOfficialEventSources", "HTTP", "POST", "/openapi/v2/listAliyunOfficialEventSources", null, request.ToMap(), runtime));
        }

        /**
         * List the aliyun official event source within your account
         */
        public async Task<ListAliyunOfficialResponse> ListAliyunOfficialEventSourcesWithOptionsAsync(ListAliyunOfficialRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListAliyunOfficialResponse>(await DoRequestAsync("listAliyunOfficialEventSources", "HTTP", "POST", "/openapi/v2/listAliyunOfficialEventSources", null, request.ToMap(), runtime));
        }

        /**
         * Create event streaming procss
         */
        public CreateEventStreamingResponse CreateEventStreaming(CreateEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return CreateEventStreamingWithOptions(request, runtime);
        }

        /**
         * Create event streaming procss
         */
        public async Task<CreateEventStreamingResponse> CreateEventStreamingAsync(CreateEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await CreateEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * Create event streaming procss
         */
        public CreateEventStreamingResponse CreateEventStreamingWithOptions(CreateEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventStreamingResponse>(DoRequest("createEventStreaming", "HTTP", "POST", "/openapi/v2/createEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * Create event streaming procss
         */
        public async Task<CreateEventStreamingResponse> CreateEventStreamingWithOptionsAsync(CreateEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<CreateEventStreamingResponse>(await DoRequestAsync("createEventStreaming", "HTTP", "POST", "/openapi/v2/createEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * delete event streaming
         */
        public DeleteEventStreamingResponse DeleteEventStreaming(DeleteEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return DeleteEventStreamingWithOptions(request, runtime);
        }

        /**
         * delete event streaming
         */
        public async Task<DeleteEventStreamingResponse> DeleteEventStreamingAsync(DeleteEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await DeleteEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * delete event streaming
         */
        public DeleteEventStreamingResponse DeleteEventStreamingWithOptions(DeleteEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventStreamingResponse>(DoRequest("deleteEventStreaming", "HTTP", "POST", "/openapi/v2/deleteEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * delete event streaming
         */
        public async Task<DeleteEventStreamingResponse> DeleteEventStreamingWithOptionsAsync(DeleteEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<DeleteEventStreamingResponse>(await DoRequestAsync("deleteEventStreaming", "HTTP", "POST", "/openapi/v2/deleteEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public GetEventStreamingResponse GetEventStreaming(GetEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return GetEventStreamingWithOptions(request, runtime);
        }

        /**
         * create event streaming
         */
        public async Task<GetEventStreamingResponse> GetEventStreamingAsync(GetEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await GetEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * create event streaming
         */
        public GetEventStreamingResponse GetEventStreamingWithOptions(GetEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetEventStreamingResponse>(DoRequest("getEventStreaming", "HTTP", "POST", "/openapi/v2/getEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public async Task<GetEventStreamingResponse> GetEventStreamingWithOptionsAsync(GetEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<GetEventStreamingResponse>(await DoRequestAsync("getEventStreaming", "HTTP", "POST", "/openapi/v2/getEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * List the metrics of event streaming
         */
        public ListEventStreamingMetricsResponse ListEventStreamingMetrics(ListEventStreamingMetricsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListEventStreamingMetricsWithOptions(request, runtime);
        }

        /**
         * List the metrics of event streaming
         */
        public async Task<ListEventStreamingMetricsResponse> ListEventStreamingMetricsAsync(ListEventStreamingMetricsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListEventStreamingMetricsWithOptionsAsync(request, runtime);
        }

        /**
         * List the metrics of event streaming
         */
        public ListEventStreamingMetricsResponse ListEventStreamingMetricsWithOptions(ListEventStreamingMetricsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventStreamingMetricsResponse>(DoRequest("listEventStreamingMetrics", "HTTP", "POST", "/openapi/v2/listEventStreamingMetrics", null, request.ToMap(), runtime));
        }

        /**
         * List the metrics of event streaming
         */
        public async Task<ListEventStreamingMetricsResponse> ListEventStreamingMetricsWithOptionsAsync(ListEventStreamingMetricsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventStreamingMetricsResponse>(await DoRequestAsync("listEventStreamingMetrics", "HTTP", "POST", "/openapi/v2/listEventStreamingMetrics", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public ListEventStreamingsResponse ListEventStreamings(ListEventStreamingsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return ListEventStreamingsWithOptions(request, runtime);
        }

        /**
         * create event streaming
         */
        public async Task<ListEventStreamingsResponse> ListEventStreamingsAsync(ListEventStreamingsRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await ListEventStreamingsWithOptionsAsync(request, runtime);
        }

        /**
         * create event streaming
         */
        public ListEventStreamingsResponse ListEventStreamingsWithOptions(ListEventStreamingsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventStreamingsResponse>(DoRequest("listEventStreamings", "HTTP", "POST", "/openapi/v2/listEventStreamings", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public async Task<ListEventStreamingsResponse> ListEventStreamingsWithOptionsAsync(ListEventStreamingsRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<ListEventStreamingsResponse>(await DoRequestAsync("listEventStreamings", "HTTP", "POST", "/openapi/v2/listEventStreamings", null, request.ToMap(), runtime));
        }

        /**
         * delete event streaming
         */
        public PauseEventStreamingResponse PauseEventStreaming(PauseEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return PauseEventStreamingWithOptions(request, runtime);
        }

        /**
         * delete event streaming
         */
        public async Task<PauseEventStreamingResponse> PauseEventStreamingAsync(PauseEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await PauseEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * delete event streaming
         */
        public PauseEventStreamingResponse PauseEventStreamingWithOptions(PauseEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<PauseEventStreamingResponse>(DoRequest("startEventStreaming", "HTTP", "POST", "/openapi/v2/pauseEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * delete event streaming
         */
        public async Task<PauseEventStreamingResponse> PauseEventStreamingWithOptionsAsync(PauseEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<PauseEventStreamingResponse>(await DoRequestAsync("startEventStreaming", "HTTP", "POST", "/openapi/v2/pauseEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public StartEventStreamingResponse StartEventStreaming(StartEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return StartEventStreamingWithOptions(request, runtime);
        }

        /**
         * create event streaming
         */
        public async Task<StartEventStreamingResponse> StartEventStreamingAsync(StartEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await StartEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * create event streaming
         */
        public StartEventStreamingResponse StartEventStreamingWithOptions(StartEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<StartEventStreamingResponse>(DoRequest("startEventStreaming", "HTTP", "POST", "/openapi/v2/startEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public async Task<StartEventStreamingResponse> StartEventStreamingWithOptionsAsync(StartEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<StartEventStreamingResponse>(await DoRequestAsync("startEventStreaming", "HTTP", "POST", "/openapi/v2/startEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * Update event streaming procss
         */
        public UpdateEventStreamingResponse UpdateEventStreaming(UpdateEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return UpdateEventStreamingWithOptions(request, runtime);
        }

        /**
         * Update event streaming procss
         */
        public async Task<UpdateEventStreamingResponse> UpdateEventStreamingAsync(UpdateEventStreamingRequest request)
        {
            AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime = new AlibabaCloud.TeaUtil.Models.RuntimeOptions();
            return await UpdateEventStreamingWithOptionsAsync(request, runtime);
        }

        /**
         * create event streaming
         */
        public UpdateEventStreamingResponse UpdateEventStreamingWithOptions(UpdateEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateEventStreamingResponse>(DoRequest("updateEventStreaming", "HTTP", "POST", "/openapi/v2/updateEventStreaming", null, request.ToMap(), runtime));
        }

        /**
         * create event streaming
         */
        public async Task<UpdateEventStreamingResponse> UpdateEventStreamingWithOptionsAsync(UpdateEventStreamingRequest request, AlibabaCloud.TeaUtil.Models.RuntimeOptions runtime)
        {
            AlibabaCloud.TeaUtil.Common.ValidateModel(request);
            return TeaModel.ToObject<UpdateEventStreamingResponse>(await DoRequestAsync("updateEventStreaming", "HTTP", "POST", "/openapi/v2/updateEventStreaming", null, request.ToMap(), runtime));
        }

    }
}
