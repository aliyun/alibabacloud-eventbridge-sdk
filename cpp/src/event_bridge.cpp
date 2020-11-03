// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/event_bridge.hpp>
#include <algorithm>
#include <alibabacloud/credential.hpp>
#include <alibabacloud/event_bridge_util.hpp>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_EventBridge;

Alibabacloud_EventBridge::Client::Client(const shared_ptr<Config>& config) {
  if (Darabonba_Util::Client::isUnset(make_shared<boost::any>(config))) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "ParameterMissing"},
      {"message", "'config' can not be unset"}
    })));
  }
  Darabonba_Util::Client::validateModel(config);
  if (!Darabonba_Util::Client::empty(config->accessKeyId) && !Darabonba_Util::Client::empty(config->accessKeySecret)) {
    string credentialType = "access_key";
    if (!Darabonba_Util::Client::empty(config->securityToken)) {
      credentialType = "sts";
    }
    Alibabacloud_Credential::Config credentialConfig(map<string, string>({
      {"accessKeyId", !config->accessKeyId ? string() : *config->accessKeyId},
      {"type", credentialType},
      {"accessKeySecret", !config->accessKeySecret ? string() : *config->accessKeySecret},
      {"securityToken", !config->securityToken ? string() : *config->securityToken}
    }));
    _credential = make_shared<Alibabacloud_Credential::Client>(make_shared<Alibabacloud_Credential::Config>(credentialConfig));
  }
  else if (!Darabonba_Util::Client::isUnset(config->credential)) {
    _credential = config->credential;
  }
  else {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "ParameterMissing"},
      {"message", "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset"}
    })));
  }
  if (Darabonba_Util::Client::empty(config->endpoint)) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "ParameterMissing"},
      {"message", "'endpoint' can not be unset"}
    })));
  }
  if (Alibabacloud_EventBridgeUtil::Client::startWith(config->endpoint, make_shared<string>("http")) || Alibabacloud_EventBridgeUtil::Client::startWith(config->endpoint, make_shared<string>("https"))) {
    BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, string>({
      {"code", "ParameterError"},
      {"message", "'endpoint' shouldn't start with 'http' or 'https'"}
    })));
  }
  _regionId = config->regionId;
  _protocol = config->protocol;
  _endpoint = config->endpoint;
  _readTimeout = config->readTimeout;
  _connectTimeout = config->connectTimeout;
  _httpProxy = config->httpProxy;
  _httpsProxy = config->httpsProxy;
  _maxIdleConns = config->maxIdleConns;
};

