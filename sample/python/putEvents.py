# -*- coding: utf-8 -*-
# This file is auto-generated, don't edit it. Thanks.
from alibabacloud_eventbridge.client import Client as EventBridgeClient
from alibabacloud_eventbridge import models as event_bridge_models
from alibabacloud_tea_console.client import Client as ConsoleClient
from alibabacloud_tea_util.client import Client as UtilClient


class Client(object):

    @staticmethod
    def create_client():
        config = event_bridge_models.Config(
        )
        config.access_key_id = "<accessKeyId>"
        config.access_key_secret = "<accessKeySecret>"
        config.endpoint = "<endpoint>"
        return EventBridgeClient(config)

    @staticmethod
    def put_events(client):
        event = event_bridge_models.CloudEvent(
        )
        event.datacontenttype = "application/json"
        event.data = UtilClient.to_bytes("test")
        event.id = "a5074581-7e74-4e4c-868f-47e7afdf8445"
        event.source = "acs.oss"
        event.type = "oss:ObjectCreated:PostObject"
        event.time = "2020-08-24T13:54:05.965Asia/Shanghai"
        event.subject = "1.0"
        event.type = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg"
        event.extensions = {
            "aliyuneventbusname": "demo-bus"
        }
        try:
            resp = client.put_events([
                event
            ])
            ConsoleClient.log("--------------------Publish event to the aliyun EventBus--------------------")
            ConsoleClient.log(UtilClient.to_jsonstring(resp.to_map()))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def main(args):
        client = Client.create_client()
        Client.create_event_bus_sample(client)
        Client.put_events(client)