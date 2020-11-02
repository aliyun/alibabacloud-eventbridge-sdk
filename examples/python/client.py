# -*- coding: utf-8 -*-
# This file is auto-generated, don't edit it. Thanks.
from Tea.core import TeaCore

from alibabacloud_eventbridge.client import Client as EventBridgeClient
from alibabacloud_eventbridge import models as event_bridge_models
from alibabacloud_tea_console.client import Client as ConsoleClient
from alibabacloud_tea_util.client import Client as UtilClient


class Client(object):
    def __init__(self):
        pass

    @staticmethod
    def create_client():
        """
        Create client  初始化公共请求参数
        """
        config = event_bridge_models.Config()
        # AccessKey ID
        config.access_key_id = '<accessKeyId>'
        # AccessKey Secret
        config.access_key_secret = '<accessKeySecret>'
        # 接入点
        config.endpoint = '<endpoint>'
        return EventBridgeClient(config)

    @staticmethod
    def create_event_bus_sample(client):
        try:
            create_event_bus_request = event_bridge_models.CreateEventBusRequest()
            create_event_bus_request.event_bus_name = 'demo-bus'
            resp = client.create_event_bus(create_event_bus_request)
            ConsoleClient.log('--------------------Create bus success --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def delete_event_bus_sample(client):
        try:
            # delete
            delete_event_bus_request = event_bridge_models.DeleteEventBusRequest()
            delete_event_bus_request.event_bus_name = 'demo-bus'
            resp = client.delete_event_bus(delete_event_bus_request)
            ConsoleClient.log('--------------------Delete bus success --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def get_event_bus_sample(client):
        try:
            get_event_bus_request = event_bridge_models.GetEventBusRequest()
            get_event_bus_request.event_bus_name = 'demo-bus'
            resp = client.get_event_bus(get_event_bus_request)
            ConsoleClient.log('--------------------get event bus success --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def list_event_buses_sample(client):
        try:
            list_event_buses_request = event_bridge_models.ListEventBusesRequest()
            list_event_buses_request.limit = 100
            resp = client.list_event_buses(list_event_buses_request)
            ConsoleClient.log('--------------------list bus success --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def create_event_rule_sample(client):
        try:
            create_event_rule_request = event_bridge_models.CreateRuleRequest()
            target_entry = event_bridge_models.TargetEntry()
            target_entry.id = 'dingtalk.target'
            target_entry.endpoint = 'https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460'
            target_entry.type = 'acs.dingtalk'
            param_1 = event_bridge_models.EBTargetParam()
            param_1.resource_key = 'URL'
            param_1.form = 'CONSTANT'
            param_1.value = 'https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460'
            param_2 = event_bridge_models.EBTargetParam()
            param_2.resource_key = 'SecretKey'
            param_2.form = 'CONSTANT'
            param_2.value = 'SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234'
            param_3 = event_bridge_models.EBTargetParam()
            param_3.resource_key = 'Body'
            param_3.form = 'TEMPLATE'
            param_3.value = '{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}'
            param_3.template = '{"msgtype": "text","text": {"content": "Hello：${key}"}}'
            param_list = [
                param_1,
                param_2,
                param_3
            ]
            target_entry.param_list = param_list
            target_entry_list = [
                target_entry
            ]
            create_event_rule_request.targets = target_entry_list
            create_event_rule_request.rule_name = 'myRule'
            create_event_rule_request.event_bus_name = 'demo-bus'
            create_event_rule_request.filter_pattern = '{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}'
            create_event_rule_request.status = 'enable'
            resp = client.create_rule(create_event_rule_request)
            ConsoleClient.log('--------------------create rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def delete_event_rule_sample(client):
        try:
            delete_rule_request = event_bridge_models.DeleteRuleRequest()
            delete_rule_request.rule_name = 'myRule'
            delete_rule_request.event_bus_name = 'demo-bus'
            resp = client.delete_rule(delete_rule_request)
            ConsoleClient.log('--------------------delete rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def enable_event_rule_sample(client):
        try:
            enable_event_rule_request = event_bridge_models.EnableRuleRequest()
            enable_event_rule_request.rule_name = 'myRule'
            enable_event_rule_request.event_bus_name = 'demo-bus'
            resp = client.enable_rule(enable_event_rule_request)
            ConsoleClient.log('--------------------enable rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def disable_event_rule_sample(client):
        try:
            disable_event_rule_request = event_bridge_models.DisableRuleRequest()
            disable_event_rule_request.rule_name = 'myRule'
            disable_event_rule_request.event_bus_name = 'demo-bus'
            resp = client.disable_rule(disable_event_rule_request)
            ConsoleClient.log('--------------------disable rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def get_event_rule_sample(client):
        try:
            get_event_rule_request = event_bridge_models.GetRuleRequest()
            get_event_rule_request.rule_name = 'myRule'
            get_event_rule_request.event_bus_name = 'demo-bus'
            resp = client.get_rule(get_event_rule_request)
            ConsoleClient.log('--------------------get rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def list_event_rules_sample(client):
        try:
            list_event_rules_request = event_bridge_models.ListRulesRequest()
            list_event_rules_request.event_bus_name = 'demo-bus'
            resp = client.list_rules(list_event_rules_request)
            ConsoleClient.log('--------------------listRules rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def update_event_rule_sample(client):
        try:
            update_event_rule_request = event_bridge_models.UpdateRuleRequest()
            update_event_rule_request.event_bus_name = 'demo-bus'
            update_event_rule_request.rule_name = 'myRule'
            update_event_rule_request.filter_pattern = '{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}'
            resp = client.update_rule(update_event_rule_request)
            ConsoleClient.log('--------------------update rule success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def test_event_pattern__false(client):
        try:
            request = event_bridge_models.TestEventPatternRequest()
            pattern = '{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [1]\n    }\n}'
            json_data = '''{
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",
        \"source\":\"acs.oss\",
        \"type\":\"oss:ObjectCreated:PostObject\",
        \"dataschema\":\"http://taobao.com/test.json\",
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",
        \"aliyuneventbusname\":\"demo-bus\",
        \"data\":{
            \"a\":\"test\",
            \"b\":1
        }
}'''
            request.event = json_data
            request.event_pattern = pattern
            resp = client.test_event_pattern(request)
            ConsoleClient.log('--------------------test event pattern --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def test_event_pattern__true(client):
        try:
            request = event_bridge_models.TestEventPatternRequest()
            pattern = '{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [2]\n    }\n}'
            json_data = '''{
        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",
        \"source\":\"acs.oss\",        
        \"type\":\"oss:ObjectCreated:PostObject\",
        \"dataschema\":\"http://taobao.com/test.json\",
        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",
        \"aliyuneventbusname\":\"demo-bus\",
        \"data\":{
            \"a\":\"test\",
            \"b\":1
        }
}'''
            request.event = json_data
            request.event_pattern = pattern
            resp = client.test_event_pattern(request)
            ConsoleClient.log('--------------------test event pattern --------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def create_targets_sample(client):
        try:
            create_targets_request = event_bridge_models.CreateTargetsRequest()
            create_targets_request.event_bus_name = 'demo-bus'
            create_targets_request.rule_name = 'myRule'
            target_entry = event_bridge_models.TargetEntry()
            target_entry.id = '1234'
            target_entry.endpoint = 'http://www.baidu.com'
            list = [
                target_entry
            ]
            create_targets_request.targets = list
            response = client.create_targets(create_targets_request)
            ConsoleClient.log('--------------------Create targets success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(response)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def remove_targets_sample(client):
        try:
            remove_targets_request = event_bridge_models.DeleteTargetsRequest()
            remove_targets_request.event_bus_name = 'demo-bus'
            remove_targets_request.rule_name = 'myRule'
            list = [
                'dingtalk.target'
            ]
            remove_targets_request.target_ids = list
            response = client.delete_targets(remove_targets_request)
            ConsoleClient.log('--------------------remove targets success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(response)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def list_targets_sample(client):
        try:
            list_targets_request = event_bridge_models.ListTargetsRequest()
            list_targets_request.event_bus_name = 'demo-bus'
            list_targets_request.rule_name = 'myRule'
            response = client.list_targets(list_targets_request)
            ConsoleClient.log('--------------------list targets success--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(response)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def put_events(client):
        """
        PutEvents
        """
        event = event_bridge_models.CloudEvent()
        event.datacontenttype = 'application/json'
        event.data = UtilClient.to_bytes('test')
        event.id = 'a5074581-7e74-4e4c-868f-47e7afdf8445'
        event.source = 'acs.oss'
        event.specversion = '1.0'
        event.type = 'oss:ObjectCreated:PostObject'
        event.time = '2020-08-24T13:54:05.965Asia/Shanghai'
        event.subject = '1.0'
        event.type = 'acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg'
        event.extensions = {
            'aliyuneventbusname': 'demo-bus'
        }
        try:
            resp = client.put_events([
                event
            ])
            ConsoleClient.log('--------------------Publish event to the aliyun EventBus--------------------')
            ConsoleClient.log(UtilClient.to_jsonstring(TeaCore.to_map(resp)))
        except Exception as error:
            ConsoleClient.log(error.message)

    @staticmethod
    def main(args):
        client = Client.create_client()
        Client.create_event_bus_sample(client)
        Client.put_events(client)
        Client.get_event_bus_sample(client)
        Client.list_event_buses_sample(client)
        Client.create_event_rule_sample(client)
        Client.enable_event_rule_sample(client)
        Client.disable_event_rule_sample(client)
        Client.get_event_rule_sample(client)
        Client.list_event_rules_sample(client)
        Client.update_event_rule_sample(client)
        Client.test_event_pattern__false(client)
        Client.test_event_pattern__true(client)
        Client.create_targets_sample(client)
        Client.list_targets_sample(client)
        Client.remove_targets_sample(client)
        Client.delete_event_rule_sample(client)
        Client.delete_event_bus_sample(client)
