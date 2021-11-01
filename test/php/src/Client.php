<?php

// This file is auto-generated, don't edit it. Thanks.

namespace Alibabacloud\Sample;

use AlibabaCloud\SDK\EventBridge\Eventbridge;
use AlibabaCloud\SDK\EventBridge\Models\CloudEvent;
use AlibabaCloud\SDK\EventBridge\Models\Config;
use AlibabaCloud\SDK\EventBridge\Models\CreateEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\CreateRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\CreateTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\DeleteTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\DisableRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\EnableRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\GetEventBusRequest;
use AlibabaCloud\SDK\EventBridge\Models\GetRuleRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListEventBusesRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListRulesRequest;
use AlibabaCloud\SDK\EventBridge\Models\ListTargetsRequest;
use AlibabaCloud\SDK\EventBridge\Models\TargetEntry;
use AlibabaCloud\SDK\EventBridge\Models\TestEventPatternRequest;
use AlibabaCloud\SDK\EventBridge\Models\UpdateRuleRequest;
use AlibabaCloud\Tea\Console\Console;
use AlibabaCloud\Tea\Exception\TeaError;
use AlibabaCloud\Tea\Utils\Utils;
use Exception;

class Client
{
    /**
     * Create client  初始化公共请求参数.
     *
     * @return Eventbridge
     */
    public static function createClient()
    {
        $config = new Config([]);
        // 您的AccessKey ID
        $config->accessKeyId = \getenv('ACCESS_KEY_ID');
        // 您的AccessKey Secret
        $config->accessKeySecret = \getenv('ACCESS_KEY_SECRET');
        // 您的可用区ID
        $config->endpoint = \getenv('EVENT_BRIDGE_ENDPOINT');

        return new Eventbridge($config);
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function createEventBusSample($client)
    {
        try {
            $createEventBusRequest               = new CreateEventBusRequest([]);
            $createEventBusRequest->eventBusName = 'demo-bus';
            $response                            = $client->createEventBus($createEventBusRequest);
            Console::log('--------------------Create bus success --------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function deleteEventBusSample($client)
    {
        try {
            // delete
            $deleteEventBusRequest               = new DeleteEventBusRequest([]);
            $deleteEventBusRequest->eventBusName = 'demo-bus';
            $client->deleteEventBus($deleteEventBusRequest);
            Console::log('--------------------Delete bus success --------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function getEventBusSample($client)
    {
        try {
            $describeEventBusRequest               = new GetEventBusRequest([]);
            $describeEventBusRequest->eventBusName = 'demo-bus';
            $deScribeResponse                      = $client->getEventBus($describeEventBusRequest);
            Console::log('--------------------describe bus success --------------------');
            Console::log(Utils::toJSONString($deScribeResponse->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function listEventBusSample($client)
    {
        try {
            $listEventBusesRequest        = new ListEventBusesRequest([]);
            $listEventBusesRequest->limit = 100;
            $response                     = $client->listEventBuses($listEventBusesRequest);
            Console::log('--------------------list bus success --------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function createEventRuleSample($client)
    {
        try {
            $createEventRuleRequest = new CreateRuleRequest([]);
            $targetEntry            = new TargetEntry([]);
            $targetEntry->id        = '1234';
            $targetEntry->endpoint  = 'http://www.baidu.com';
            $targetEntryList        = [
                $targetEntry,
            ];
            // targetEntryList[0] =targetEntry;
            $createEventRuleRequest->ruleName      = 'myRule3';
            $createEventRuleRequest->eventBusName  = 'demo-bus';
            $createEventRuleRequest->filterPattern = '{"source":["acs.oss"],"type":["oss:ObjectCreated:UploadPart"]}';
            $createEventRuleRequest->status        = 'enable';
            $createEventRuleRequest->targets       = $targetEntryList;
            $response                              = $client->createRule($createEventRuleRequest);
            Console::log('--------------------create rule success--------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function deleteEventRuleSample($client)
    {
        try {
            $deleteRuleRequest               = new DeleteRuleRequest([]);
            $deleteRuleRequest->ruleName     = 'myRule3';
            $deleteRuleRequest->eventBusName = 'demo-bus';
            $client->deleteRule($deleteRuleRequest);
            Console::log('--------------------delete rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function enableEventRuleSample($client)
    {
        try {
            $enableEventRuleRequest               = new EnableRuleRequest([]);
            $enableEventRuleRequest->ruleName     = 'myRule3';
            $enableEventRuleRequest->eventBusName = 'demo-bus';
            $client->enableRule($enableEventRuleRequest);
            Console::log('--------------------enable rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function disableEventRuleSample($client)
    {
        try {
            $disableEventRuleRequest               = new DisableRuleRequest([]);
            $disableEventRuleRequest->ruleName     = 'myRule3';
            $disableEventRuleRequest->eventBusName = 'demo-bus';
            $client->disableRule($disableEventRuleRequest);
            Console::log('--------------------disable rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function describeEventRuleSample($client)
    {
        try {
            $describeEventRuleRequest               = new GetRuleRequest([]);
            $describeEventRuleRequest->ruleName     = 'myRule3';
            $describeEventRuleRequest->eventBusName = 'demo-bus';
            $client->getRule($describeEventRuleRequest);
            Console::log('--------------------describe rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function listEventRuleSample($client)
    {
        try {
            $listEventRulesRequest               = new ListRulesRequest([]);
            $listEventRulesRequest->eventBusName = 'demo-bus';
            $response                            = $client->listRules($listEventRulesRequest);
            Console::log('--------------------listRules rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function updateEventRuleSample($client)
    {
        try {
            $updateEventRuleRequest                = new UpdateRuleRequest([]);
            $updateEventRuleRequest->eventBusName  = 'demo-bus';
            $updateEventRuleRequest->ruleName      = 'myRule3';
            $updateEventRuleRequest->filterPattern = '{"source":["acs.oss"],"type":["oss:BucketQueried:GetBucketStat"]}';
            $client->updateRule($updateEventRuleRequest);
            Console::log('--------------------update rule success--------------------');
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function testEventPattern_False($client)
    {
        try {
            $request  = new TestEventPatternRequest([]);
            $pattern  = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [1]\n" + "    }\n" + '}';
            $jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
            "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n" +
            "        \"dataschema\":\"http://taobao.com/test.json\",\n" +
            "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
            "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
            "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + '}';
            $request->event           = $jsonData;
            $request->eventPattern    = $pattern;
            $testEventPatternResponse = $client->testEventPattern($request);
            Console::log('--------------------test event pattern --------------------');
            Console::log(Utils::toJSONString($testEventPatternResponse->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function testEventPattern_True($client)
    {
        try {
            $request  = new TestEventPatternRequest([]);
            $pattern  = "{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [2]\n" + "    }\n" + '}';
            $jsonData = "{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
            "        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n" +
            "        \"dataschema\":\"http://taobao.com/test.json\",\n" +
            "        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
            "        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
            "            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + '}';
            $request->event           = $jsonData;
            $request->eventPattern    = $pattern;
            $testEventPatternResponse = $client->testEventPattern($request);
            Console::log('--------------------test event pattern --------------------');
            Console::log(Utils::toJSONString($testEventPatternResponse->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function addTargetsSample($client)
    {
        try {
            $addTargetsRequest               = new CreateTargetsRequest([]);
            $addTargetsRequest->eventBusName = 'demo-bus';
            $addTargetsRequest->ruleName     = 'myRule3';
            $targetEntry                     = new TargetEntry([]);
            $targetEntry->id                 = '1234';
            $targetEntry->endpoint           = 'http://www.baidu.com';
            $list                            = [
                $targetEntry,
            ];
            $addTargetsRequest->targets = $list;
            $response                   = $client->createTargets($addTargetsRequest);
            Console::log('--------------------Add targets success--------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function removeTargetsSample($client)
    {
        try {
            $removeTargetsResponse               = new DeleteTargetsRequest([]);
            $removeTargetsResponse->eventBusName = 'demo-bus';
            $removeTargetsResponse->ruleName     = 'myRule3';
            $list                                = [
                '1234',
            ];
            $removeTargetsResponse->targetIds = $list;
            $response                         = $client->deleteTargets($removeTargetsResponse);
            Console::log('--------------------remove targets success--------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function listTargetsSample($client)
    {
        try {
            $listTargetsRequest               = new ListTargetsRequest([]);
            $listTargetsRequest->eventBusName = 'demo-bus';
            $listTargetsRequest->ruleName     = 'myRule3';
            $response                         = $client->listTargets($listTargetsRequest);
            Console::log('--------------------list targets success--------------------');
            Console::log(Utils::toJSONString($response->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * PutEvents.
     *
     * @param Eventbridge $client
     *
     * @return void
     */
    public static function PutEvents($client)
    {
        $event                  = new CloudEvent([]);
        $event->datacontenttype = 'application/json';
        $event->data            = Utils::toBytes('test');
        $event->id              = 'a5074581-7e74-4e4c-868f-47e7afdf8445';
        $event->source          = 'acs.oss';
        $event->specversion     = '1.0';
        $event->type            = 'oss:ObjectCreated:PostObject';
        $event->time            = '2020-08-24T13:54:05.965Asia/Shanghai';
        $event->subject         = '1.0';
        $event->type            = 'acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg';
        $event->extensions      = [
            'aliyuneventbusname' => 'demo-bus',
        ];
        try {
            $resp = $client->putEvents([
                $event,
            ]);
            Console::log('--------------------Publish event to the aliyun EventBus--------------------');
            Console::log(Utils::toJSONString($resp->toMap()));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param string[] $args
     *
     * @return void
     */
    public static function main($args)
    {
        $client = self::createClient();
        self::createEventBusSample($client);
        self::PutEvents($client);
        self::getEventBusSample($client);
        self::listEventBusSample($client);
        self::createEventRuleSample($client);
        self::enableEventRuleSample($client);
        self::disableEventRuleSample($client);
        self::describeEventRuleSample($client);
        self::listEventRuleSample($client);
        self::updateEventRuleSample($client);
        self::testEventPattern_False($client);
        self::testEventPattern_True($client);
        self::addTargetsSample($client);
        self::listTargetsSample($client);
        self::removeTargetsSample($client);
        self::deleteEventRuleSample($client);
        self::deleteEventBusSample($client);
    }
}
