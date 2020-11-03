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
use AlibabaCloud\SDK\EventBridge\Models\EBTargetParam;
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
use AlibabaCloud\Tea\Tea;
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
        // AccessKey ID
        $config->accessKeyId = '<accessKeyId>';
        // AccessKey Secret
        $config->accessKeySecret = '<accessKeySecret>';
        // 接入点
        $config->endpoint = '<endpoint>';

        return new Eventbridge($config);
    }

    /**
     * @param Eventbridge $client
     */
    public static function createEventBusSample($client)
    {
        try {
            $createEventBusRequest               = new CreateEventBusRequest([]);
            $createEventBusRequest->eventBusName = 'demo-bus';
            $resp                                = $client->createEventBus($createEventBusRequest);
            Console::log('--------------------Create bus success --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function deleteEventBusSample($client)
    {
        try {
            // delete
            $deleteEventBusRequest               = new DeleteEventBusRequest([]);
            $deleteEventBusRequest->eventBusName = 'demo-bus';
            $resp                                = $client->deleteEventBus($deleteEventBusRequest);
            Console::log('--------------------Delete bus success --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function getEventBusSample($client)
    {
        try {
            $getEventBusRequest               = new GetEventBusRequest([]);
            $getEventBusRequest->eventBusName = 'demo-bus';
            $resp                             = $client->getEventBus($getEventBusRequest);
            Console::log('--------------------get event bus success --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function listEventBusesSample($client)
    {
        try {
            $listEventBusesRequest        = new ListEventBusesRequest([]);
            $listEventBusesRequest->limit = 100;
            $resp                         = $client->listEventBuses($listEventBusesRequest);
            Console::log('--------------------list bus success --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function createEventRuleSample($client)
    {
        try {
            $createEventRuleRequest = new CreateRuleRequest([]);
            $targetEntry            = new TargetEntry([]);
            $targetEntry->id        = 'dingtalk.target';
            $targetEntry->endpoint  = 'https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460';
            $targetEntry->type      = 'acs.dingtalk';
            $param1                 = new EBTargetParam([]);
            $param1->resourceKey    = 'URL';
            $param1->form           = 'CONSTANT';
            $param1->value          = 'https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460';
            $param2                 = new EBTargetParam([]);
            $param2->resourceKey    = 'SecretKey';
            $param2->form           = 'CONSTANT';
            $param2->value          = 'SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234';
            $param3                 = new EBTargetParam([]);
            $param3->resourceKey    = 'Body';
            $param3->form           = 'TEMPLATE';
            $param3->value          = "{\n    \"key\":\"\$.source\",\n    \"value\":\"\$.data\"\n}";
            $param3->template       = '{"msgtype": "text","text": {"content": "Hello：${key}"}}';
            $paramList              = [
                $param1,
                $param2,
                $param3,
            ];
            $targetEntry->paramList = $paramList;
            $targetEntryList        = [
                $targetEntry,
            ];
            $createEventRuleRequest->targets       = $targetEntryList;
            $createEventRuleRequest->ruleName      = 'myRule';
            $createEventRuleRequest->eventBusName  = 'demo-bus';
            $createEventRuleRequest->filterPattern = '{"source":["acs.oss"],"type":["oss:ObjectCreated:UploadPart"]}';
            $createEventRuleRequest->status        = 'enable';
            $resp                                  = $client->createRule($createEventRuleRequest);
            Console::log('--------------------create rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function deleteEventRuleSample($client)
    {
        try {
            $deleteRuleRequest               = new DeleteRuleRequest([]);
            $deleteRuleRequest->ruleName     = 'myRule';
            $deleteRuleRequest->eventBusName = 'demo-bus';
            $resp                            = $client->deleteRule($deleteRuleRequest);
            Console::log('--------------------delete rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function enableEventRuleSample($client)
    {
        try {
            $enableEventRuleRequest               = new EnableRuleRequest([]);
            $enableEventRuleRequest->ruleName     = 'myRule';
            $enableEventRuleRequest->eventBusName = 'demo-bus';
            $resp                                 = $client->enableRule($enableEventRuleRequest);
            Console::log('--------------------enable rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function disableEventRuleSample($client)
    {
        try {
            $disableEventRuleRequest               = new DisableRuleRequest([]);
            $disableEventRuleRequest->ruleName     = 'myRule';
            $disableEventRuleRequest->eventBusName = 'demo-bus';
            $resp                                  = $client->disableRule($disableEventRuleRequest);
            Console::log('--------------------disable rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function getEventRuleSample($client)
    {
        try {
            $getEventRuleRequest               = new GetRuleRequest([]);
            $getEventRuleRequest->ruleName     = 'myRule';
            $getEventRuleRequest->eventBusName = 'demo-bus';
            $resp                              = $client->getRule($getEventRuleRequest);
            Console::log('--------------------get rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function listEventRulesSample($client)
    {
        try {
            $listEventRulesRequest               = new ListRulesRequest([]);
            $listEventRulesRequest->eventBusName = 'demo-bus';
            $resp                                = $client->listRules($listEventRulesRequest);
            Console::log('--------------------listRules rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function updateEventRuleSample($client)
    {
        try {
            $updateEventRuleRequest                = new UpdateRuleRequest([]);
            $updateEventRuleRequest->eventBusName  = 'demo-bus';
            $updateEventRuleRequest->ruleName      = 'myRule';
            $updateEventRuleRequest->filterPattern = '{"source":["acs.oss"],"type":["oss:BucketQueried:GetBucketStat"]}';
            $resp                                  = $client->updateRule($updateEventRuleRequest);
            Console::log('--------------------update rule success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function testEventPattern_False($client)
    {
        try {
            $request  = new TestEventPatternRequest([]);
            $pattern  = "{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [1]\n    }\n}";
            $jsonData = '{
        "id":"51efe8e2-841f-4900-8ff5-3c6dfae1060e",
        "source":"acs.oss",
        "type":"oss:ObjectCreated:PostObject",
        "dataschema":"http://taobao.com/test.json",
        "subject":"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg",
        "aliyuneventbusname":"demo-bus",
        "data":{
            "a":"test",
            "b":1
        }
}';
            $request->event        = $jsonData;
            $request->eventPattern = $pattern;
            $resp                  = $client->testEventPattern($request);
            Console::log('--------------------test event pattern --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function testEventPattern_True($client)
    {
        try {
            $request  = new TestEventPatternRequest([]);
            $pattern  = "{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [2]\n    }\n}";
            $jsonData = '{
        "id":"51efe8e2-841f-4900-8ff5-3c6dfae1060e",
        "source":"acs.oss",        
        "type":"oss:ObjectCreated:PostObject",
        "dataschema":"http://taobao.com/test.json",
        "subject":"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg",
        "aliyuneventbusname":"demo-bus",
        "data":{
            "a":"test",
            "b":1
        }
}';
            $request->event        = $jsonData;
            $request->eventPattern = $pattern;
            $resp                  = $client->testEventPattern($request);
            Console::log('--------------------test event pattern --------------------');
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function createTargetsSample($client)
    {
        try {
            $createTargetsRequest               = new CreateTargetsRequest([]);
            $createTargetsRequest->eventBusName = 'demo-bus';
            $createTargetsRequest->ruleName     = 'myRule';
            $targetEntry                        = new TargetEntry([]);
            $targetEntry->id                    = '1234';
            $targetEntry->endpoint              = 'http://www.baidu.com';
            $list                               = [
                $targetEntry,
            ];
            $createTargetsRequest->targets = $list;
            $response                      = $client->createTargets($createTargetsRequest);
            Console::log('--------------------Create targets success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($response)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function removeTargetsSample($client)
    {
        try {
            $removeTargetsRequest               = new DeleteTargetsRequest([]);
            $removeTargetsRequest->eventBusName = 'demo-bus';
            $removeTargetsRequest->ruleName     = 'myRule';
            $list                               = [
                'dingtalk.target',
            ];
            $removeTargetsRequest->targetIds = $list;
            $response                        = $client->deleteTargets($removeTargetsRequest);
            Console::log('--------------------remove targets success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($response)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param Eventbridge $client
     */
    public static function listTargetsSample($client)
    {
        try {
            $listTargetsRequest               = new ListTargetsRequest([]);
            $listTargetsRequest->eventBusName = 'demo-bus';
            $listTargetsRequest->ruleName     = 'myRule';
            $response                         = $client->listTargets($listTargetsRequest);
            Console::log('--------------------list targets success--------------------');
            Console::log(Utils::toJSONString(Tea::merge($response)));
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
            Console::log(Utils::toJSONString(Tea::merge($resp)));
        } catch (Exception $error) {
            if (!($error instanceof TeaError)) {
                $error = new TeaError([], $error->getMessage(), $error->getCode(), $error);
            }
            Console::log($error->message);
        }
    }

    /**
     * @param string[] $args
     */
    public static function main($args)
    {
        $client = self::createClient();
        self::createEventBusSample($client);
        self::PutEvents($client);
        self::getEventBusSample($client);
        self::listEventBusesSample($client);
        self::createEventRuleSample($client);
        self::enableEventRuleSample($client);
        self::disableEventRuleSample($client);
        self::getEventRuleSample($client);
        self::listEventRulesSample($client);
        self::updateEventRuleSample($client);
        self::testEventPattern_False($client);
        self::testEventPattern_True($client);
        self::createTargetsSample($client);
        self::listTargetsSample($client);
        self::removeTargetsSample($client);
        self::deleteEventRuleSample($client);
        self::deleteEventBusSample($client);
    }
}
