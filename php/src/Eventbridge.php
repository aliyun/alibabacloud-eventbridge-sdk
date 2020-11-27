<?php

// This file is auto-generated, don't edit it. Thanks.

namespace AlibabaCloud\SDK\EventBridge;

use AlibabaCloud\Credentials\Credential;
use AlibabaCloud\Credentials\Credential\Config;
use AlibabaCloud\EventBridgeUtil\Client;
use AlibabaCloud\SDK\EventBridge\Models\CloudEvent;
use AlibabaCloud\SDK\EventBridge\Models\CreateEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\CreateEventBusResponse;
use AlibabaCloud\SDK\EventBridge\Models\CreateRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\CreateRuleResponse;
use AlibabaCloud\SDK\EventBridge\Models\CreateTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\CreateTargetsResponse;
use AlibabaCloud\SDK\EventBridge\Models\DeleteEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteEventBusResponse;
use AlibabaCloud\SDK\EventBridge\Models\DeleteRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteRuleResponse;
use AlibabaCloud\SDK\EventBridge\Models\DeleteTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteTargetsResponse;
use AlibabaCloud\SDK\EventBridge\Models\DisableRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\DisableRuleResponse;
use AlibabaCloud\SDK\EventBridge\Models\EnableRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\EnableRuleResponse;
use AlibabaCloud\SDK\EventBridge\Models\GetEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\GetEventBusResponse;
use AlibabaCloud\SDK\EventBridge\Models\GetRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\GetRuleResponse;
use AlibabaCloud\SDK\EventBridge\Models\ListEventBusesRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListEventBusesResponse;
use AlibabaCloud\SDK\EventBridge\Models\ListRulesRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListRulesResponse;
use AlibabaCloud\SDK\EventBridge\Models\ListTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListTargetsResponse;
use AlibabaCloud\SDK\EventBridge\Models\PutEventsResponse;
use AlibabaCloud\SDK\EventBridge\Models\TestEventPatternRequest;
use AlibabaCloud\SDK\EventBridge\Models\TestEventPatternResponse;
use AlibabaCloud\SDK\EventBridge\Models\UpdateRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\UpdateRuleResponse;
use AlibabaCloud\Tea\Exception\TeaError;
use AlibabaCloud\Tea\Exception\TeaUnableRetryError;
use AlibabaCloud\Tea\Request;
use AlibabaCloud\Tea\Tea;
use AlibabaCloud\Tea\Utils\Utils;
use AlibabaCloud\Tea\Utils\Utils\RuntimeOptions;
use Exception;

class Eventbridge
{
    protected $_protocol;

    protected $_readTimeout;

    protected $_connectTimeout;

    protected $_httpProxy;

    protected $_httpsProxy;

    protected $_noProxy;

    protected $_maxIdleConns;

    protected $_endpoint;

    protected $_regionId;

    protected $_credential;

    /**
     * Init client with Config.
     *
     * @param config config contains the necessary information to create a client
     * @param mixed $config
     */
    public function __construct($config)
    {
        if (Utils::isUnset($config)) {
            throw new TeaError([
                'code'    => 'ParameterMissing',
                'message' => "'config' can not be unset",
            ]);
        }
        Utils::validateModel($config);
        if (!Utils::empty_($config->accessKeyId) && !Utils::empty_($config->accessKeySecret)) {
            $credentialType = 'access_key';
            if (!Utils::empty_($config->securityToken)) {
                $credentialType = 'sts';
            }
            $credentialConfig = new Config([
                'accessKeyId'     => $config->accessKeyId,
                'type'            => $credentialType,
                'accessKeySecret' => $config->accessKeySecret,
                'securityToken'   => $config->securityToken,
            ]);
            $this->_credential = new Credential($credentialConfig);
        } elseif (!Utils::isUnset($config->credential)) {
            $this->_credential = $config->credential;
        } else {
            throw new TeaError([
                'code'    => 'ParameterMissing',
                'message' => "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset",
            ]);
        }
        if (Utils::empty_($config->endpoint)) {
            throw new TeaError([
                'code'    => 'ParameterMissing',
                'message' => "'endpoint' can not be unset",
            ]);
        }
        if (Client::startWith($config->endpoint, 'http') || Client::startWith($config->endpoint, 'https')) {
            throw new TeaError([
                'code'    => 'ParameterError',
                'message' => "'endpoint' shouldn't start with 'http' or 'https'",
            ]);
        }
        $this->_regionId       = $config->regionId;
        $this->_protocol       = $config->protocol;
        $this->_endpoint       = $config->endpoint;
        $this->_readTimeout    = $config->readTimeout;
        $this->_connectTimeout = $config->connectTimeout;
        $this->_httpProxy      = $config->httpProxy;
        $this->_httpsProxy     = $config->httpsProxy;
        $this->_maxIdleConns   = $config->maxIdleConns;
    }