map<string, boost::any> Alibabacloud_EventBridge::Client::doRequest(shared_ptr<string> action,
                                                                    shared_ptr<string> protocol,
                                                                    shared_ptr<string> method,
                                                                    shared_ptr<string> pathname,
                                                                    shared_ptr<map<string, string>> query,
                                                                    const boost::any &body,
                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  runtime->validate();
  map<string, boost::any> runtime_ = {
    {"timeouted", boost::any("retry")},
    {"readTimeout", boost::any(Darabonba_Util::Client::defaultNumber(runtime->readTimeout, _readTimeout))},
    {"connectTimeout", boost::any(Darabonba_Util::Client::defaultNumber(runtime->connectTimeout, _connectTimeout))},
    {"httpProxy", boost::any(Darabonba_Util::Client::defaultString(runtime->httpProxy, _httpProxy))},
    {"httpsProxy", boost::any(Darabonba_Util::Client::defaultString(runtime->httpsProxy, _httpsProxy))},
    {"noProxy", boost::any(Darabonba_Util::Client::defaultString(runtime->noProxy, _noProxy))},
    {"maxIdleConns", boost::any(Darabonba_Util::Client::defaultNumber(runtime->maxIdleConns, _maxIdleConns))},
    {"retry", boost::any(map<string, boost::any>({
      {"retryable", !runtime->autoretry ? boost::any() : boost::any(*runtime->autoretry)},
      {"maxAttempts", boost::any(Darabonba_Util::Client::defaultNumber(runtime->maxAttempts, make_shared<int>(3)))}
    }))},
    {"backoff", boost::any(map<string, boost::any>({
      {"policy", boost::any(Darabonba_Util::Client::defaultString(runtime->backoffPolicy, make_shared<string>("no")))},
      {"period", boost::any(Darabonba_Util::Client::defaultNumber(runtime->backoffPeriod, make_shared<int>(1)))}
    }))},
    {"ignoreSSL", !runtime->ignoreSSL ? boost::any() : boost::any(*runtime->ignoreSSL)}
  };
  Darabonba::Request _lastRequest;
  std::exception _lastException;
  int _now = 0;
  int _retryTimes = 0;
  while (Darabonba::Core::allowRetry(make_shared<boost::any>(runtime_["retry"]), make_shared<int>(_retryTimes), make_shared<int>(_now))) {
    if (_retryTimes > 0) {
      int _backoffTime = Darabonba::Core::getBackoffTime(make_shared<boost::any>(runtime_["backoff"]), make_shared<int>(_retryTimes));
      if (_backoffTime > 0) {
        Darabonba::Core::sleep(make_shared<int>(_backoffTime));
      }
    }
    _retryTimes = _retryTimes + 1;
    try {
      Darabonba::Request request_ = Darabonba::Request();
      request_.protocol = Darabonba_Util::Client::defaultString(_protocol, protocol);
      request_.method = *method;
      request_.pathname = *pathname;
      request_.headers = {
        {"date", Darabonba_Util::Client::getDateUTCString()},
        {"host", !_endpoint ? string() : *_endpoint},
        {"accept", "application/json"},
        {"x-acs-signature-nonce", Darabonba_Util::Client::getNonce()},
        {"x-acs-signature-method", "HMAC-SHA1"},
        {"x-acs-signature-version", "1.0"},
        {"x-eventbridge-version", "2015-06-06"},
        {"user-agent", Darabonba_Util::Client::getUserAgent(make_shared<string>(" aliyun-eventbridge-sdk/1.2.0"))}
      };
      if (!Darabonba_Util::Client::isUnset(_regionId)) {
        request_.headers.insert(pair<string, string>("x-eventbridge-regionId", *_regionId));
      }
      if (!Darabonba_Util::Client::isUnset(make_shared<boost::any>(body))) {
        request_.body = Darabonba::Converter::toStream(Darabonba_Util::Client::toJSONString(make_shared<boost::any>(body)));
        request_.headers.insert(pair<string, string>("content-type", "application/json; charset=utf-8"));
      }
      if (Darabonba_Util::Client::equalString(action, make_shared<string>("putEvents"))) {
        request_.headers.insert(pair<string, string>("content-type", "application/cloudevents-batch+json; charset=utf-8"));
      }
      if (!Darabonba_Util::Client::isUnset(query)) {
        request_.query = *query;
      }
      string accessKeyId = _credential->getAccessKeyId();
      string accessKeySecret = _credential->getAccessKeySecret();
      string securityToken = _credential->getSecurityToken();
      if (!Darabonba_Util::Client::empty(make_shared<string>(securityToken))) {
        request_.headers.insert(pair<string, string>("x-acs-accesskey-id", accessKeyId));
        request_.headers.insert(pair<string, string>("x-acs-security-token", securityToken));
      }
      string stringToSign = Alibabacloud_EventBridgeUtil::Client::getStringToSign(make_shared<Darabonba::Request>(request_));
      request_.headers.insert(pair<string, string>("authorization", string("acs:" + accessKeyId + ":" + Alibabacloud_EventBridgeUtil::Client::getSignature(make_shared<string>(stringToSign), make_shared<string>(accessKeySecret)) + "")));
      _lastRequest = request_;
      Darabonba::Response response_= Darabonba::Core::doAction(request_, runtime_);
      boost::any result = Darabonba_Util::Client::readAsJSON(response_.body);
      map<string, boost::any> tmp = Darabonba_Util::Client::assertAsMap(make_shared<boost::any>(result));
      if (Darabonba_Util::Client::is4xx(make_shared<int>(response_.statusCode)) || Darabonba_Util::Client::is5xx(make_shared<int>(response_.statusCode))) {
        BOOST_THROW_EXCEPTION(Darabonba::Error(map<string, boost::any>({
          {"code", tmp["code"]},
          {"message", boost::any(string("[EventBridgeError] " + Darabonba::Converter::toString(tmp["message"]) + ""))},
          {"data", boost::any(tmp)}
        })));
      }
      return tmp;
    }
    catch (std::exception &e) {
      if (Darabonba::Core::isRetryable(e)) {
        _lastException = e;
        continue;
      }
      BOOST_THROW_EXCEPTION(e);
    }
  }
  BOOST_THROW_EXCEPTION(Darabonba::UnretryableError(_lastRequest, _lastException));
}

