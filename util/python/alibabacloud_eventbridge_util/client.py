# -*- coding: utf-8 -*-
import hashlib
import hmac
import base64
import json


class Client(object):
    """
    This is for EventBridge SDK
    """
    @staticmethod
    def _get_canonicalized_headers(headers):
        canon_keys = list(filter(lambda k: k.startswith('x-acs'), headers))
        canon_header_list = ['%s:%s\n' % (i, headers[i]) for i in sorted(canon_keys)]
        canon_header = ''.join(canon_header_list)
        return canon_header

    @staticmethod
    def _get_canonicalized_resource(pathname, query):
        if len(query) <= 0:
            return pathname

        resource = '%s?' % pathname
        for key in sorted(query):
            if query[key] is not None:
                s = '%s=%s&' % (key, query[key])
                resource += s
        return resource[:-1]

    @staticmethod
    def get_string_to_sign(request):
        """
        Get the string to be signed according to request

        @param request:  which contains signed messages

        @rtype: str
        @return: the signed string
        """
        method, pathname, headers, query = request.method, request.pathname, request.headers, request.query

        content_md5 = '' if headers.get('content-md5') is None else headers.get('content-md5')
        content_type = '' if headers.get('content-type') is None else headers.get('content-type')
        date = '' if headers.get('date') is None else headers.get('date')

        header = '%s\n%s\n%s\n%s\n' % (method, content_md5, content_type, date)
        canon_headers = Client._get_canonicalized_headers(headers)
        canon_resource = Client._get_canonicalized_resource(pathname, query)
        sign_str = header + canon_headers + canon_resource
        return sign_str

    @staticmethod
    def get_signature(string_to_sign, secret):
        """
        Get signature according to stringToSign, secret

        @type string_to_sign: str
        @param string_to_sign:  the signed string

        @type secret: str
        @param secret: accesskey secret

        @rtype: str
        @return: the signature
        """
        hash_val = hmac.new(
            secret.encode('utf-8'),
            string_to_sign.encode('utf-8'),
            hashlib.sha1
        ).digest()
        signature = base64.b64encode(hash_val).decode('utf-8')
        return signature

    @staticmethod
    def serialize(events):
        """
        Serialize events

        @param events: the object

        @return: the result
        """
        if not events or not isinstance(events, list):
            return events

        out = []
        for e in events:
            dic = e.to_map().copy()

            content_type = dic.get('datacontenttype')
            if content_type not in ('application/json', 'text/json', '', None) and dic.get('data'):
                dic['data_base64'] = base64.b64encode(dic['data']).decode('utf-8')
                del dic['data']
            elif dic.get('data'):
                try:
                    dic['data'] = json.loads(str(dic['data'], encoding='utf-8'))
                except ValueError:
                    dic['data'] = str(dic['data'], encoding='utf-8')

            if dic.get('extensions'):
                for k, v in dic.get('extensions').items():
                    dic[k] = v
                del dic['extensions']

            dic = {key: value for key, value in dic.items() if value is not None}
            out.append(dic)
        return out

    @staticmethod
    def start_with(origin, prefix):
        """
        Judge if the  origin is start with the prefix
        @param origin the original string
        @param prefix the prefix string
        @return the result
        """
        return origin.startswith(prefix)
