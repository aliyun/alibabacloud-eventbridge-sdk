import unittest
from Tea.exceptions import UnretryableException, TeaException
from alibabacloud_eventbridge.client import Client
from alibabacloud_eventbridge.models import Config, CloudEvent


class TestClient(unittest.TestCase):
    def test_api(self):
        config = Config(
            access_key_id='LTAI4G3Qaw8Mqso8tRav5L4r',
            access_key_secret='p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B',
            endpoint='eventbridge.cn-hangzhou.aliyuncs.com'
        )
        client = Client(config)
        event1 = CloudEvent(
            id='a5074581-7e74-4e4c-868f-47e7afdf8445',
            source='acs.aliyuncvc',
            time='2020-11-13T17:37:05.965Asia/Shanghai',
            subject='acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg',
            type='aliyuncvc:MeetingEvent:MeetingStateEvent',
            extensions={
                'aliyuneventbusname': 'default'
            }
        )
        try:
            client.put_events_to_account_if_enable('1451693531259897', [event1])
        except UnretryableException as e:
            self.assertEqual('ServiceNotEnabled', e.inner_exception.code)

        try:
            client.put_events_to_account_if_enable('1451693531259897', [event1])
        except TeaException as e:
            self.assertEqual(
                '[EventBridgeError] The OwnerId that your Access Key Id associated to has not enabled.',
                e.message
            )