    /**
     * Encapsulate the request and invoke the network.
     *
     * @param string         $action   the api name
     * @param string         $protocol http or https
     * @param string         $method   e.g. GET
     * @param string         $pathname pathname of every api
     * @param string[]       $query    which contains request params
     * @param mixed          $body     content of request
     * @param RuntimeOptions $runtime  which controls some details of call api, such as retry times
     *
     * @throws TeaError
     * @throws Exception
     * @throws TeaUnableRetryError
     *
     * @return array the response
     */
    public function doRequest($action, $protocol, $method, $pathname, $query, $body, $runtime)
    {
        $runtime->validate();
        $_runtime = [
            'timeouted'      => 'retry',
            'readTimeout'    => Utils::defaultNumber($runtime->readTimeout, $this->_readTimeout),
            'connectTimeout' => Utils::defaultNumber($runtime->connectTimeout, $this->_connectTimeout),
            'httpProxy'      => Utils::defaultString($runtime->httpProxy, $this->_httpProxy),
            'httpsProxy'     => Utils::defaultString($runtime->httpsProxy, $this->_httpsProxy),
            'noProxy'        => Utils::defaultString($runtime->noProxy, $this->_noProxy),
            'maxIdleConns'   => Utils::defaultNumber($runtime->maxIdleConns, $this->_maxIdleConns),
            'retry'          => [
                'retryable'   => $runtime->autoretry,
                'maxAttempts' => Utils::defaultNumber($runtime->maxAttempts, 3),
            ],
            'backoff' => [
                'policy' => Utils::defaultString($runtime->backoffPolicy, 'no'),
                'period' => Utils::defaultNumber($runtime->backoffPeriod, 1),
            ],
            'ignoreSSL' => $runtime->ignoreSSL,
        ];
        $_lastRequest   = null;
        $_lastException = null;
        $_now           = time();
        $_retryTimes    = 0;
        while (Tea::allowRetry(@$_runtime['retry'], $_retryTimes, $_now)) {
            if ($_retryTimes > 0) {
                $_backoffTime = Tea::getBackoffTime(@$_runtime['backoff'], $_retryTimes);
                if ($_backoffTime > 0) {
                    Tea::sleep($_backoffTime);
                }
            }
            $_retryTimes = $_retryTimes + 1;

            try {
                $_request           = new Request();
                $_request->protocol = Utils::defaultString($this->_protocol, $protocol);
                $_request->method   = $method;
                $_request->pathname = $pathname;
                $_request->headers  = [
                    'date'                    => Utils::getDateUTCString(),
                    'host'                    => $this->_endpoint,
                    'accept'                  => 'application/json',
                    'x-acs-signature-nonce'   => Utils::getNonce(),
                    'x-acs-signature-method'  => 'HMAC-SHA1',
                    'x-acs-signature-version' => '1.0',
                    'x-eventbridge-version'   => '2015-06-06',
                    'user-agent'              => Utils::getUserAgent(' aliyun-eventbridge-sdk/1.2.0'),
                ];
                if (!Utils::isUnset($this->_regionId)) {
                    $_request->headers['x-eventbridge-regionId'] = $this->_regionId;
                }
                if (!Utils::isUnset($body)) {
                    $_request->body                    = Utils::toJSONString($body);
                    $_request->headers['content-type'] = 'application/json; charset=utf-8';
                }
                if (Utils::equalString($action, 'putEvents')) {
                    $_request->headers['content-type'] = 'application/cloudevents-batch+json; charset=utf-8';
                }
                if (!Utils::isUnset($query)) {
                    $_request->query = $query;
                }
                $accessKeyId     = $this->_credential->getAccessKeyId();
                $accessKeySecret = $this->_credential->getAccessKeySecret();
                $securityToken   = $this->_credential->getSecurityToken();
                if (!Utils::empty_($securityToken)) {
                    $_request->headers['x-acs-accesskey-id']   = $accessKeyId;
                    $_request->headers['x-acs-security-token'] = $securityToken;
                }
                $stringToSign                       = Client::getStringToSign($_request);
                $_request->headers['authorization'] = 'acs:' . $accessKeyId . ':' . Client::getSignature($stringToSign, $accessKeySecret) . '';
                $_lastRequest                       = $_request;
                $_response                          = Tea::send($_request, $_runtime);
                $result                             = Utils::readAsJSON($_response->body);
                $tmp                                = Utils::assertAsMap($result);
                if (Utils::is4xx($_response->statusCode) || Utils::is5xx($_response->statusCode)) {
                    throw new TeaError([
                        'code'    => @$tmp['code'],
                        'message' => '[EventBridgeError] ' . (string) (@$tmp['message']) . '',
                        'data'    => $tmp,
                    ]);
                }

                return $tmp;
            } catch (Exception $e) {
                if (!($e instanceof TeaError)) {
                    $e = new TeaError([], $e->getMessage(), $e->getCode(), $e);
                }
                if (Tea::isRetryable($e)) {
                    $_lastException = $e;

                    continue;
                }

                throw $e;
            }
        }

        throw new TeaUnableRetryError($_lastRequest, $_lastException);
    }

