# -*- coding: utf-8 -*-
# This file is auto-generated, don't edit it. Thanks.
import time

from Tea.exceptions import TeaException, UnretryableException
from Tea.request import TeaRequest
from Tea.core import TeaCore

from alibabacloud_credentials.client import Client as CredentialClient
from alibabacloud_tea_util.client import Client as UtilClient
from alibabacloud_credentials import models as credential_models
from alibabacloud_eventbridge_util.client import Client as EventBridgeUtilClient
from alibabacloud_eventbridge import models as event_bridge_models
from alibabacloud_tea_util import models as util_models


class Client(object):
    """
    *\
    """
    def __init__(self, config, _protocol=None, _read_timeout=None, _connect_timeout=None, _http_proxy=None,
                 _https_proxy=None, _no_proxy=None, _max_idle_conns=None, _endpoint=None, _region_id=None, _credential=None):
        """
        Init client with Config

        @param config: config contains the necessary information to create a client
        """
        self._protocol = _protocol      # type: str
        self._read_timeout = _read_timeout  # type: int
        self._connect_timeout = _connect_timeout  # type: int
        self._http_proxy = _http_proxy  # type: str
        self._https_proxy = _https_proxy  # type: str
        self._no_proxy = _no_proxy      # type: str
        self._max_idle_conns = _max_idle_conns  # type: int
        self._endpoint = _endpoint      # type: str
        self._region_id = _region_id    # type: str
        self._credential = _credential
        if UtilClient.is_unset(config):
            raise TeaException({
                'code': 'ParameterMissing',
                'message': "'config' can not be unset"
            })
        UtilClient.validate_model(config)
        if not UtilClient.empty(config.access_key_id) and not UtilClient.empty(config.access_key_secret):
            credential_type = 'access_key'
            if not UtilClient.empty(config.security_token):
                credential_type = 'sts'
            credential_config = credential_models.Config(
                access_key_id=config.access_key_id,
                type=credential_type,
                access_key_secret=config.access_key_secret,
                security_token=config.security_token
            )
            self._credential = CredentialClient(credential_config)
        elif not UtilClient.is_unset(config.credential):
            self._credential = config.credential
        else:
            raise TeaException({
                'code': 'ParameterMissing',
                'message': "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset"
            })
        if UtilClient.empty(config.endpoint):
            raise TeaException({
                'code': 'ParameterMissing',
                'message': "'endpoint' can not be unset"
            })
        if EventBridgeUtilClient.start_with(config.endpoint, 'http') or EventBridgeUtilClient.start_with(config.endpoint, 'https'):
            raise TeaException({
                'code': 'ParameterError',
                'message': "'endpoint' shouldn't start with 'http' or 'https'"
            })
        self._region_id = config.region_id
        self._protocol = config.protocol
        self._endpoint = config.endpoint
        self._read_timeout = config.read_timeout
        self._connect_timeout = config.connect_timeout
        self._http_proxy = config.http_proxy
        self._https_proxy = config.https_proxy
        self._max_idle_conns = config.max_idle_conns

    def do_request(self, action, protocol, method, pathname, query, body, runtime):
        """
        Encapsulate the request and invoke the network

        @type action: str
        @param action: the api name

        @type protocol: str
        @param protocol: http or https

        @type method: str
        @param method: e.g. GET

        @type pathname: str
        @param pathname: pathname of every api

        @type query: dict
        @param query: which contains request params

        @param body: content of request

        @param runtime: which controls some details of call api, such as retry times

        @rtype: dict
        @return: the response
        """
        runtime.validate()
        _runtime = {
            'timeouted': 'retry',
            'readTimeout': UtilClient.default_number(runtime.read_timeout, self._read_timeout),
            'connectTimeout': UtilClient.default_number(runtime.connect_timeout, self._connect_timeout),
            'httpProxy': UtilClient.default_string(runtime.http_proxy, self._http_proxy),
            'httpsProxy': UtilClient.default_string(runtime.https_proxy, self._https_proxy),
            'noProxy': UtilClient.default_string(runtime.no_proxy, self._no_proxy),
            'maxIdleConns': UtilClient.default_number(runtime.max_idle_conns, self._max_idle_conns),
            'retry': {
                'retryable': runtime.autoretry,
                'maxAttempts': UtilClient.default_number(runtime.max_attempts, 3)
            },
            'backoff': {
                'policy': UtilClient.default_string(runtime.backoff_policy, 'no'),
                'period': UtilClient.default_number(runtime.backoff_period, 1)
            },
            'ignoreSSL': runtime.ignore_ssl
        }
        _last_request = None
        _last_exception = None
        _now = time.time()
        _retry_times = 0
        while TeaCore.allow_retry(_runtime.get('retry'), _retry_times, _now):
            if _retry_times > 0:
                _backoff_time = TeaCore.get_backoff_time(_runtime.get('backoff'), _retry_times)
                if _backoff_time > 0:
                    TeaCore.sleep(_backoff_time)
            _retry_times = _retry_times + 1
            try:
                _request = TeaRequest()
                _request.protocol = UtilClient.default_string(self._protocol, protocol)
                _request.method = method
                _request.pathname = pathname
                _request.headers = {
                    'date': UtilClient.get_date_utcstring(),
                    'host': self._endpoint,
                    'accept': 'application/json',
                    'x-acs-signature-nonce': UtilClient.get_nonce(),
                    'x-acs-signature-method': 'HMAC-SHA1',
                    'x-acs-signature-version': '1.0',
                    'x-eventbridge-version': '2015-06-06',
                    'user-agent': UtilClient.get_user_agent(' aliyun-eventbridge-sdk/1.2.0')
                }
                if not UtilClient.is_unset(self._region_id):
                    _request.headers['x-eventbridge-regionId'] = self._region_id
                if not UtilClient.is_unset(body):
                    _request.body = UtilClient.to_jsonstring(body)
                    _request.headers['content-type'] = 'application/json; charset=utf-8'
                if UtilClient.equal_string(action, 'putEvents'):
                    _request.headers['content-type'] = 'application/cloudevents-batch+json; charset=utf-8'
                if not UtilClient.is_unset(query):
                    _request.query = query
                access_key_id = self._credential.get_access_key_id()
                access_key_secret = self._credential.get_access_key_secret()
                security_token = self._credential.get_security_token()
                if not UtilClient.empty(security_token):
                    _request.headers['x-acs-accesskey-id'] = access_key_id
                    _request.headers['x-acs-security-token'] = security_token
                string_to_sign = EventBridgeUtilClient.get_string_to_sign(_request)
                _request.headers['authorization'] = 'acs:%s:%s' % (access_key_id, EventBridgeUtilClient.get_signature(string_to_sign, access_key_secret))
                _last_request = _request
                _response = TeaCore.do_action(_request, _runtime)
                result = UtilClient.read_as_json(_response.body)
                tmp = UtilClient.assert_as_map(result)
                if UtilClient.is_4xx(_response.status_code) or UtilClient.is_5xx(_response.status_code):
                    raise TeaException({
                        'code': tmp.get('code'),
                        'message': '[EventBridgeError-%s] %s' % (tmp.get('requestId'), tmp.get('message')),
                        'data': tmp
                    })
                return tmp
            except Exception as e:
                if TeaCore.is_retryable(e):
                    _last_exception = e
                    continue
                raise e
        raise UnretryableException(_last_request, _last_exception)

    def put_events(self, event_list):
        """
        Publish event to the aliyun EventBus
        """
        runtime = util_models.RuntimeOptions()
        return self.put_events_with_options(event_list, runtime)

    def put_events_with_options(self, event_list, runtime):
        """
        Publish event to the aliyun EventBus
        """
        for cloud_event in event_list:
            if UtilClient.is_unset(cloud_event.specversion):
                cloud_event.specversion = '1.0'
            if UtilClient.is_unset(cloud_event.datacontenttype):
                cloud_event.datacontenttype = 'application/json; charset=utf-8'
            UtilClient.validate_model(cloud_event)
        body = EventBridgeUtilClient.serialize(event_list)
        return event_bridge_models.PutEventsResponse().from_map(self.do_request('putEvents', 'HTTP', 'POST', '/openapi/putEvents', None, body, runtime))

    def create_event_bus(self, request):
        """
        Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
        """
        runtime = util_models.RuntimeOptions()
        return self.create_event_bus_with_options(request, runtime)

    def create_event_bus_with_options(self, request, runtime):
        """
        Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
        """
        UtilClient.validate_model(request)
        return event_bridge_models.CreateEventBusResponse().from_map(self.do_request('createEventBus', 'HTTP', 'POST', '/openapi/createEventBus', None, TeaCore.to_map(request), runtime))

    def delete_event_bus(self, request):
        """
        Deletes the specified custom event bus in your account,You can't delete your account's default event bus
        """
        runtime = util_models.RuntimeOptions()
        return self.delete_event_bus_with_options(request, runtime)

    def delete_event_bus_with_options(self, request, runtime):
        """
        Deletes the specified custom event bus in your account,You can't delete your account's default event bus
        """
        UtilClient.validate_model(request)
        return event_bridge_models.DeleteEventBusResponse().from_map(self.do_request('deleteEventBus', 'HTTP', 'POST', '/openapi/deleteEventBus', None, TeaCore.to_map(request), runtime))

    def get_event_bus(self, request):
        """
        Displays details about an event bus in your account
        """
        runtime = util_models.RuntimeOptions()
        return self.get_event_bus_with_options(request, runtime)

    def get_event_bus_with_options(self, request, runtime):
        """
        Displays details about an event bus in your account
        """
        UtilClient.validate_model(request)
        return event_bridge_models.GetEventBusResponse().from_map(self.do_request('getEventBus', 'HTTP', 'POST', '/openapi/getEventBus', None, TeaCore.to_map(request), runtime))

    def list_event_buses(self, request):
        """
        List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
        """
        runtime = util_models.RuntimeOptions()
        return self.list_event_buses_with_options(request, runtime)

    def list_event_buses_with_options(self, request, runtime):
        """
        List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
        """
        UtilClient.validate_model(request)
        return event_bridge_models.ListEventBusesResponse().from_map(self.do_request('listEventBuses', 'HTTP', 'POST', '/openapi/listEventBuses', None, TeaCore.to_map(request), runtime))

    def create_rule(self, request):
        """
        Create an EventBus rule on Aliyun
        """
        runtime = util_models.RuntimeOptions()
        return self.create_rule_with_options(request, runtime)

    def create_rule_with_options(self, request, runtime):
        """
        Create an EventBus rule on Aliyun
        """
        UtilClient.validate_model(request)
        return event_bridge_models.CreateRuleResponse().from_map(self.do_request('createRule', 'HTTP', 'POST', '/openapi/createRule', None, TeaCore.to_map(request), runtime))

    def delete_rule(self, request):
        """
        Deletes the specified rule.
        """
        runtime = util_models.RuntimeOptions()
        return self.delete_rule_with_options(request, runtime)

    def delete_rule_with_options(self, request, runtime):
        """
        Deletes the specified rule.
        """
        UtilClient.validate_model(request)
        return event_bridge_models.DeleteRuleResponse().from_map(self.do_request('deleteRule', 'HTTP', 'POST', '/openapi/deleteRule', None, TeaCore.to_map(request), runtime))

    def disable_rule(self, request):
        """
        Disables the specified rule
        """
        runtime = util_models.RuntimeOptions()
        return self.disable_rule_with_options(request, runtime)

    def disable_rule_with_options(self, request, runtime):
        """
        Disables the specified rule
        """
        UtilClient.validate_model(request)
        return event_bridge_models.DisableRuleResponse().from_map(self.do_request('disableRule', 'HTTP', 'POST', '/openapi/disableRule', None, TeaCore.to_map(request), runtime))

    def enable_rule(self, request):
        """
        Enables the specified rule
        """
        runtime = util_models.RuntimeOptions()
        return self.enable_rule_with_options(request, runtime)

    def enable_rule_with_options(self, request, runtime):
        """
        Enables the specified rule
        """
        UtilClient.validate_model(request)
        return event_bridge_models.EnableRuleResponse().from_map(self.do_request('enableRule', 'HTTP', 'POST', '/openapi/enableRule', None, TeaCore.to_map(request), runtime))

    def get_rule(self, request):
        """
        Describes the specified rule
        """
        runtime = util_models.RuntimeOptions()
        return self.get_rule_with_options(request, runtime)

    def get_rule_with_options(self, request, runtime):
        """
        Describes the specified rule
        """
        UtilClient.validate_model(request)
        return event_bridge_models.GetRuleResponse().from_map(self.do_request('getRule', 'HTTP', 'POST', '/openapi/getRule', None, TeaCore.to_map(request), runtime))

    def list_rules(self, request):
        """
        List all the rules which meet the search criteria
        """
        runtime = util_models.RuntimeOptions()
        return self.list_rules_with_options(request, runtime)

    def list_rules_with_options(self, request, runtime):
        """
        List all the rules which meet the search criteria
        """
        UtilClient.validate_model(request)
        return event_bridge_models.ListRulesResponse().from_map(self.do_request('listRules', 'HTTP', 'POST', '/openapi/listRules', None, TeaCore.to_map(request), runtime))

    def update_rule(self, request):
        """
        update the specified rule.
        """
        runtime = util_models.RuntimeOptions()
        return self.update_rule_with_options(request, runtime)

    def update_rule_with_options(self, request, runtime):
        """
        update the specified rule.
        """
        UtilClient.validate_model(request)
        return event_bridge_models.UpdateRuleResponse().from_map(self.do_request('updateRule', 'HTTP', 'POST', '/openapi/updateRule', None, TeaCore.to_map(request), runtime))

    def create_targets(self, request):
        """
        Adds the specified targets to the specified rule
        """
        runtime = util_models.RuntimeOptions()
        return self.create_targets_with_options(request, runtime)

    def create_targets_with_options(self, request, runtime):
        """
        Adds the specified targets to the specified rule
        """
        UtilClient.validate_model(request)
        return event_bridge_models.CreateTargetsResponse().from_map(self.do_request('createTargets', 'HTTP', 'POST', '/openapi/createTargets', None, TeaCore.to_map(request), runtime))

    def delete_targets(self, request):
        """
        Delete the specified targets from the specified rule
        """
        runtime = util_models.RuntimeOptions()
        return self.delete_targets_with_options(request, runtime)

    def delete_targets_with_options(self, request, runtime):
        """
        Delete the specified targets from the specified rule
        """
        UtilClient.validate_model(request)
        return event_bridge_models.DeleteTargetsResponse().from_map(self.do_request('deleteTargets', 'HTTP', 'POST', '/openapi/deleteTargets', None, TeaCore.to_map(request), runtime))

    def list_targets(self, request):
        """
        List all the Targets which meet the search criteria
        """
        runtime = util_models.RuntimeOptions()
        return self.list_targets_with_options(request, runtime)

    def list_targets_with_options(self, request, runtime):
        """
        List all the Targets which meet the search criteria
        """
        UtilClient.validate_model(request)
        return event_bridge_models.ListTargetsResponse().from_map(self.do_request('listTargets', 'HTTP', 'POST', '/openapi/listTargets', None, TeaCore.to_map(request), runtime))

    def test_event_pattern(self, request):
        """
        Tests whether the specified event pattern matches the provided event
        """
        runtime = util_models.RuntimeOptions()
        return self.test_event_pattern_with_options(request, runtime)

    def test_event_pattern_with_options(self, request, runtime):
        """
        Tests whether the specified event pattern matches the provided event
        """
        UtilClient.validate_model(request)
        return event_bridge_models.TestEventPatternResponse().from_map(self.do_request('testEventPattern', 'HTTP', 'POST', '/openapi/testEventPattern', None, TeaCore.to_map(request), runtime))
