import unittest

from Tea.request import TeaRequest
from Tea.model import TeaModel
from alibabacloud_eventbridge_util.client import Client


class TestClient(unittest.TestCase):
    class CloudEvent(TeaModel):
        """
        Cloud Event Stanard Froamt
        """

        def __init__(self, id=None, source=None, specversion=None, type=None, datacontenttype=None, dataschema=None,
                     subject=None, time=None, extensions=None, data=None):
            self.id = id  # type: str
            self.source = source  # type: str
            self.specversion = specversion  # type: str
            self.type = type  # type: str
            self.datacontenttype = datacontenttype  # type: str
            self.dataschema = dataschema  # type: str
            self.subject = subject  # type: str
            self.time = time  # type: str
            self.extensions = extensions  # type: Dict[str, Any]
            self.data = data  # type: bytes

        def validate(self):
            self.validate_required(self.id, 'id')
            self.validate_required(self.source, 'source')
            if self.source:
                self.validate_max_length(self.source, 'source', 128)
            self.validate_required(self.specversion, 'specversion')
            self.validate_required(self.type, 'type')
            if self.type:
                self.validate_max_length(self.type, 'type', 64)
            if self.time:
                self.validate_max_length(self.time, 'time', 64)
                self.validate_pattern(self.time, 'time',
                                      '[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*')
            self.validate_required(self.extensions, 'extensions')

        def to_map(self):
            result = {}
            result['id'] = self.id
            result['source'] = self.source
            result['specversion'] = self.specversion
            result['type'] = self.type
            result['datacontenttype'] = self.datacontenttype
            result['dataschema'] = self.dataschema
            result['subject'] = self.subject
            result['time'] = self.time
            result['extensions'] = self.extensions
            result['data'] = self.data
            return result

        def from_map(self, map={}):
            self.id = map.get('id')
            self.source = map.get('source')
            self.specversion = map.get('specversion')
            self.type = map.get('type')
            self.datacontenttype = map.get('datacontenttype')
            self.dataschema = map.get('dataschema')
            self.subject = map.get('subject')
            self.time = map.get('time')
            self.extensions = map.get('extensions')
            self.data = map.get('data')
            return self

    def test_get_string_to_sign(self):
        request = TeaRequest()
        str_to_sign = Client.get_string_to_sign(request)
        self.assertEqual('GET\n\n\n\n', str_to_sign)

        request = TeaRequest()
        request.method = "POST"
        request.query = {
            'test': 'tests'
        }
        str_to_sign = Client.get_string_to_sign(request)
        self.assertEqual('POST\n\n\n\n?test=tests', str_to_sign)

        request = TeaRequest()
        request.headers = {
            'content-md5': 'md5',
        }
        str_to_sign = Client.get_string_to_sign(request)
        self.assertEqual('GET\nmd5\n\n\n', str_to_sign)

        request = TeaRequest()
        request.pathname = "Pathname"
        request.query = {
            'ccp': 'ok',
            'test': 'tests',
            'test1': ''
        }
        request.headers = {
            'x-acs-meta': 'user',
            "accept": "application/json",
            'content-md5': 'md5',
            'content-type': 'application/json',
            'date': 'date'
        }
        str_to_sign = Client.get_string_to_sign(request)
        s = 'GET\nmd5\napplication/json\ndate\nx-acs-meta:user\nPathname?ccp=ok&test=tests&test1='
        self.assertEqual(s, str_to_sign)

    def test_get_signature(self):
        request = TeaRequest()
        str_to_sign = Client.get_string_to_sign(request)
        signature = Client.get_signature(str_to_sign, 'secret')
        self.assertEqual('GET\n\n\n\n', str_to_sign)
        self.assertEqual('Mzu+31oD5IDdv3WFBNIi4Y7JZto=', signature)

    def test_serialize(self):
        test_model1 = self.CloudEvent(
            datacontenttype='text/plain',
            data=b'test',
            extensions={'key': 'ok'}
        )
        test_model2 = self.CloudEvent(
            datacontenttype='text/json',
            data=b'test',
        )
        events = [
            test_model1, test_model2
        ]
        res = Client.serialize(events)
        self.assertEqual('ok', res[0]['key'])
        self.assertEqual('dGVzdA==', res[0]['data_base64'])
        self.assertIsNone(res[0].get('data'))
        self.assertIsNotNone(res[1].get('data'))

        res = Client.serialize(None)
        self.assertIsNone(res)

        res = Client.serialize('string')
        self.assertEqual('string', res)

    def test_start_with(self):
        self.assertTrue(Client.start_with('hello world', 'hello'))
        self.assertFalse(Client.start_with('hello world', 'world'))