    /**
     * Publish event to the aliyun EventBus.
     *
     * @param CloudEvent[] $eventList
     *
     * @return PutEventsResponse
     */
    public function putEvents($eventList)
    {
        $runtime = new RuntimeOptions([]);

        return $this->putEventsWithOptions($eventList, $runtime);
    }

    /**
     * Publish event to the aliyun EventBus.
     *
     * @param CloudEvent[]   $eventList
     * @param RuntimeOptions $runtime
     *
     * @return PutEventsResponse
     */
    public function putEventsWithOptions($eventList, $runtime)
    {
        foreach ($eventList as $cloudEvent) {
            if (Utils::isUnset($cloudEvent->specversion)) {
                $cloudEvent->specversion = '1.0';
            }
            if (Utils::isUnset($cloudEvent->datacontenttype)) {
                $cloudEvent->datacontenttype = 'application/json; charset=utf-8';
            }
            Utils::validateModel($cloudEvent);
        }
        $body = Client::serialize($eventList);

        return PutEventsResponse::fromMap($this->doRequest('putEvents', 'HTTP', 'POST', '/openapi/putEvents', null, $body, $runtime));
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services.
     *
     * @param CreateEventBusRequest $request
     *
     * @return CreateEventBusResponse
     */
    public function createEventBus($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->createEventBusWithOptions($request, $runtime);
    }

    /**
     * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services.
     *
     * @param CreateEventBusRequest $request
     * @param RuntimeOptions        $runtime
     *
     * @return CreateEventBusResponse
     */
    public function createEventBusWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return CreateEventBusResponse::fromMap($this->doRequest('createEventBus', 'HTTP', 'POST', '/openapi/createEventBus', null, Tea::merge($request), $runtime));
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus.
     *
     * @param DeleteEventBusRequest $request
     *
     * @return DeleteEventBusResponse
     */
    public function deleteEventBus($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->deleteEventBusWithOptions($request, $runtime);
    }

    /**
     * Deletes the specified custom event bus in your account,You can't delete your account's default event bus.
     *
     * @param DeleteEventBusRequest $request
     * @param RuntimeOptions        $runtime
     *
     * @return DeleteEventBusResponse
     */
    public function deleteEventBusWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return DeleteEventBusResponse::fromMap($this->doRequest('deleteEventBus', 'HTTP', 'POST', '/openapi/deleteEventBus', null, Tea::merge($request), $runtime));
    }