PutEventsResponse Alibabacloud_EventBridge::Client::putEvents(shared_ptr<vector<CloudEvent>> eventList) {
  Darabonba_Util::RuntimeOptions runtime;
  return putEventsWithOptions(eventList, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

PutEventsResponse Alibabacloud_EventBridge::Client::putEventsWithOptions(shared_ptr<vector<CloudEvent>> eventList, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  for(auto cloudEvent : *eventList) {
    if (Darabonba_Util::Client::isUnset(cloudEvent.specversion)) {
      cloudEvent.specversion = make_shared<string>("1.0");
    }
    if (Darabonba_Util::Client::isUnset(cloudEvent.datacontenttype)) {
      cloudEvent.datacontenttype = make_shared<string>("application/json; charset=utf-8");
    }
    Darabonba_Util::Client::validateModel(make_shared<CloudEvent>(cloudEvent));
  }
  boost::any body = Alibabacloud_EventBridgeUtil::Client::serialize(eventList);
  return PutEventsResponse(doRequest(make_shared<string>("putEvents"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/putEvents")), nullptr, make_shared<boost::any>(body), runtime));
}

CreateEventBusResponse Alibabacloud_EventBridge::Client::createEventBus(shared_ptr<CreateEventBusRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return createEventBusWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

CreateEventBusResponse Alibabacloud_EventBridge::Client::createEventBusWithOptions(shared_ptr<CreateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateEventBusResponse(doRequest(make_shared<string>("createEventBus"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/createEventBus")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteEventBusResponse Alibabacloud_EventBridge::Client::deleteEventBus(shared_ptr<DeleteEventBusRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return deleteEventBusWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

DeleteEventBusResponse Alibabacloud_EventBridge::Client::deleteEventBusWithOptions(shared_ptr<DeleteEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteEventBusResponse(doRequest(make_shared<string>("deleteEventBus"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/deleteEventBus")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetEventBusResponse Alibabacloud_EventBridge::Client::getEventBus(shared_ptr<GetEventBusRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return getEventBusWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

GetEventBusResponse Alibabacloud_EventBridge::Client::getEventBusWithOptions(shared_ptr<GetEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetEventBusResponse(doRequest(make_shared<string>("getEventBus"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/getEventBus")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListEventBusesResponse Alibabacloud_EventBridge::Client::listEventBuses(shared_ptr<ListEventBusesRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return listEventBusesWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

ListEventBusesResponse Alibabacloud_EventBridge::Client::listEventBusesWithOptions(shared_ptr<ListEventBusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListEventBusesResponse(doRequest(make_shared<string>("listEventBuses"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/listEventBuses")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRuleResponse Alibabacloud_EventBridge::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return createRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

CreateRuleResponse Alibabacloud_EventBridge::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRuleResponse(doRequest(make_shared<string>("createRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/createRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteRuleResponse Alibabacloud_EventBridge::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return deleteRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

DeleteRuleResponse Alibabacloud_EventBridge::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteRuleResponse(doRequest(make_shared<string>("deleteRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/deleteRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DisableRuleResponse Alibabacloud_EventBridge::Client::disableRule(shared_ptr<DisableRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return disableRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

DisableRuleResponse Alibabacloud_EventBridge::Client::disableRuleWithOptions(shared_ptr<DisableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DisableRuleResponse(doRequest(make_shared<string>("disableRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/disableRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

EnableRuleResponse Alibabacloud_EventBridge::Client::enableRule(shared_ptr<EnableRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return enableRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

EnableRuleResponse Alibabacloud_EventBridge::Client::enableRuleWithOptions(shared_ptr<EnableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return EnableRuleResponse(doRequest(make_shared<string>("enableRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/enableRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetRuleResponse Alibabacloud_EventBridge::Client::getRule(shared_ptr<GetRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return getRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

GetRuleResponse Alibabacloud_EventBridge::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetRuleResponse(doRequest(make_shared<string>("getRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/getRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListRulesResponse Alibabacloud_EventBridge::Client::listRules(shared_ptr<ListRulesRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return listRulesWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

ListRulesResponse Alibabacloud_EventBridge::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListRulesResponse(doRequest(make_shared<string>("listRules"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/listRules")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateRuleResponse Alibabacloud_EventBridge::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return updateRuleWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

UpdateRuleResponse Alibabacloud_EventBridge::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateRuleResponse(doRequest(make_shared<string>("updateRule"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/updateRule")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateTargetsResponse Alibabacloud_EventBridge::Client::createTargets(shared_ptr<CreateTargetsRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return createTargetsWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

CreateTargetsResponse Alibabacloud_EventBridge::Client::createTargetsWithOptions(shared_ptr<CreateTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateTargetsResponse(doRequest(make_shared<string>("createTargets"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/createTargets")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteTargetsResponse Alibabacloud_EventBridge::Client::deleteTargets(shared_ptr<DeleteTargetsRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return deleteTargetsWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

DeleteTargetsResponse Alibabacloud_EventBridge::Client::deleteTargetsWithOptions(shared_ptr<DeleteTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteTargetsResponse(doRequest(make_shared<string>("deleteTargets"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/deleteTargets")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListTargetsResponse Alibabacloud_EventBridge::Client::listTargets(shared_ptr<ListTargetsRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return listTargetsWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

ListTargetsResponse Alibabacloud_EventBridge::Client::listTargetsWithOptions(shared_ptr<ListTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListTargetsResponse(doRequest(make_shared<string>("listTargets"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/listTargets")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TestEventPatternResponse Alibabacloud_EventBridge::Client::testEventPattern(shared_ptr<TestEventPatternRequest> request) {
  Darabonba_Util::RuntimeOptions runtime;
  return testEventPatternWithOptions(request, make_shared<Darabonba_Util::RuntimeOptions>(runtime));
}

TestEventPatternResponse Alibabacloud_EventBridge::Client::testEventPatternWithOptions(shared_ptr<TestEventPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TestEventPatternResponse(doRequest(make_shared<string>("testEventPattern"), make_shared<string>("HTTP"), make_shared<string>("POST"), make_shared<string>(string("/openapi/testEventPattern")), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

