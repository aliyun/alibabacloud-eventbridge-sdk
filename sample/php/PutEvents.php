<?php

namespace Alibabacloud\Sample;

use AlibabaCloud\SDK\EventBridge\Eventbridge;
use AlibabaCloud\SDK\EventBridge\Models\CloudEvent;
use AlibabaCloud\SDK\EventBridge\Models\Config;
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
        $config->accessKeyId = \getenv('accessKeyId');
        $config->accessKeySecret = \getenv('ACCESS_KEY_SECRET');
        $config->endpoint = \getenv('EVENT_BRIDGE_ENDPOINT');

        return new Eventbridge($config);
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
        self::PutEvents($client);
    }
}