    /**
     * Displays details about an event bus in your account.
     *
     * @param GetEventBusRequest $request
     *
     * @return GetEventBusResponse
     */
    public function getEventBus($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->getEventBusWithOptions($request, $runtime);
    }

    /**
     * Displays details about an event bus in your account.
     *
     * @param GetEventBusRequest $request
     * @param RuntimeOptions     $runtime
     *
     * @return GetEventBusResponse
     */
    public function getEventBusWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return GetEventBusResponse::fromMap($this->doRequest('getEventBus', 'HTTP', 'POST', '/openapi/getEventBus', null, Tea::merge($request), $runtime));
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     *
     * @param ListEventBusesRequest $request
     *
     * @return ListEventBusesResponse
     */
    public function listEventBuses($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->listEventBusesWithOptions($request, $runtime);
    }

    /**
     * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
     *
     * @param ListEventBusesRequest $request
     * @param RuntimeOptions        $runtime
     *
     * @return ListEventBusesResponse
     */
    public function listEventBusesWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return ListEventBusesResponse::fromMap($this->doRequest('listEventBuses', 'HTTP', 'POST', '/openapi/listEventBuses', null, Tea::merge($request), $runtime));
    }

    /**
     * Create an EventBus rule on Aliyun.
     *
     * @param CreateRuleRequest $request
     *
     * @return CreateRuleResponse
     */
    public function createRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->createRuleWithOptions($request, $runtime);
    }

    /**
     * Create an EventBus rule on Aliyun.
     *
     * @param CreateRuleRequest $request
     * @param RuntimeOptions    $runtime
     *
     * @return CreateRuleResponse
     */
    public function createRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return CreateRuleResponse::fromMap($this->doRequest('createRule', 'HTTP', 'POST', '/openapi/createRule', null, Tea::merge($request), $runtime));
    }

    /**
     * Deletes the specified rule.
     *
     * @param DeleteRuleRequest $request
     *
     * @return DeleteRuleResponse
     */
    public function deleteRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->deleteRuleWithOptions($request, $runtime);
    }

    /**
     * Deletes the specified rule.
     *
     * @param DeleteRuleRequest $request
     * @param RuntimeOptions    $runtime
     *
     * @return DeleteRuleResponse
     */
    public function deleteRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return DeleteRuleResponse::fromMap($this->doRequest('deleteRule', 'HTTP', 'POST', '/openapi/deleteRule', null, Tea::merge($request), $runtime));
    }

    /**
     * Disables the specified rule.
     *
     * @param DisableRuleRequest $request
     *
     * @return DisableRuleResponse
     */
    public function disableRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->disableRuleWithOptions($request, $runtime);
    }

    /**
     * Disables the specified rule.
     *
     * @param DisableRuleRequest $request
     * @param RuntimeOptions     $runtime
     *
     * @return DisableRuleResponse
     */
    public function disableRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return DisableRuleResponse::fromMap($this->doRequest('disableRule', 'HTTP', 'POST', '/openapi/disableRule', null, Tea::merge($request), $runtime));
    }

    /**
     * Enables the specified rule.
     *
     * @param EnableRuleRequest $request
     *
     * @return EnableRuleResponse
     */
    public function enableRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->enableRuleWithOptions($request, $runtime);
    }

    /**
     * Enables the specified rule.
     *
     * @param EnableRuleRequest $request
     * @param RuntimeOptions    $runtime
     *
     * @return EnableRuleResponse
     */
    public function enableRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return EnableRuleResponse::fromMap($this->doRequest('enableRule', 'HTTP', 'POST', '/openapi/enableRule', null, Tea::merge($request), $runtime));
    }

    /**
     * Describes the specified rule.
     *
     * @param GetRuleRequest $request
     *
     * @return GetRuleResponse
     */
    public function getRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->getRuleWithOptions($request, $runtime);
    }

    /**
     * Describes the specified rule.
     *
     * @param GetRuleRequest $request
     * @param RuntimeOptions $runtime
     *
     * @return GetRuleResponse
     */
    public function getRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return GetRuleResponse::fromMap($this->doRequest('getRule', 'HTTP', 'POST', '/openapi/getRule', null, Tea::merge($request), $runtime));
    }

    /**
     * List all the rules which meet the search criteria.
     *
     * @param ListRulesRequest $request
     *
     * @return ListRulesResponse
     */
    public function listRules($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->listRulesWithOptions($request, $runtime);
    }

    /**
     * List all the rules which meet the search criteria.
     *
     * @param ListRulesRequest $request
     * @param RuntimeOptions   $runtime
     *
     * @return ListRulesResponse
     */
    public function listRulesWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return ListRulesResponse::fromMap($this->doRequest('listRules', 'HTTP', 'POST', '/openapi/listRules', null, Tea::merge($request), $runtime));
    }

    /**
     * update the specified rule.
     *
     * @param UpdateRuleRequest $request
     *
     * @return UpdateRuleResponse
     */
    public function updateRule($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->updateRuleWithOptions($request, $runtime);
    }

    /**
     * update the specified rule.
     *
     * @param UpdateRuleRequest $request
     * @param RuntimeOptions    $runtime
     *
     * @return UpdateRuleResponse
     */
    public function updateRuleWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return UpdateRuleResponse::fromMap($this->doRequest('updateRule', 'HTTP', 'POST', '/openapi/updateRule', null, Tea::merge($request), $runtime));
    }

    /**
     * Adds the specified targets to the specified rule.
     *
     * @param CreateTargetsRequest $request
     *
     * @return CreateTargetsResponse
     */
    public function createTargets($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->createTargetsWithOptions($request, $runtime);
    }

    /**
     * Adds the specified targets to the specified rule.
     *
     * @param CreateTargetsRequest $request
     * @param RuntimeOptions       $runtime
     *
     * @return CreateTargetsResponse
     */
    public function createTargetsWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return CreateTargetsResponse::fromMap($this->doRequest('createTargets', 'HTTP', 'POST', '/openapi/createTargets', null, Tea::merge($request), $runtime));
    }

    /**
     * Delete the specified targets from the specified rule.
     *
     * @param DeleteTargetsRequest $request
     *
     * @return DeleteTargetsResponse
     */
    public function deleteTargets($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->deleteTargetsWithOptions($request, $runtime);
    }

    /**
     * Delete the specified targets from the specified rule.
     *
     * @param DeleteTargetsRequest $request
     * @param RuntimeOptions       $runtime
     *
     * @return DeleteTargetsResponse
     */
    public function deleteTargetsWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return DeleteTargetsResponse::fromMap($this->doRequest('deleteTargets', 'HTTP', 'POST', '/openapi/deleteTargets', null, Tea::merge($request), $runtime));
    }

    /**
     * List all the Targets which meet the search criteria.
     *
     * @param ListTargetsRequest $request
     *
     * @return ListTargetsResponse
     */
    public function listTargets($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->listTargetsWithOptions($request, $runtime);
    }

    /**
     * List all the Targets which meet the search criteria.
     *
     * @param ListTargetsRequest $request
     * @param RuntimeOptions     $runtime
     *
     * @return ListTargetsResponse
     */
    public function listTargetsWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return ListTargetsResponse::fromMap($this->doRequest('listTargets', 'HTTP', 'POST', '/openapi/listTargets', null, Tea::merge($request), $runtime));
    }

    /**
     * Tests whether the specified event pattern matches the provided event.
     *
     * @param TestEventPatternRequest $request
     *
     * @return TestEventPatternResponse
     */
    public function testEventPattern($request)
    {
        $runtime = new RuntimeOptions([]);

        return $this->testEventPatternWithOptions($request, $runtime);
    }

    /**
     * Tests whether the specified event pattern matches the provided event.
     *
     * @param TestEventPatternRequest $request
     * @param RuntimeOptions          $runtime
     *
     * @return TestEventPatternResponse
     */
    public function testEventPatternWithOptions($request, $runtime)
    {
        Utils::validateModel($request);

        return TestEventPatternResponse::fromMap($this->doRequest('testEventPattern', 'HTTP', 'POST', '/openapi/testEventPattern', null, Tea::merge($request), $runtime));
    }
}
