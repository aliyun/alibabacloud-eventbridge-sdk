# -*- coding: utf-8 -*-
# This file is auto-generated, don't edit it. Thanks.
from Tea.model import TeaModel
from typing import Dict, Any, List

from alibabacloud_credentials.client import Client as CredentialClient


class Config(TeaModel):
    """
    Model for initing client
    """
    def __init__(
        self,
        access_key_id: str = None,
        access_key_secret: str = None,
        security_token: str = None,
        protocol: str = None,
        region_id: str = None,
        read_timeout: int = None,
        connect_timeout: int = None,
        http_proxy: str = None,
        https_proxy: str = None,
        credential: CredentialClient = None,
        endpoint: str = None,
        no_proxy: str = None,
        max_idle_conns: int = None,
    ):
        # accesskey id
        self.access_key_id = access_key_id
        # accesskey secret
        self.access_key_secret = access_key_secret
        # security token
        self.security_token = security_token
        # http protocol
        self.protocol = protocol
        # region id
        self.region_id = region_id
        # read timeout
        self.read_timeout = read_timeout
        # connect timeout
        self.connect_timeout = connect_timeout
        # http proxy
        self.http_proxy = http_proxy
        # https proxy
        self.https_proxy = https_proxy
        # credential
        self.credential = credential
        # endpoint
        self.endpoint = endpoint
        # proxy white list
        self.no_proxy = no_proxy
        # max idle conns
        self.max_idle_conns = max_idle_conns

    def validate(self):
        if self.region_id is not None:
            self.validate_pattern(self.region_id, 'region_id', '^[a-zA-Z0-9_-]+$')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.access_key_id is not None:
            result['accessKeyId'] = self.access_key_id
        if self.access_key_secret is not None:
            result['accessKeySecret'] = self.access_key_secret
        if self.security_token is not None:
            result['securityToken'] = self.security_token
        if self.protocol is not None:
            result['protocol'] = self.protocol
        if self.region_id is not None:
            result['regionId'] = self.region_id
        if self.read_timeout is not None:
            result['readTimeout'] = self.read_timeout
        if self.connect_timeout is not None:
            result['connectTimeout'] = self.connect_timeout
        if self.http_proxy is not None:
            result['httpProxy'] = self.http_proxy
        if self.https_proxy is not None:
            result['httpsProxy'] = self.https_proxy
        if self.credential is not None:
            result['credential'] = self.credential
        if self.endpoint is not None:
            result['endpoint'] = self.endpoint
        if self.no_proxy is not None:
            result['noProxy'] = self.no_proxy
        if self.max_idle_conns is not None:
            result['maxIdleConns'] = self.max_idle_conns
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('accessKeyId') is not None:
            self.access_key_id = m.get('accessKeyId')
        if m.get('accessKeySecret') is not None:
            self.access_key_secret = m.get('accessKeySecret')
        if m.get('securityToken') is not None:
            self.security_token = m.get('securityToken')
        if m.get('protocol') is not None:
            self.protocol = m.get('protocol')
        if m.get('regionId') is not None:
            self.region_id = m.get('regionId')
        if m.get('readTimeout') is not None:
            self.read_timeout = m.get('readTimeout')
        if m.get('connectTimeout') is not None:
            self.connect_timeout = m.get('connectTimeout')
        if m.get('httpProxy') is not None:
            self.http_proxy = m.get('httpProxy')
        if m.get('httpsProxy') is not None:
            self.https_proxy = m.get('httpsProxy')
        if m.get('credential') is not None:
            self.credential = m.get('credential')
        if m.get('endpoint') is not None:
            self.endpoint = m.get('endpoint')
        if m.get('noProxy') is not None:
            self.no_proxy = m.get('noProxy')
        if m.get('maxIdleConns') is not None:
            self.max_idle_conns = m.get('maxIdleConns')
        return self


class PutEventsResponseEntry(TeaModel):
    """
    The detail of put event result
    """
    def __init__(
        self,
        event_id: str = None,
        trace_id: str = None,
        error_code: str = None,
        error_message: str = None,
    ):
        self.event_id = event_id
        self.trace_id = trace_id
        self.error_code = error_code
        self.error_message = error_message

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_id is not None:
            result['EventId'] = self.event_id
        if self.trace_id is not None:
            result['TraceId'] = self.trace_id
        if self.error_code is not None:
            result['ErrorCode'] = self.error_code
        if self.error_message is not None:
            result['ErrorMessage'] = self.error_message
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventId') is not None:
            self.event_id = m.get('EventId')
        if m.get('TraceId') is not None:
            self.trace_id = m.get('TraceId')
        if m.get('ErrorCode') is not None:
            self.error_code = m.get('ErrorCode')
        if m.get('ErrorMessage') is not None:
            self.error_message = m.get('ErrorMessage')
        return self


class CloudEvent(TeaModel):
    """
    Cloud Event Stanard Froamt
    """
    def __init__(
        self,
        id: str = None,
        source: str = None,
        specversion: str = None,
        type: str = None,
        datacontenttype: str = None,
        dataschema: str = None,
        subject: str = None,
        time: str = None,
        extensions: Dict[str, Any] = None,
        data: bytes = None,
    ):
        self.id = id
        self.source = source
        self.specversion = specversion
        self.type = type
        self.datacontenttype = datacontenttype
        self.dataschema = dataschema
        self.subject = subject
        self.time = time
        self.extensions = extensions
        self.data = data

    def validate(self):
        self.validate_required(self.id, 'id')
        self.validate_required(self.source, 'source')
        if self.source is not None:
            self.validate_max_length(self.source, 'source', 128)
        self.validate_required(self.type, 'type')
        if self.type is not None:
            self.validate_max_length(self.type, 'type', 64)
        if self.time is not None:
            self.validate_max_length(self.time, 'time', 64)
        self.validate_required(self.extensions, 'extensions')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.id is not None:
            result['id'] = self.id
        if self.source is not None:
            result['source'] = self.source
        if self.specversion is not None:
            result['specversion'] = self.specversion
        if self.type is not None:
            result['type'] = self.type
        if self.datacontenttype is not None:
            result['datacontenttype'] = self.datacontenttype
        if self.dataschema is not None:
            result['dataschema'] = self.dataschema
        if self.subject is not None:
            result['subject'] = self.subject
        if self.time is not None:
            result['time'] = self.time
        if self.extensions is not None:
            result['extensions'] = self.extensions
        if self.data is not None:
            result['data'] = self.data
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('id') is not None:
            self.id = m.get('id')
        if m.get('source') is not None:
            self.source = m.get('source')
        if m.get('specversion') is not None:
            self.specversion = m.get('specversion')
        if m.get('type') is not None:
            self.type = m.get('type')
        if m.get('datacontenttype') is not None:
            self.datacontenttype = m.get('datacontenttype')
        if m.get('dataschema') is not None:
            self.dataschema = m.get('dataschema')
        if m.get('subject') is not None:
            self.subject = m.get('subject')
        if m.get('time') is not None:
            self.time = m.get('time')
        if m.get('extensions') is not None:
            self.extensions = m.get('extensions')
        if m.get('data') is not None:
            self.data = m.get('data')
        return self


class PutEventsResponse(TeaModel):
    """
    put event response
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        failed_entry_count: int = None,
        entry_list: List[PutEventsResponseEntry] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.failed_entry_count = failed_entry_count
        self.entry_list = entry_list

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        if self.entry_list:
            for k in self.entry_list:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.failed_entry_count is not None:
            result['FailedEntryCount'] = self.failed_entry_count
        result['EntryList'] = []
        if self.entry_list is not None:
            for k in self.entry_list:
                result['EntryList'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('FailedEntryCount') is not None:
            self.failed_entry_count = m.get('FailedEntryCount')
        self.entry_list = []
        if m.get('EntryList') is not None:
            for k in m.get('EntryList'):
                temp_model = PutEventsResponseEntry()
                self.entry_list.append(temp_model.from_map(k))
        return self


class CreateEventBusRequest(TeaModel):
    """
    The request of create EventBus
    """
    def __init__(
        self,
        event_bus_name: str = None,
        description: str = None,
        tags: Dict[str, str] = None,
    ):
        self.event_bus_name = event_bus_name
        self.description = description
        self.tags = tags

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.event_bus_name is not None:
            self.validate_max_length(self.event_bus_name, 'event_bus_name', 127)

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.description is not None:
            result['Description'] = self.description
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class CreateEventBusResponse(TeaModel):
    """
    The response of create EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_bus_arn: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_bus_arn = event_bus_arn

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_bus_arn is not None:
            result['EventBusARN'] = self.event_bus_arn
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventBusARN') is not None:
            self.event_bus_arn = m.get('EventBusARN')
        return self


class DeleteEventBusRequest(TeaModel):
    """
    The request of delete the EventBus
    """
    def __init__(
        self,
        event_bus_name: str = None,
    ):
        self.event_bus_name = event_bus_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        return self


class DeleteEventBusResponse(TeaModel):
    """
    The response of delete the EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class GetEventBusRequest(TeaModel):
    """
    The request of get the detail of EventBus
    """
    def __init__(
        self,
        event_bus_name: str = None,
    ):
        self.event_bus_name = event_bus_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        return self


class GetEventBusResponse(TeaModel):
    """
    The response of get the detail of EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_bus_arn: str = None,
        event_bus_name: str = None,
        description: str = None,
        create_timestamp: int = None,
        tags: Dict[str, str] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_bus_arn = event_bus_arn
        self.event_bus_name = event_bus_name
        self.description = description
        self.create_timestamp = create_timestamp
        self.tags = tags

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_bus_arn, 'event_bus_arn')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.create_timestamp, 'create_timestamp')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_bus_arn is not None:
            result['EventBusARN'] = self.event_bus_arn
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.description is not None:
            result['Description'] = self.description
        if self.create_timestamp is not None:
            result['CreateTimestamp'] = self.create_timestamp
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventBusARN') is not None:
            self.event_bus_arn = m.get('EventBusARN')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('CreateTimestamp') is not None:
            self.create_timestamp = m.get('CreateTimestamp')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class ListEventBusesRequest(TeaModel):
    """
    The request of list all the EventBus which meet the search criteria
    """
    def __init__(
        self,
        name_prefix: str = None,
        limit: int = None,
        next_token: str = None,
    ):
        self.name_prefix = name_prefix
        self.limit = limit
        self.next_token = next_token

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name_prefix is not None:
            result['NamePrefix'] = self.name_prefix
        if self.limit is not None:
            result['Limit'] = self.limit
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('NamePrefix') is not None:
            self.name_prefix = m.get('NamePrefix')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        return self


class EventBusEntry(TeaModel):
    """
    The detail of EventBuses
    """
    def __init__(
        self,
        event_bus_name: str = None,
        event_bus_arn: str = None,
        description: str = None,
        create_timestamp: int = None,
        tags: Dict[str, str] = None,
    ):
        self.event_bus_name = event_bus_name
        self.event_bus_arn = event_bus_arn
        self.description = description
        self.create_timestamp = create_timestamp
        self.tags = tags

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.event_bus_arn, 'event_bus_arn')
        self.validate_required(self.description, 'description')
        self.validate_required(self.create_timestamp, 'create_timestamp')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.event_bus_arn is not None:
            result['EventBusARN'] = self.event_bus_arn
        if self.description is not None:
            result['Description'] = self.description
        if self.create_timestamp is not None:
            result['CreateTimestamp'] = self.create_timestamp
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('EventBusARN') is not None:
            self.event_bus_arn = m.get('EventBusARN')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('CreateTimestamp') is not None:
            self.create_timestamp = m.get('CreateTimestamp')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class ListEventBusesResponse(TeaModel):
    """
    The response of search EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_buses: List[EventBusEntry] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_buses = event_buses
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_buses, 'event_buses')
        if self.event_buses:
            for k in self.event_buses:
                if k:
                    k.validate()
        self.validate_required(self.next_token, 'next_token')
        self.validate_required(self.total, 'total')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBuses'] = []
        if self.event_buses is not None:
            for k in self.event_buses:
                result['EventBuses'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.event_buses = []
        if m.get('EventBuses') is not None:
            for k in m.get('EventBuses'):
                temp_model = EventBusEntry()
                self.event_buses.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class EBTargetParam(TeaModel):
    """
    The param of EBTargetParam
    """
    def __init__(
        self,
        resource_key: str = None,
        form: str = None,
        value: str = None,
        template: str = None,
    ):
        self.resource_key = resource_key
        self.form = form
        self.value = value
        self.template = template

    def validate(self):
        self.validate_required(self.resource_key, 'resource_key')
        self.validate_required(self.form, 'form')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.resource_key is not None:
            result['ResourceKey'] = self.resource_key
        if self.form is not None:
            result['Form'] = self.form
        if self.value is not None:
            result['Value'] = self.value
        if self.template is not None:
            result['Template'] = self.template
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('ResourceKey') is not None:
            self.resource_key = m.get('ResourceKey')
        if m.get('Form') is not None:
            self.form = m.get('Form')
        if m.get('Value') is not None:
            self.value = m.get('Value')
        if m.get('Template') is not None:
            self.template = m.get('Template')
        return self


class ConcurrentConfig(TeaModel):
    """
    The detail of ConcurrentConfig
    """
    def __init__(
        self,
        concurrency: int = None,
    ):
        self.concurrency = concurrency

    def validate(self):
        self.validate_required(self.concurrency, 'concurrency')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.concurrency is not None:
            result['ResourceKey'] = self.concurrency
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('ResourceKey') is not None:
            self.concurrency = m.get('ResourceKey')
        return self


class TargetEntry(TeaModel):
    """
    The detail of TargetEntry
    """
    def __init__(
        self,
        id: str = None,
        type: str = None,
        endpoint: str = None,
        push_retry_strategy: str = None,
        param_list: List[EBTargetParam] = None,
        concurrent_config: ConcurrentConfig = None,
    ):
        self.id = id
        self.type = type
        self.endpoint = endpoint
        self.push_retry_strategy = push_retry_strategy
        self.param_list = param_list
        self.concurrent_config = concurrent_config

    def validate(self):
        self.validate_required(self.id, 'id')
        self.validate_required(self.type, 'type')
        self.validate_required(self.endpoint, 'endpoint')
        if self.param_list:
            for k in self.param_list:
                if k:
                    k.validate()
        if self.concurrent_config:
            self.concurrent_config.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.id is not None:
            result['Id'] = self.id
        if self.type is not None:
            result['Type'] = self.type
        if self.endpoint is not None:
            result['Endpoint'] = self.endpoint
        if self.push_retry_strategy is not None:
            result['PushRetryStrategy'] = self.push_retry_strategy
        result['ParamList'] = []
        if self.param_list is not None:
            for k in self.param_list:
                result['ParamList'].append(k.to_map() if k else None)
        if self.concurrent_config is not None:
            result['ConcurrentConfig'] = self.concurrent_config.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Id') is not None:
            self.id = m.get('Id')
        if m.get('Type') is not None:
            self.type = m.get('Type')
        if m.get('Endpoint') is not None:
            self.endpoint = m.get('Endpoint')
        if m.get('PushRetryStrategy') is not None:
            self.push_retry_strategy = m.get('PushRetryStrategy')
        self.param_list = []
        if m.get('ParamList') is not None:
            for k in m.get('ParamList'):
                temp_model = EBTargetParam()
                self.param_list.append(temp_model.from_map(k))
        if m.get('ConcurrentConfig') is not None:
            temp_model = ConcurrentConfig()
            self.concurrent_config = temp_model.from_map(m['ConcurrentConfig'])
        return self


class CreateRuleRequest(TeaModel):
    """
    The request of create an EventBus rule on Aliyun
    """
    def __init__(
        self,
        event_bus_name: str = None,
        description: str = None,
        rule_name: str = None,
        status: str = None,
        filter_pattern: str = None,
        targets: List[TargetEntry] = None,
        tags: Dict[str, str] = None,
    ):
        self.event_bus_name = event_bus_name
        self.description = description
        self.rule_name = rule_name
        self.status = status
        self.filter_pattern = filter_pattern
        self.targets = targets
        self.tags = tags

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.event_bus_name is not None:
            self.validate_max_length(self.event_bus_name, 'event_bus_name', 127)
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.description is not None:
            result['Description'] = self.description
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.status is not None:
            result['Status'] = self.status
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        self.targets = []
        if m.get('Targets') is not None:
            for k in m.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class CreateRuleResponse(TeaModel):
    """
    The response of create EventBus Rule
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        rule_arn: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.rule_arn = rule_arn

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.rule_arn, 'rule_arn')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.rule_arn is not None:
            result['RuleARN'] = self.rule_arn
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('RuleARN') is not None:
            self.rule_arn = m.get('RuleARN')
        return self


class DeleteRuleRequest(TeaModel):
    """
    The request of delete the rule
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        return self


class DeleteRuleResponse(TeaModel):
    """
    The response of delete the rule
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class DisableRuleRequest(TeaModel):
    """
    The request of disable the EventBus rule
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        return self


class DisableRuleResponse(TeaModel):
    """
    The response of disable the EventBus rule
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class EnableRuleRequest(TeaModel):
    """
    The request of enable the EventBus rule
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        return self


class EnableRuleResponse(TeaModel):
    """
    The response of enable the EventBus rule
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class GetRuleRequest(TeaModel):
    """
    The request of Get EventBus
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        return self


class GetRuleResponse(TeaModel):
    """
    The response of Get EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_bus_name: str = None,
        rule_arn: str = None,
        rule_name: str = None,
        description: str = None,
        status: str = None,
        filter_pattern: str = None,
        targets: List[TargetEntry] = None,
        ctime: int = None,
        mtime: int = None,
        tags: Dict[str, str] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_bus_name = event_bus_name
        self.rule_arn = rule_arn
        self.rule_name = rule_name
        self.description = description
        self.status = status
        self.filter_pattern = filter_pattern
        self.targets = targets
        self.ctime = ctime
        self.mtime = mtime
        self.tags = tags

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_arn, 'rule_arn')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.status, 'status')
        self.validate_required(self.filter_pattern, 'filter_pattern')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()
        self.validate_required(self.ctime, 'ctime')
        self.validate_required(self.mtime, 'mtime')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_arn is not None:
            result['RuleARN'] = self.rule_arn
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.description is not None:
            result['Description'] = self.description
        if self.status is not None:
            result['Status'] = self.status
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        if self.ctime is not None:
            result['Ctime'] = self.ctime
        if self.mtime is not None:
            result['Mtime'] = self.mtime
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleARN') is not None:
            self.rule_arn = m.get('RuleARN')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        self.targets = []
        if m.get('Targets') is not None:
            for k in m.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        if m.get('Ctime') is not None:
            self.ctime = m.get('Ctime')
        if m.get('Mtime') is not None:
            self.mtime = m.get('Mtime')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class ListRulesRequest(TeaModel):
    """
    The request of search EventBus
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name_prefix: str = None,
        limit: int = None,
        next_token: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name_prefix = rule_name_prefix
        self.limit = limit
        self.next_token = next_token

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name_prefix is not None:
            result['RuleNamePrefix'] = self.rule_name_prefix
        if self.limit is not None:
            result['Limit'] = self.limit
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleNamePrefix') is not None:
            self.rule_name_prefix = m.get('RuleNamePrefix')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        return self


class EventRuleDTO(TeaModel):
    """
    The detail of EventBuses rule
    """
    def __init__(
        self,
        rule_arn: str = None,
        event_bus_name: str = None,
        rule_name: str = None,
        description: str = None,
        status: str = None,
        filter_pattern: str = None,
        targets: List[TargetEntry] = None,
        ctime: int = None,
        mtime: int = None,
        tags: Dict[str, str] = None,
    ):
        self.rule_arn = rule_arn
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name
        self.description = description
        self.status = status
        self.filter_pattern = filter_pattern
        self.targets = targets
        self.ctime = ctime
        self.mtime = mtime
        self.tags = tags

    def validate(self):
        self.validate_required(self.rule_arn, 'rule_arn')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.status, 'status')
        self.validate_required(self.filter_pattern, 'filter_pattern')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()
        self.validate_required(self.ctime, 'ctime')
        self.validate_required(self.mtime, 'mtime')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.rule_arn is not None:
            result['RuleARN'] = self.rule_arn
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.description is not None:
            result['Description'] = self.description
        if self.status is not None:
            result['Status'] = self.status
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        if self.ctime is not None:
            result['Ctime'] = self.ctime
        if self.mtime is not None:
            result['Mtime'] = self.mtime
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RuleARN') is not None:
            self.rule_arn = m.get('RuleARN')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        self.targets = []
        if m.get('Targets') is not None:
            for k in m.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        if m.get('Ctime') is not None:
            self.ctime = m.get('Ctime')
        if m.get('Mtime') is not None:
            self.mtime = m.get('Mtime')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class ListRulesResponse(TeaModel):
    """
    The response of search EventBus
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        next_token: str = None,
        rules: List[EventRuleDTO] = None,
        total: int = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.next_token = next_token
        self.rules = rules
        self.total = total

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.next_token, 'next_token')
        self.validate_required(self.rules, 'rules')
        if self.rules:
            for k in self.rules:
                if k:
                    k.validate()
        self.validate_required(self.total, 'total')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        result['Rules'] = []
        if self.rules is not None:
            for k in self.rules:
                result['Rules'].append(k.to_map() if k else None)
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        self.rules = []
        if m.get('Rules') is not None:
            for k in m.get('Rules'):
                temp_model = EventRuleDTO()
                self.rules.append(temp_model.from_map(k))
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class UpdateRuleRequest(TeaModel):
    """
    The request of update the EventBus rule
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
        description: str = None,
        status: str = None,
        filter_pattern: str = None,
        tags: Dict[str, str] = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name
        self.description = description
        self.status = status
        self.filter_pattern = filter_pattern
        self.tags = tags

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.description is not None:
            result['Description'] = self.description
        if self.status is not None:
            result['Status'] = self.status
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        if self.tags is not None:
            result['Tags'] = self.tags
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        if m.get('Tags') is not None:
            self.tags = m.get('Tags')
        return self


class UpdateRuleResponse(TeaModel):
    """
    The response of update the EventBus rule
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class CreateTargetsRequest(TeaModel):
    """
    The request of create Targets
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
        targets: List[TargetEntry] = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name
        self.targets = targets

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        self.targets = []
        if m.get('Targets') is not None:
            for k in m.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        return self


class TargetResultEntry(TeaModel):
    """
    The result detail of target operation
    """
    def __init__(
        self,
        error_code: str = None,
        error_message: str = None,
        entry_id: str = None,
    ):
        self.error_code = error_code
        self.error_message = error_message
        self.entry_id = entry_id

    def validate(self):
        self.validate_required(self.error_code, 'error_code')
        self.validate_required(self.error_message, 'error_message')
        self.validate_required(self.entry_id, 'entry_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.error_code is not None:
            result['ErrorCode'] = self.error_code
        if self.error_message is not None:
            result['ErrorMessage'] = self.error_message
        if self.entry_id is not None:
            result['EntryId'] = self.entry_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('ErrorCode') is not None:
            self.error_code = m.get('ErrorCode')
        if m.get('ErrorMessage') is not None:
            self.error_message = m.get('ErrorMessage')
        if m.get('EntryId') is not None:
            self.entry_id = m.get('EntryId')
        return self


class CreateTargetsResponse(TeaModel):
    """
    The response of create Targets
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        error_entries_count: int = None,
        error_entries: List[TargetResultEntry] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.error_entries_count = error_entries_count
        self.error_entries = error_entries

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.error_entries_count, 'error_entries_count')
        self.validate_required(self.error_entries, 'error_entries')
        if self.error_entries:
            for k in self.error_entries:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.error_entries_count is not None:
            result['ErrorEntriesCount'] = self.error_entries_count
        result['ErrorEntries'] = []
        if self.error_entries is not None:
            for k in self.error_entries:
                result['ErrorEntries'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('ErrorEntriesCount') is not None:
            self.error_entries_count = m.get('ErrorEntriesCount')
        self.error_entries = []
        if m.get('ErrorEntries') is not None:
            for k in m.get('ErrorEntries'):
                temp_model = TargetResultEntry()
                self.error_entries.append(temp_model.from_map(k))
        return self


class DeleteTargetsRequest(TeaModel):
    """
    The request of delete Targets
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
        target_ids: List[str] = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name
        self.target_ids = target_ids

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.target_ids, 'target_ids')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.target_ids is not None:
            result['TargetIds'] = self.target_ids
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('TargetIds') is not None:
            self.target_ids = m.get('TargetIds')
        return self


class DeleteTargetsResponse(TeaModel):
    """
    The response of delete Targets
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        error_entries_count: int = None,
        error_entries: List[TargetResultEntry] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.error_entries_count = error_entries_count
        self.error_entries = error_entries

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.error_entries_count, 'error_entries_count')
        self.validate_required(self.error_entries, 'error_entries')
        if self.error_entries:
            for k in self.error_entries:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.error_entries_count is not None:
            result['ErrorEntriesCount'] = self.error_entries_count
        result['ErrorEntries'] = []
        if self.error_entries is not None:
            for k in self.error_entries:
                result['ErrorEntries'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('ErrorEntriesCount') is not None:
            self.error_entries_count = m.get('ErrorEntriesCount')
        self.error_entries = []
        if m.get('ErrorEntries') is not None:
            for k in m.get('ErrorEntries'):
                temp_model = TargetResultEntry()
                self.error_entries.append(temp_model.from_map(k))
        return self


class ListTargetsRequest(TeaModel):
    """
    The request of search Targets
    """
    def __init__(
        self,
        event_bus_name: str = None,
        rule_name: str = None,
        limit: int = None,
    ):
        self.event_bus_name = event_bus_name
        self.rule_name = rule_name
        self.limit = limit

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.rule_name is not None:
            result['RuleName'] = self.rule_name
        if self.limit is not None:
            result['Limit'] = self.limit
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('RuleName') is not None:
            self.rule_name = m.get('RuleName')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        return self


class ListTargetsResponse(TeaModel):
    """
    The response of search Targets
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        targets: List[TargetEntry] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.targets = targets

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.targets = []
        if m.get('Targets') is not None:
            for k in m.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        return self


class TestEventPatternRequest(TeaModel):
    """
    The request of testEventPattern
    """
    def __init__(
        self,
        event: str = None,
        event_pattern: str = None,
    ):
        self.event = event
        self.event_pattern = event_pattern

    def validate(self):
        self.validate_required(self.event, 'event')
        if self.event is not None:
            self.validate_max_length(self.event, 'event', 2048)
        self.validate_required(self.event_pattern, 'event_pattern')
        if self.event_pattern is not None:
            self.validate_max_length(self.event_pattern, 'event_pattern', 2048)

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event is not None:
            result['Event'] = self.event
        if self.event_pattern is not None:
            result['EventPattern'] = self.event_pattern
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Event') is not None:
            self.event = m.get('Event')
        if m.get('EventPattern') is not None:
            self.event_pattern = m.get('EventPattern')
        return self


class TestEventPatternResponse(TeaModel):
    """
    The response of testEventPattern
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        result: bool = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.result = result

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.result, 'result')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.result is not None:
            result['Result'] = self.result
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('Result') is not None:
            self.result = m.get('Result')
        return self


class QueryEventTracesRequest(TeaModel):
    def __init__(
        self,
        event_bus_name: str = None,
        event_id: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.event_id = event_id

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.event_id, 'event_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.event_id is not None:
            result['EventId'] = self.event_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('EventId') is not None:
            self.event_id = m.get('EventId')
        return self


class EventTrace(TeaModel):
    def __init__(
        self,
        resource_owner_id: str = None,
        action: str = None,
        event_id: str = None,
        event_bus_name: str = None,
        action_time: str = None,
    ):
        self.resource_owner_id = resource_owner_id
        self.action = action
        self.event_id = event_id
        self.event_bus_name = event_bus_name
        self.action_time = action_time

    def validate(self):
        self.validate_required(self.resource_owner_id, 'resource_owner_id')
        self.validate_required(self.action, 'action')
        self.validate_required(self.event_id, 'event_id')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.action_time, 'action_time')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.resource_owner_id is not None:
            result['ResourceOwnerId'] = self.resource_owner_id
        if self.action is not None:
            result['Action'] = self.action
        if self.event_id is not None:
            result['EventId'] = self.event_id
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.action_time is not None:
            result['ActionTime'] = self.action_time
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('ResourceOwnerId') is not None:
            self.resource_owner_id = m.get('ResourceOwnerId')
        if m.get('Action') is not None:
            self.action = m.get('Action')
        if m.get('EventId') is not None:
            self.event_id = m.get('EventId')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('ActionTime') is not None:
            self.action_time = m.get('ActionTime')
        return self


class QueryEventTracesResponse(TeaModel):
    def __init__(
        self,
        event_trace_list: List[EventTrace] = None,
    ):
        self.event_trace_list = event_trace_list

    def validate(self):
        self.validate_required(self.event_trace_list, 'event_trace_list')
        if self.event_trace_list:
            for k in self.event_trace_list:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        result['EventTraceList'] = []
        if self.event_trace_list is not None:
            for k in self.event_trace_list:
                result['EventTraceList'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        self.event_trace_list = []
        if m.get('EventTraceList') is not None:
            for k in m.get('EventTraceList'):
                temp_model = EventTrace()
                self.event_trace_list.append(temp_model.from_map(k))
        return self


class QueryEventByEventIdRequest(TeaModel):
    def __init__(
        self,
        event_bus_name: str = None,
        event_source: str = None,
        event_id: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.event_source = event_source
        self.event_id = event_id

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.event_id, 'event_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.event_source is not None:
            result['EventSource'] = self.event_source
        if self.event_id is not None:
            result['EventId'] = self.event_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('EventSource') is not None:
            self.event_source = m.get('EventSource')
        if m.get('EventId') is not None:
            self.event_id = m.get('EventId')
        return self


class TracedEvent(TeaModel):
    def __init__(
        self,
        event_received_time: str = None,
        event_source: str = None,
        event_id: str = None,
        event_bus_name: str = None,
    ):
        self.event_received_time = event_received_time
        self.event_source = event_source
        self.event_id = event_id
        self.event_bus_name = event_bus_name

    def validate(self):
        self.validate_required(self.event_received_time, 'event_received_time')
        self.validate_required(self.event_source, 'event_source')
        self.validate_required(self.event_id, 'event_id')
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_received_time is not None:
            result['eventReceivedTime'] = self.event_received_time
        if self.event_source is not None:
            result['EventSource'] = self.event_source
        if self.event_id is not None:
            result['EventId'] = self.event_id
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('eventReceivedTime') is not None:
            self.event_received_time = m.get('eventReceivedTime')
        if m.get('EventSource') is not None:
            self.event_source = m.get('EventSource')
        if m.get('EventId') is not None:
            self.event_id = m.get('EventId')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        return self


class QueryEventByEventIdResponse(TeaModel):
    def __init__(
        self,
        traced_events: List[EventTrace] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.traced_events = traced_events
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.traced_events, 'traced_events')
        if self.traced_events:
            for k in self.traced_events:
                if k:
                    k.validate()
        self.validate_required(self.next_token, 'next_token')
        self.validate_required(self.total, 'total')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        result['TracedEvents'] = []
        if self.traced_events is not None:
            for k in self.traced_events:
                result['TracedEvents'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        self.traced_events = []
        if m.get('TracedEvents') is not None:
            for k in m.get('TracedEvents'):
                temp_model = EventTrace()
                self.traced_events.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class QueryEventsByPeriodRequest(TeaModel):
    def __init__(
        self,
        event_bus_name: str = None,
        event_source: str = None,
        start_time: int = None,
        end_time: int = None,
        limit: int = None,
        next_token: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.event_source = event_source
        self.start_time = start_time
        self.end_time = end_time
        self.limit = limit
        self.next_token = next_token

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.start_time, 'start_time')
        self.validate_required(self.end_time, 'end_time')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.event_source is not None:
            result['EventSource'] = self.event_source
        if self.start_time is not None:
            result['StartTime'] = self.start_time
        if self.end_time is not None:
            result['EndTime'] = self.end_time
        if self.limit is not None:
            result['Limit'] = self.limit
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('EventSource') is not None:
            self.event_source = m.get('EventSource')
        if m.get('StartTime') is not None:
            self.start_time = m.get('StartTime')
        if m.get('EndTime') is not None:
            self.end_time = m.get('EndTime')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        return self


class QueryEventsByPeriodResponse(TeaModel):
    def __init__(
        self,
        traced_events: List[EventTrace] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.traced_events = traced_events
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.traced_events, 'traced_events')
        if self.traced_events:
            for k in self.traced_events:
                if k:
                    k.validate()
        self.validate_required(self.next_token, 'next_token')
        self.validate_required(self.total, 'total')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        result['TracedEvents'] = []
        if self.traced_events is not None:
            for k in self.traced_events:
                result['TracedEvents'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        self.traced_events = []
        if m.get('TracedEvents') is not None:
            for k in m.get('TracedEvents'):
                temp_model = EventTrace()
                self.traced_events.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class SourceRabbitMQParameters(TeaModel):
    """
    The detail of SourceRabbitMQParameters
    """
    def __init__(
        self,
        region_id: str = None,
        instance_id: str = None,
        virtual_host_name: str = None,
        queue_name: str = None,
    ):
        self.region_id = region_id
        self.instance_id = instance_id
        self.virtual_host_name = virtual_host_name
        self.queue_name = queue_name

    def validate(self):
        self.validate_required(self.virtual_host_name, 'virtual_host_name')
        self.validate_required(self.queue_name, 'queue_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.region_id is not None:
            result['RegionId'] = self.region_id
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id
        if self.virtual_host_name is not None:
            result['VirtualHostName'] = self.virtual_host_name
        if self.queue_name is not None:
            result['QueueName'] = self.queue_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RegionId') is not None:
            self.region_id = m.get('RegionId')
        if m.get('InstanceId') is not None:
            self.instance_id = m.get('InstanceId')
        if m.get('VirtualHostName') is not None:
            self.virtual_host_name = m.get('VirtualHostName')
        if m.get('QueueName') is not None:
            self.queue_name = m.get('QueueName')
        return self


class SourceMNSParameters(TeaModel):
    """
    The detail of SourceMNSParameters
    """
    def __init__(
        self,
        region_id: str = None,
        queue_name: str = None,
        is_base_64decode: bool = None,
    ):
        self.region_id = region_id
        self.queue_name = queue_name
        self.is_base_64decode = is_base_64decode

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.region_id is not None:
            result['RegionId'] = self.region_id
        if self.queue_name is not None:
            result['QueueName'] = self.queue_name
        if self.is_base_64decode is not None:
            result['IsBase64Decode'] = self.is_base_64decode
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RegionId') is not None:
            self.region_id = m.get('RegionId')
        if m.get('QueueName') is not None:
            self.queue_name = m.get('QueueName')
        if m.get('IsBase64Decode') is not None:
            self.is_base_64decode = m.get('IsBase64Decode')
        return self


class SourceRocketMQParameters(TeaModel):
    """
    The detail of SourceRocketMQParameters
    """
    def __init__(
        self,
        region_id: str = None,
        instance_id: str = None,
        topic: str = None,
        tag: str = None,
        offset: str = None,
        group_id: str = None,
        timestamp: int = None,
    ):
        self.region_id = region_id
        self.instance_id = instance_id
        self.topic = topic
        self.tag = tag
        self.offset = offset
        self.group_id = group_id
        self.timestamp = timestamp

    def validate(self):
        self.validate_required(self.group_id, 'group_id')
        self.validate_required(self.timestamp, 'timestamp')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.region_id is not None:
            result['RegionId'] = self.region_id
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id
        if self.topic is not None:
            result['Topic'] = self.topic
        if self.tag is not None:
            result['Tag'] = self.tag
        if self.offset is not None:
            result['Offset'] = self.offset
        if self.group_id is not None:
            result['GroupID'] = self.group_id
        if self.timestamp is not None:
            result['Timestamp'] = self.timestamp
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RegionId') is not None:
            self.region_id = m.get('RegionId')
        if m.get('InstanceId') is not None:
            self.instance_id = m.get('InstanceId')
        if m.get('Topic') is not None:
            self.topic = m.get('Topic')
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        if m.get('Offset') is not None:
            self.offset = m.get('Offset')
        if m.get('GroupID') is not None:
            self.group_id = m.get('GroupID')
        if m.get('Timestamp') is not None:
            self.timestamp = m.get('Timestamp')
        return self


class SourceScheduledEventParameters(TeaModel):
    """
    The detail of SourceScheduledEventParameters
    """
    def __init__(
        self,
        schedule: str = None,
        time_zone: str = None,
        user_data: Dict[str, str] = None,
    ):
        self.schedule = schedule
        self.time_zone = time_zone
        self.user_data = user_data

    def validate(self):
        self.validate_required(self.schedule, 'schedule')
        self.validate_required(self.time_zone, 'time_zone')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.schedule is not None:
            result['Schedule'] = self.schedule
        if self.time_zone is not None:
            result['TimeZone'] = self.time_zone
        if self.user_data is not None:
            result['UserData'] = self.user_data
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Schedule') is not None:
            self.schedule = m.get('Schedule')
        if m.get('TimeZone') is not None:
            self.time_zone = m.get('TimeZone')
        if m.get('UserData') is not None:
            self.user_data = m.get('UserData')
        return self


class SourceHttpEventParameters(TeaModel):
    """
    The detail of SourceHttpEventParameters
    """
    def __init__(
        self,
        type: str = None,
        method: List[str] = None,
        security_config: str = None,
        ip: List[str] = None,
        referer: List[str] = None,
    ):
        self.type = type
        self.method = method
        self.security_config = security_config
        self.ip = ip
        self.referer = referer

    def validate(self):
        self.validate_required(self.type, 'type')
        self.validate_required(self.method, 'method')
        self.validate_required(self.security_config, 'security_config')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.type is not None:
            result['Type'] = self.type
        if self.method is not None:
            result['Method'] = self.method
        if self.security_config is not None:
            result['SecurityConfig'] = self.security_config
        if self.ip is not None:
            result['Ip'] = self.ip
        if self.referer is not None:
            result['Referer'] = self.referer
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Type') is not None:
            self.type = m.get('Type')
        if m.get('Method') is not None:
            self.method = m.get('Method')
        if m.get('SecurityConfig') is not None:
            self.security_config = m.get('SecurityConfig')
        if m.get('Ip') is not None:
            self.ip = m.get('Ip')
        if m.get('Referer') is not None:
            self.referer = m.get('Referer')
        return self


class CreateEventSourceRequest(TeaModel):
    """
    The request of createEventSource
    """
    def __init__(
        self,
        event_source_name: str = None,
        description: str = None,
        event_bus_name: str = None,
        source_rabbit_mqparameters: SourceRabbitMQParameters = None,
        source_mnsparameters: SourceMNSParameters = None,
        source_rocket_mqparameters: SourceRocketMQParameters = None,
        source_scheduled_event_parameters: SourceScheduledEventParameters = None,
        source_http_event_parameters: SourceHttpEventParameters = None,
    ):
        self.event_source_name = event_source_name
        self.description = description
        self.event_bus_name = event_bus_name
        self.source_rabbit_mqparameters = source_rabbit_mqparameters
        self.source_mnsparameters = source_mnsparameters
        self.source_rocket_mqparameters = source_rocket_mqparameters
        self.source_scheduled_event_parameters = source_scheduled_event_parameters
        self.source_http_event_parameters = source_http_event_parameters

    def validate(self):
        self.validate_required(self.event_source_name, 'event_source_name')
        if self.event_source_name is not None:
            self.validate_max_length(self.event_source_name, 'event_source_name', 127)
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.source_rabbit_mqparameters:
            self.source_rabbit_mqparameters.validate()
        if self.source_mnsparameters:
            self.source_mnsparameters.validate()
        if self.source_rocket_mqparameters:
            self.source_rocket_mqparameters.validate()
        if self.source_scheduled_event_parameters:
            self.source_scheduled_event_parameters.validate()
        if self.source_http_event_parameters:
            self.source_http_event_parameters.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_source_name is not None:
            result['EventSourceName'] = self.event_source_name
        if self.description is not None:
            result['Description'] = self.description
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.source_rabbit_mqparameters is not None:
            result['SourceRabbitMQParameters'] = self.source_rabbit_mqparameters.to_map()
        if self.source_mnsparameters is not None:
            result['SourceMNSParameters'] = self.source_mnsparameters.to_map()
        if self.source_rocket_mqparameters is not None:
            result['SourceRocketMQParameters'] = self.source_rocket_mqparameters.to_map()
        if self.source_scheduled_event_parameters is not None:
            result['SourceScheduledEventParameters'] = self.source_scheduled_event_parameters.to_map()
        if self.source_http_event_parameters is not None:
            result['SourceHttpEventParameters'] = self.source_http_event_parameters.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventSourceName') is not None:
            self.event_source_name = m.get('EventSourceName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('SourceRabbitMQParameters') is not None:
            temp_model = SourceRabbitMQParameters()
            self.source_rabbit_mqparameters = temp_model.from_map(m['SourceRabbitMQParameters'])
        if m.get('SourceMNSParameters') is not None:
            temp_model = SourceMNSParameters()
            self.source_mnsparameters = temp_model.from_map(m['SourceMNSParameters'])
        if m.get('SourceRocketMQParameters') is not None:
            temp_model = SourceRocketMQParameters()
            self.source_rocket_mqparameters = temp_model.from_map(m['SourceRocketMQParameters'])
        if m.get('SourceScheduledEventParameters') is not None:
            temp_model = SourceScheduledEventParameters()
            self.source_scheduled_event_parameters = temp_model.from_map(m['SourceScheduledEventParameters'])
        if m.get('SourceHttpEventParameters') is not None:
            temp_model = SourceHttpEventParameters()
            self.source_http_event_parameters = temp_model.from_map(m['SourceHttpEventParameters'])
        return self


class SourceKafkaParameters(TeaModel):
    """
    The detail of SourceKafkaParameters
    """
    def __init__(
        self,
        region_id: str = None,
        instance_id: str = None,
        topic: str = None,
        consumer_group: str = None,
        offset_reset: str = None,
        extend_config: Dict[str, Any] = None,
    ):
        self.region_id = region_id
        self.instance_id = instance_id
        self.topic = topic
        self.consumer_group = consumer_group
        self.offset_reset = offset_reset
        self.extend_config = extend_config

    def validate(self):
        self.validate_required(self.consumer_group, 'consumer_group')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.region_id is not None:
            result['RegionId'] = self.region_id
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id
        if self.topic is not None:
            result['Topic'] = self.topic
        if self.consumer_group is not None:
            result['ConsumerGroup'] = self.consumer_group
        if self.offset_reset is not None:
            result['OffsetReset'] = self.offset_reset
        if self.extend_config is not None:
            result['ExtendConfig'] = self.extend_config
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RegionId') is not None:
            self.region_id = m.get('RegionId')
        if m.get('InstanceId') is not None:
            self.instance_id = m.get('InstanceId')
        if m.get('Topic') is not None:
            self.topic = m.get('Topic')
        if m.get('ConsumerGroup') is not None:
            self.consumer_group = m.get('ConsumerGroup')
        if m.get('OffsetReset') is not None:
            self.offset_reset = m.get('OffsetReset')
        if m.get('ExtendConfig') is not None:
            self.extend_config = m.get('ExtendConfig')
        return self


class EventTypeEntry(TeaModel):
    """
    The event source entry
    """
    def __init__(
        self,
        name: str = None,
        event_source_name: str = None,
        short_name: str = None,
        group_name: str = None,
    ):
        self.name = name
        self.event_source_name = event_source_name
        self.short_name = short_name
        self.group_name = group_name

    def validate(self):
        self.validate_required(self.name, 'name')
        self.validate_required(self.event_source_name, 'event_source_name')
        self.validate_required(self.short_name, 'short_name')
        self.validate_required(self.group_name, 'group_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name is not None:
            result['Name'] = self.name
        if self.event_source_name is not None:
            result['EventSourceName'] = self.event_source_name
        if self.short_name is not None:
            result['ShortName'] = self.short_name
        if self.group_name is not None:
            result['GroupName'] = self.group_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Name') is not None:
            self.name = m.get('Name')
        if m.get('EventSourceName') is not None:
            self.event_source_name = m.get('EventSourceName')
        if m.get('ShortName') is not None:
            self.short_name = m.get('ShortName')
        if m.get('GroupName') is not None:
            self.group_name = m.get('GroupName')
        return self


class Source(TeaModel):
    """
    The config of Source
    """
    def __init__(
        self,
        source_mnsparameters: SourceMNSParameters = None,
        source_rabbit_mqparameters: SourceRabbitMQParameters = None,
        source_rocket_mqparameters: SourceRocketMQParameters = None,
        source_kafka_parameters: SourceKafkaParameters = None,
    ):
        self.source_mnsparameters = source_mnsparameters
        self.source_rabbit_mqparameters = source_rabbit_mqparameters
        self.source_rocket_mqparameters = source_rocket_mqparameters
        self.source_kafka_parameters = source_kafka_parameters

    def validate(self):
        if self.source_mnsparameters:
            self.source_mnsparameters.validate()
        if self.source_rabbit_mqparameters:
            self.source_rabbit_mqparameters.validate()
        if self.source_rocket_mqparameters:
            self.source_rocket_mqparameters.validate()
        if self.source_kafka_parameters:
            self.source_kafka_parameters.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.source_mnsparameters is not None:
            result['SourceMNSParameters'] = self.source_mnsparameters.to_map()
        if self.source_rabbit_mqparameters is not None:
            result['SourceRabbitMQParameters'] = self.source_rabbit_mqparameters.to_map()
        if self.source_rocket_mqparameters is not None:
            result['SourceRocketMQParameters'] = self.source_rocket_mqparameters.to_map()
        if self.source_kafka_parameters is not None:
            result['SourceKafkaParameters'] = self.source_kafka_parameters.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('SourceMNSParameters') is not None:
            temp_model = SourceMNSParameters()
            self.source_mnsparameters = temp_model.from_map(m['SourceMNSParameters'])
        if m.get('SourceRabbitMQParameters') is not None:
            temp_model = SourceRabbitMQParameters()
            self.source_rabbit_mqparameters = temp_model.from_map(m['SourceRabbitMQParameters'])
        if m.get('SourceRocketMQParameters') is not None:
            temp_model = SourceRocketMQParameters()
            self.source_rocket_mqparameters = temp_model.from_map(m['SourceRocketMQParameters'])
        if m.get('SourceKafkaParameters') is not None:
            temp_model = SourceKafkaParameters()
            self.source_kafka_parameters = temp_model.from_map(m['SourceKafkaParameters'])
        return self


class TargetParameter(TeaModel):
    """
    The config of TargetParameter
    """
    def __init__(
        self,
        value: str = None,
        form: str = None,
        template: str = None,
    ):
        self.value = value
        self.form = form
        self.template = template

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.value is not None:
            result['Value'] = self.value
        if self.form is not None:
            result['Form'] = self.form
        if self.template is not None:
            result['Template'] = self.template
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Value') is not None:
            self.value = m.get('Value')
        if m.get('Form') is not None:
            self.form = m.get('Form')
        if m.get('Template') is not None:
            self.template = m.get('Template')
        return self


class SinkMNSParameters(TeaModel):
    """
    The config of SinkMNSParameters
    """
    def __init__(
        self,
        queue_name: TargetParameter = None,
        body: TargetParameter = None,
    ):
        self.queue_name = queue_name
        self.body = body

    def validate(self):
        if self.queue_name:
            self.queue_name.validate()
        if self.body:
            self.body.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.queue_name is not None:
            result['QueueName'] = self.queue_name.to_map()
        if self.body is not None:
            result['Body'] = self.body.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('QueueName') is not None:
            temp_model = TargetParameter()
            self.queue_name = temp_model.from_map(m['QueueName'])
        if m.get('Body') is not None:
            temp_model = TargetParameter()
            self.body = temp_model.from_map(m['Body'])
        return self


class SinkRabbitMQParameters(TeaModel):
    """
    The config of SinkRabbitMQParameters
    """
    def __init__(
        self,
        instance_id: TargetParameter = None,
        virtual_host_name: TargetParameter = None,
        target_type: TargetParameter = None,
        exchange: TargetParameter = None,
        routing_key: TargetParameter = None,
        queue_name: TargetParameter = None,
        body: TargetParameter = None,
        message_id: TargetParameter = None,
        properties: TargetParameter = None,
    ):
        self.instance_id = instance_id
        self.virtual_host_name = virtual_host_name
        self.target_type = target_type
        self.exchange = exchange
        self.routing_key = routing_key
        self.queue_name = queue_name
        self.body = body
        self.message_id = message_id
        self.properties = properties

    def validate(self):
        if self.instance_id:
            self.instance_id.validate()
        if self.virtual_host_name:
            self.virtual_host_name.validate()
        if self.target_type:
            self.target_type.validate()
        if self.exchange:
            self.exchange.validate()
        if self.routing_key:
            self.routing_key.validate()
        if self.queue_name:
            self.queue_name.validate()
        if self.body:
            self.body.validate()
        if self.message_id:
            self.message_id.validate()
        if self.properties:
            self.properties.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id.to_map()
        if self.virtual_host_name is not None:
            result['VirtualHostName'] = self.virtual_host_name.to_map()
        if self.target_type is not None:
            result['TargetType'] = self.target_type.to_map()
        if self.exchange is not None:
            result['Exchange'] = self.exchange.to_map()
        if self.routing_key is not None:
            result['RoutingKey'] = self.routing_key.to_map()
        if self.queue_name is not None:
            result['QueueName'] = self.queue_name.to_map()
        if self.body is not None:
            result['Body'] = self.body.to_map()
        if self.message_id is not None:
            result['MessageId'] = self.message_id.to_map()
        if self.properties is not None:
            result['Properties'] = self.properties.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('InstanceId') is not None:
            temp_model = TargetParameter()
            self.instance_id = temp_model.from_map(m['InstanceId'])
        if m.get('VirtualHostName') is not None:
            temp_model = TargetParameter()
            self.virtual_host_name = temp_model.from_map(m['VirtualHostName'])
        if m.get('TargetType') is not None:
            temp_model = TargetParameter()
            self.target_type = temp_model.from_map(m['TargetType'])
        if m.get('Exchange') is not None:
            temp_model = TargetParameter()
            self.exchange = temp_model.from_map(m['Exchange'])
        if m.get('RoutingKey') is not None:
            temp_model = TargetParameter()
            self.routing_key = temp_model.from_map(m['RoutingKey'])
        if m.get('QueueName') is not None:
            temp_model = TargetParameter()
            self.queue_name = temp_model.from_map(m['QueueName'])
        if m.get('Body') is not None:
            temp_model = TargetParameter()
            self.body = temp_model.from_map(m['Body'])
        if m.get('MessageId') is not None:
            temp_model = TargetParameter()
            self.message_id = temp_model.from_map(m['MessageId'])
        if m.get('Properties') is not None:
            temp_model = TargetParameter()
            self.properties = temp_model.from_map(m['Properties'])
        return self


class SinkKafkaParameters(TeaModel):
    """
    The config of SinkKafkaParameters
    """
    def __init__(
        self,
        instance_id: TargetParameter = None,
        topic: TargetParameter = None,
        acks: TargetParameter = None,
        key: TargetParameter = None,
        value: TargetParameter = None,
        extend_config: Dict[str, Any] = None,
    ):
        self.instance_id = instance_id
        self.topic = topic
        self.acks = acks
        self.key = key
        self.value = value
        self.extend_config = extend_config

    def validate(self):
        if self.instance_id:
            self.instance_id.validate()
        if self.topic:
            self.topic.validate()
        if self.acks:
            self.acks.validate()
        if self.key:
            self.key.validate()
        if self.value:
            self.value.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id.to_map()
        if self.topic is not None:
            result['Topic'] = self.topic.to_map()
        if self.acks is not None:
            result['Acks'] = self.acks.to_map()
        if self.key is not None:
            result['Key'] = self.key.to_map()
        if self.value is not None:
            result['Value'] = self.value.to_map()
        if self.extend_config is not None:
            result['ExtendConfig'] = self.extend_config
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('InstanceId') is not None:
            temp_model = TargetParameter()
            self.instance_id = temp_model.from_map(m['InstanceId'])
        if m.get('Topic') is not None:
            temp_model = TargetParameter()
            self.topic = temp_model.from_map(m['Topic'])
        if m.get('Acks') is not None:
            temp_model = TargetParameter()
            self.acks = temp_model.from_map(m['Acks'])
        if m.get('Key') is not None:
            temp_model = TargetParameter()
            self.key = temp_model.from_map(m['Key'])
        if m.get('Value') is not None:
            temp_model = TargetParameter()
            self.value = temp_model.from_map(m['Value'])
        if m.get('ExtendConfig') is not None:
            self.extend_config = m.get('ExtendConfig')
        return self


class SinkRocketMQParameters(TeaModel):
    """
    The config of SinkRocketMQParameters
    """
    def __init__(
        self,
        instance_id: TargetParameter = None,
        topic: TargetParameter = None,
        body: TargetParameter = None,
        properties: TargetParameter = None,
        keys: TargetParameter = None,
        tags: TargetParameter = None,
    ):
        self.instance_id = instance_id
        self.topic = topic
        self.body = body
        self.properties = properties
        self.keys = keys
        self.tags = tags

    def validate(self):
        if self.instance_id:
            self.instance_id.validate()
        if self.topic:
            self.topic.validate()
        if self.body:
            self.body.validate()
        if self.properties:
            self.properties.validate()
        if self.keys:
            self.keys.validate()
        if self.tags:
            self.tags.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.instance_id is not None:
            result['InstanceId'] = self.instance_id.to_map()
        if self.topic is not None:
            result['Topic'] = self.topic.to_map()
        if self.body is not None:
            result['Body'] = self.body.to_map()
        if self.properties is not None:
            result['Properties'] = self.properties.to_map()
        if self.keys is not None:
            result['Keys'] = self.keys.to_map()
        if self.tags is not None:
            result['Tags'] = self.tags.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('InstanceId') is not None:
            temp_model = TargetParameter()
            self.instance_id = temp_model.from_map(m['InstanceId'])
        if m.get('Topic') is not None:
            temp_model = TargetParameter()
            self.topic = temp_model.from_map(m['Topic'])
        if m.get('Body') is not None:
            temp_model = TargetParameter()
            self.body = temp_model.from_map(m['Body'])
        if m.get('Properties') is not None:
            temp_model = TargetParameter()
            self.properties = temp_model.from_map(m['Properties'])
        if m.get('Keys') is not None:
            temp_model = TargetParameter()
            self.keys = temp_model.from_map(m['Keys'])
        if m.get('Tags') is not None:
            temp_model = TargetParameter()
            self.tags = temp_model.from_map(m['Tags'])
        return self


class SinkFcParameters(TeaModel):
    """
    The config of SinkFcParameters
    """
    def __init__(
        self,
        service_name: TargetParameter = None,
        function_name: TargetParameter = None,
        body: TargetParameter = None,
        qualifier: TargetParameter = None,
        invocation_type: TargetParameter = None,
        batch_size: TargetParameter = None,
        extend_config: Dict[str, Any] = None,
    ):
        self.service_name = service_name
        self.function_name = function_name
        self.body = body
        self.qualifier = qualifier
        self.invocation_type = invocation_type
        self.batch_size = batch_size
        self.extend_config = extend_config

    def validate(self):
        if self.service_name:
            self.service_name.validate()
        if self.function_name:
            self.function_name.validate()
        if self.body:
            self.body.validate()
        if self.qualifier:
            self.qualifier.validate()
        if self.invocation_type:
            self.invocation_type.validate()
        if self.batch_size:
            self.batch_size.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.service_name is not None:
            result['ServiceName'] = self.service_name.to_map()
        if self.function_name is not None:
            result['FunctionName'] = self.function_name.to_map()
        if self.body is not None:
            result['Body'] = self.body.to_map()
        if self.qualifier is not None:
            result['Qualifier'] = self.qualifier.to_map()
        if self.invocation_type is not None:
            result['InvocationType'] = self.invocation_type.to_map()
        if self.batch_size is not None:
            result['BatchSize'] = self.batch_size.to_map()
        if self.extend_config is not None:
            result['ExtendConfig'] = self.extend_config
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('ServiceName') is not None:
            temp_model = TargetParameter()
            self.service_name = temp_model.from_map(m['ServiceName'])
        if m.get('FunctionName') is not None:
            temp_model = TargetParameter()
            self.function_name = temp_model.from_map(m['FunctionName'])
        if m.get('Body') is not None:
            temp_model = TargetParameter()
            self.body = temp_model.from_map(m['Body'])
        if m.get('Qualifier') is not None:
            temp_model = TargetParameter()
            self.qualifier = temp_model.from_map(m['Qualifier'])
        if m.get('InvocationType') is not None:
            temp_model = TargetParameter()
            self.invocation_type = temp_model.from_map(m['InvocationType'])
        if m.get('BatchSize') is not None:
            temp_model = TargetParameter()
            self.batch_size = temp_model.from_map(m['BatchSize'])
        if m.get('ExtendConfig') is not None:
            self.extend_config = m.get('ExtendConfig')
        return self


class SinkOdpsParameters(TeaModel):
    """
    The config of SinkOdpsParameters
    """
    def __init__(
        self,
        project: TargetParameter = None,
        table: TargetParameter = None,
        role_name: TargetParameter = None,
        format: TargetParameter = None,
        mode: TargetParameter = None,
        partition_window_type: TargetParameter = None,
        time_zone: TargetParameter = None,
        use_streaming: TargetParameter = None,
        extend_config: Dict[str, Any] = None,
    ):
        self.project = project
        self.table = table
        self.role_name = role_name
        self.format = format
        self.mode = mode
        self.partition_window_type = partition_window_type
        self.time_zone = time_zone
        self.use_streaming = use_streaming
        self.extend_config = extend_config

    def validate(self):
        if self.project:
            self.project.validate()
        if self.table:
            self.table.validate()
        if self.role_name:
            self.role_name.validate()
        if self.format:
            self.format.validate()
        if self.mode:
            self.mode.validate()
        if self.partition_window_type:
            self.partition_window_type.validate()
        if self.time_zone:
            self.time_zone.validate()
        if self.use_streaming:
            self.use_streaming.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.project is not None:
            result['Project'] = self.project.to_map()
        if self.table is not None:
            result['Table'] = self.table.to_map()
        if self.role_name is not None:
            result['RoleName'] = self.role_name.to_map()
        if self.format is not None:
            result['Format'] = self.format.to_map()
        if self.mode is not None:
            result['Mode'] = self.mode.to_map()
        if self.partition_window_type is not None:
            result['PartitionWindowType'] = self.partition_window_type.to_map()
        if self.time_zone is not None:
            result['TimeZone'] = self.time_zone.to_map()
        if self.use_streaming is not None:
            result['UseStreaming'] = self.use_streaming.to_map()
        if self.extend_config is not None:
            result['ExtendConfig'] = self.extend_config
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Project') is not None:
            temp_model = TargetParameter()
            self.project = temp_model.from_map(m['Project'])
        if m.get('Table') is not None:
            temp_model = TargetParameter()
            self.table = temp_model.from_map(m['Table'])
        if m.get('RoleName') is not None:
            temp_model = TargetParameter()
            self.role_name = temp_model.from_map(m['RoleName'])
        if m.get('Format') is not None:
            temp_model = TargetParameter()
            self.format = temp_model.from_map(m['Format'])
        if m.get('Mode') is not None:
            temp_model = TargetParameter()
            self.mode = temp_model.from_map(m['Mode'])
        if m.get('PartitionWindowType') is not None:
            temp_model = TargetParameter()
            self.partition_window_type = temp_model.from_map(m['PartitionWindowType'])
        if m.get('TimeZone') is not None:
            temp_model = TargetParameter()
            self.time_zone = temp_model.from_map(m['TimeZone'])
        if m.get('UseStreaming') is not None:
            temp_model = TargetParameter()
            self.use_streaming = temp_model.from_map(m['UseStreaming'])
        if m.get('ExtendConfig') is not None:
            self.extend_config = m.get('ExtendConfig')
        return self


class Sink(TeaModel):
    """
    The config of Sink
    """
    def __init__(
        self,
        sink_mnsparameters: SinkMNSParameters = None,
        sink_rabbit_mqparameters: SinkRabbitMQParameters = None,
        sink_kafka_parameters: SinkKafkaParameters = None,
        sink_rocket_mqparameters: SinkRocketMQParameters = None,
        sink_fc_parameters: SinkFcParameters = None,
        sink_odps_parameters: SinkOdpsParameters = None,
    ):
        self.sink_mnsparameters = sink_mnsparameters
        self.sink_rabbit_mqparameters = sink_rabbit_mqparameters
        self.sink_kafka_parameters = sink_kafka_parameters
        self.sink_rocket_mqparameters = sink_rocket_mqparameters
        self.sink_fc_parameters = sink_fc_parameters
        self.sink_odps_parameters = sink_odps_parameters

    def validate(self):
        if self.sink_mnsparameters:
            self.sink_mnsparameters.validate()
        if self.sink_rabbit_mqparameters:
            self.sink_rabbit_mqparameters.validate()
        if self.sink_kafka_parameters:
            self.sink_kafka_parameters.validate()
        if self.sink_rocket_mqparameters:
            self.sink_rocket_mqparameters.validate()
        if self.sink_fc_parameters:
            self.sink_fc_parameters.validate()
        if self.sink_odps_parameters:
            self.sink_odps_parameters.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.sink_mnsparameters is not None:
            result['SinkMNSParameters'] = self.sink_mnsparameters.to_map()
        if self.sink_rabbit_mqparameters is not None:
            result['SinkRabbitMQParameters'] = self.sink_rabbit_mqparameters.to_map()
        if self.sink_kafka_parameters is not None:
            result['SinkKafkaParameters'] = self.sink_kafka_parameters.to_map()
        if self.sink_rocket_mqparameters is not None:
            result['SinkRocketMQParameters'] = self.sink_rocket_mqparameters.to_map()
        if self.sink_fc_parameters is not None:
            result['SinkFcParameters'] = self.sink_fc_parameters.to_map()
        if self.sink_odps_parameters is not None:
            result['SinkOdpsParameters'] = self.sink_odps_parameters.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('SinkMNSParameters') is not None:
            temp_model = SinkMNSParameters()
            self.sink_mnsparameters = temp_model.from_map(m['SinkMNSParameters'])
        if m.get('SinkRabbitMQParameters') is not None:
            temp_model = SinkRabbitMQParameters()
            self.sink_rabbit_mqparameters = temp_model.from_map(m['SinkRabbitMQParameters'])
        if m.get('SinkKafkaParameters') is not None:
            temp_model = SinkKafkaParameters()
            self.sink_kafka_parameters = temp_model.from_map(m['SinkKafkaParameters'])
        if m.get('SinkRocketMQParameters') is not None:
            temp_model = SinkRocketMQParameters()
            self.sink_rocket_mqparameters = temp_model.from_map(m['SinkRocketMQParameters'])
        if m.get('SinkFcParameters') is not None:
            temp_model = SinkFcParameters()
            self.sink_fc_parameters = temp_model.from_map(m['SinkFcParameters'])
        if m.get('SinkOdpsParameters') is not None:
            temp_model = SinkOdpsParameters()
            self.sink_odps_parameters = temp_model.from_map(m['SinkOdpsParameters'])
        return self


class RetryStrategy(TeaModel):
    """
    The config of RetryStrategy
    """
    def __init__(
        self,
        push_retry_strategy: str = None,
        maximum_event_age_in_seconds: int = None,
        maximum_retry_attempts: int = None,
    ):
        self.push_retry_strategy = push_retry_strategy
        self.maximum_event_age_in_seconds = maximum_event_age_in_seconds
        self.maximum_retry_attempts = maximum_retry_attempts

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.push_retry_strategy is not None:
            result['PushRetryStrategy'] = self.push_retry_strategy
        if self.maximum_event_age_in_seconds is not None:
            result['MaximumEventAgeInSeconds'] = self.maximum_event_age_in_seconds
        if self.maximum_retry_attempts is not None:
            result['MaximumRetryAttempts'] = self.maximum_retry_attempts
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('PushRetryStrategy') is not None:
            self.push_retry_strategy = m.get('PushRetryStrategy')
        if m.get('MaximumEventAgeInSeconds') is not None:
            self.maximum_event_age_in_seconds = m.get('MaximumEventAgeInSeconds')
        if m.get('MaximumRetryAttempts') is not None:
            self.maximum_retry_attempts = m.get('MaximumRetryAttempts')
        return self


class DeadLetterQueue(TeaModel):
    """
    The detail of DeadLetterQueue
    """
    def __init__(
        self,
        arn: str = None,
    ):
        self.arn = arn

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.arn is not None:
            result['Arn'] = self.arn
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Arn') is not None:
            self.arn = m.get('Arn')
        return self


class RunOptions(TeaModel):
    """
    The config of RunOptions
    """
    def __init__(
        self,
        maximum_tasks: int = None,
        retry_strategy: RetryStrategy = None,
        errors_tolerance: str = None,
        dead_letter_queue: DeadLetterQueue = None,
    ):
        self.maximum_tasks = maximum_tasks
        self.retry_strategy = retry_strategy
        self.errors_tolerance = errors_tolerance
        self.dead_letter_queue = dead_letter_queue

    def validate(self):
        if self.retry_strategy:
            self.retry_strategy.validate()
        if self.dead_letter_queue:
            self.dead_letter_queue.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.maximum_tasks is not None:
            result['MaximumTasks'] = self.maximum_tasks
        if self.retry_strategy is not None:
            result['RetryStrategy'] = self.retry_strategy.to_map()
        if self.errors_tolerance is not None:
            result['ErrorsTolerance'] = self.errors_tolerance
        if self.dead_letter_queue is not None:
            result['DeadLetterQueue'] = self.dead_letter_queue.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('MaximumTasks') is not None:
            self.maximum_tasks = m.get('MaximumTasks')
        if m.get('RetryStrategy') is not None:
            temp_model = RetryStrategy()
            self.retry_strategy = temp_model.from_map(m['RetryStrategy'])
        if m.get('ErrorsTolerance') is not None:
            self.errors_tolerance = m.get('ErrorsTolerance')
        if m.get('DeadLetterQueue') is not None:
            temp_model = DeadLetterQueue()
            self.dead_letter_queue = temp_model.from_map(m['DeadLetterQueue'])
        return self


class EventStreamingMetric(TeaModel):
    """
    The metrics of event streaming
    """
    def __init__(
        self,
        name: str = None,
        tps: float = None,
        delay_time: int = None,
        diff_offset: int = None,
        last_date_sync_time: int = None,
        last_heart_beat: int = None,
        status: str = None,
    ):
        self.name = name
        self.tps = tps
        self.delay_time = delay_time
        self.diff_offset = diff_offset
        self.last_date_sync_time = last_date_sync_time
        self.last_heart_beat = last_heart_beat
        self.status = status

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name is not None:
            result['Name'] = self.name
        if self.tps is not None:
            result['TPS'] = self.tps
        if self.delay_time is not None:
            result['DelayTime'] = self.delay_time
        if self.diff_offset is not None:
            result['DiffOffset'] = self.diff_offset
        if self.last_date_sync_time is not None:
            result['LastDateSyncTime'] = self.last_date_sync_time
        if self.last_heart_beat is not None:
            result['LastHeartBeat'] = self.last_heart_beat
        if self.status is not None:
            result['Status'] = self.status
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Name') is not None:
            self.name = m.get('Name')
        if m.get('TPS') is not None:
            self.tps = m.get('TPS')
        if m.get('DelayTime') is not None:
            self.delay_time = m.get('DelayTime')
        if m.get('DiffOffset') is not None:
            self.diff_offset = m.get('DiffOffset')
        if m.get('LastDateSyncTime') is not None:
            self.last_date_sync_time = m.get('LastDateSyncTime')
        if m.get('LastHeartBeat') is not None:
            self.last_heart_beat = m.get('LastHeartBeat')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        return self


class EBEventStreamingEntry(TeaModel):
    """
    The detail of EBEventStreamingEntry
    """
    def __init__(
        self,
        event_streaming_name: str = None,
        description: str = None,
        source: Source = None,
        filter_pattern: str = None,
        sink: Sink = None,
        run_options: RunOptions = None,
        tag: str = None,
        status: str = None,
    ):
        self.event_streaming_name = event_streaming_name
        self.description = description
        self.source = source
        self.filter_pattern = filter_pattern
        self.sink = sink
        self.run_options = run_options
        self.tag = tag
        self.status = status

    def validate(self):
        if self.source:
            self.source.validate()
        if self.sink:
            self.sink.validate()
        if self.run_options:
            self.run_options.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        if self.description is not None:
            result['Description'] = self.description
        if self.source is not None:
            result['Source'] = self.source.to_map()
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        if self.sink is not None:
            result['Sink'] = self.sink.to_map()
        if self.run_options is not None:
            result['RunOptions'] = self.run_options.to_map()
        if self.tag is not None:
            result['Tag'] = self.tag
        if self.status is not None:
            result['Status'] = self.status
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Source') is not None:
            temp_model = Source()
            self.source = temp_model.from_map(m['Source'])
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        if m.get('Sink') is not None:
            temp_model = Sink()
            self.sink = temp_model.from_map(m['Sink'])
        if m.get('RunOptions') is not None:
            temp_model = RunOptions()
            self.run_options = temp_model.from_map(m['RunOptions'])
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        return self


class CreateEventSourceResponse(TeaModel):
    """
    The response of createEventSource
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_source_arn: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_source_arn = event_source_arn

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_source_arn is not None:
            result['EventSourceARN'] = self.event_source_arn
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventSourceARN') is not None:
            self.event_source_arn = m.get('EventSourceARN')
        return self


class EBUserDefinedEventSourceEntry(TeaModel):
    """
    The event source entry
    """
    def __init__(
        self,
        name: str = None,
        description: str = None,
        arn: str = None,
        status: str = None,
        ctime: int = None,
        event_bus_name: str = None,
        source_rabbit_mqparameters: SourceRabbitMQParameters = None,
        source_mnsparameters: SourceMNSParameters = None,
        source_rocket_mqparameters: SourceRocketMQParameters = None,
        source_kafka_parameters: SourceKafkaParameters = None,
        source_http_event_parameters: SourceHttpEventParameters = None,
    ):
        self.name = name
        self.description = description
        self.arn = arn
        self.status = status
        self.ctime = ctime
        self.event_bus_name = event_bus_name
        self.source_rabbit_mqparameters = source_rabbit_mqparameters
        self.source_mnsparameters = source_mnsparameters
        self.source_rocket_mqparameters = source_rocket_mqparameters
        self.source_kafka_parameters = source_kafka_parameters
        self.source_http_event_parameters = source_http_event_parameters

    def validate(self):
        if self.source_rabbit_mqparameters:
            self.source_rabbit_mqparameters.validate()
        if self.source_mnsparameters:
            self.source_mnsparameters.validate()
        self.validate_required(self.source_rocket_mqparameters, 'source_rocket_mqparameters')
        if self.source_rocket_mqparameters:
            self.source_rocket_mqparameters.validate()
        self.validate_required(self.source_kafka_parameters, 'source_kafka_parameters')
        if self.source_kafka_parameters:
            self.source_kafka_parameters.validate()
        self.validate_required(self.source_http_event_parameters, 'source_http_event_parameters')
        if self.source_http_event_parameters:
            self.source_http_event_parameters.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name is not None:
            result['Name'] = self.name
        if self.description is not None:
            result['Description'] = self.description
        if self.arn is not None:
            result['ARN'] = self.arn
        if self.status is not None:
            result['Status'] = self.status
        if self.ctime is not None:
            result['Ctime'] = self.ctime
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.source_rabbit_mqparameters is not None:
            result['SourceRabbitMQParameters'] = self.source_rabbit_mqparameters.to_map()
        if self.source_mnsparameters is not None:
            result['SourceMNSParameters'] = self.source_mnsparameters.to_map()
        if self.source_rocket_mqparameters is not None:
            result['SourceRocketMQParameters'] = self.source_rocket_mqparameters.to_map()
        if self.source_kafka_parameters is not None:
            result['SourceKafkaParameters'] = self.source_kafka_parameters.to_map()
        if self.source_http_event_parameters is not None:
            result['SourceHttpEventParameters'] = self.source_http_event_parameters.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Name') is not None:
            self.name = m.get('Name')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('ARN') is not None:
            self.arn = m.get('ARN')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('Ctime') is not None:
            self.ctime = m.get('Ctime')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('SourceRabbitMQParameters') is not None:
            temp_model = SourceRabbitMQParameters()
            self.source_rabbit_mqparameters = temp_model.from_map(m['SourceRabbitMQParameters'])
        if m.get('SourceMNSParameters') is not None:
            temp_model = SourceMNSParameters()
            self.source_mnsparameters = temp_model.from_map(m['SourceMNSParameters'])
        if m.get('SourceRocketMQParameters') is not None:
            temp_model = SourceRocketMQParameters()
            self.source_rocket_mqparameters = temp_model.from_map(m['SourceRocketMQParameters'])
        if m.get('SourceKafkaParameters') is not None:
            temp_model = SourceKafkaParameters()
            self.source_kafka_parameters = temp_model.from_map(m['SourceKafkaParameters'])
        if m.get('SourceHttpEventParameters') is not None:
            temp_model = SourceHttpEventParameters()
            self.source_http_event_parameters = temp_model.from_map(m['SourceHttpEventParameters'])
        return self


class EBAliyunOfficialEventSourceEntry(TeaModel):
    """
    The event source entry
    """
    def __init__(
        self,
        name: str = None,
        description: str = None,
        arn: str = None,
        status: str = None,
        ctime: int = None,
        event_bus_name: str = None,
        event_types: List[EventTypeEntry] = None,
    ):
        self.name = name
        self.description = description
        self.arn = arn
        self.status = status
        self.ctime = ctime
        self.event_bus_name = event_bus_name
        self.event_types = event_types

    def validate(self):
        self.validate_required(self.name, 'name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.arn, 'arn')
        self.validate_required(self.status, 'status')
        self.validate_required(self.ctime, 'ctime')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.event_types, 'event_types')
        if self.event_types:
            for k in self.event_types:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name is not None:
            result['Name'] = self.name
        if self.description is not None:
            result['Description'] = self.description
        if self.arn is not None:
            result['ARN'] = self.arn
        if self.status is not None:
            result['Status'] = self.status
        if self.ctime is not None:
            result['Ctime'] = self.ctime
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        result['EventTypes'] = []
        if self.event_types is not None:
            for k in self.event_types:
                result['EventTypes'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('Name') is not None:
            self.name = m.get('Name')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('ARN') is not None:
            self.arn = m.get('ARN')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        if m.get('Ctime') is not None:
            self.ctime = m.get('Ctime')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        self.event_types = []
        if m.get('EventTypes') is not None:
            for k in m.get('EventTypes'):
                temp_model = EventTypeEntry()
                self.event_types.append(temp_model.from_map(k))
        return self


class DeleteEventSourceRequest(TeaModel):
    """
    The request of deleteEventSource
    """
    def __init__(
        self,
        event_bus_name: str = None,
        event_source_name: str = None,
    ):
        self.event_bus_name = event_bus_name
        self.event_source_name = event_source_name

    def validate(self):
        self.validate_required(self.event_source_name, 'event_source_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.event_source_name is not None:
            result['EventSourceName'] = self.event_source_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('EventSourceName') is not None:
            self.event_source_name = m.get('EventSourceName')
        return self


class DeleteEventSourceResponse(TeaModel):
    """
    The response of deleteEventSource
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class UpdateEventSourceRequest(TeaModel):
    """
    The request of update the event source
    """
    def __init__(
        self,
        event_source_name: str = None,
        description: str = None,
        event_bus_name: str = None,
        source_rabbit_mqparameters: SourceRabbitMQParameters = None,
        source_mnsparameters: SourceMNSParameters = None,
        source_rocket_mqparameters: SourceRocketMQParameters = None,
        source_scheduled_event_parameters: SourceScheduledEventParameters = None,
        source_http_event_parameters: SourceHttpEventParameters = None,
    ):
        self.event_source_name = event_source_name
        self.description = description
        self.event_bus_name = event_bus_name
        self.source_rabbit_mqparameters = source_rabbit_mqparameters
        self.source_mnsparameters = source_mnsparameters
        self.source_rocket_mqparameters = source_rocket_mqparameters
        self.source_scheduled_event_parameters = source_scheduled_event_parameters
        self.source_http_event_parameters = source_http_event_parameters

    def validate(self):
        self.validate_required(self.event_source_name, 'event_source_name')
        if self.event_source_name is not None:
            self.validate_max_length(self.event_source_name, 'event_source_name', 127)
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.source_rabbit_mqparameters:
            self.source_rabbit_mqparameters.validate()
        if self.source_mnsparameters:
            self.source_mnsparameters.validate()
        if self.source_rocket_mqparameters:
            self.source_rocket_mqparameters.validate()
        if self.source_scheduled_event_parameters:
            self.source_scheduled_event_parameters.validate()
        if self.source_http_event_parameters:
            self.source_http_event_parameters.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_source_name is not None:
            result['EventSourceName'] = self.event_source_name
        if self.description is not None:
            result['Description'] = self.description
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.source_rabbit_mqparameters is not None:
            result['SourceRabbitMQParameters'] = self.source_rabbit_mqparameters.to_map()
        if self.source_mnsparameters is not None:
            result['SourceMNSParameters'] = self.source_mnsparameters.to_map()
        if self.source_rocket_mqparameters is not None:
            result['SourceRocketMQParameters'] = self.source_rocket_mqparameters.to_map()
        if self.source_scheduled_event_parameters is not None:
            result['SourceScheduledEventParameters'] = self.source_scheduled_event_parameters.to_map()
        if self.source_http_event_parameters is not None:
            result['SourceHttpEventParameters'] = self.source_http_event_parameters.to_map()
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventSourceName') is not None:
            self.event_source_name = m.get('EventSourceName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('SourceRabbitMQParameters') is not None:
            temp_model = SourceRabbitMQParameters()
            self.source_rabbit_mqparameters = temp_model.from_map(m['SourceRabbitMQParameters'])
        if m.get('SourceMNSParameters') is not None:
            temp_model = SourceMNSParameters()
            self.source_mnsparameters = temp_model.from_map(m['SourceMNSParameters'])
        if m.get('SourceRocketMQParameters') is not None:
            temp_model = SourceRocketMQParameters()
            self.source_rocket_mqparameters = temp_model.from_map(m['SourceRocketMQParameters'])
        if m.get('SourceScheduledEventParameters') is not None:
            temp_model = SourceScheduledEventParameters()
            self.source_scheduled_event_parameters = temp_model.from_map(m['SourceScheduledEventParameters'])
        if m.get('SourceHttpEventParameters') is not None:
            temp_model = SourceHttpEventParameters()
            self.source_http_event_parameters = temp_model.from_map(m['SourceHttpEventParameters'])
        return self


class UpdateEventSourceResponse(TeaModel):
    """
    The response of update the event source
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class ListUserDefinedRequest(TeaModel):
    """
    The request of listUserDefinedEventSources
    """
    def __init__(
        self,
        event_bus_name: str = None,
        next_token: str = None,
        limit: int = None,
    ):
        self.event_bus_name = event_bus_name
        self.next_token = next_token
        self.limit = limit

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_bus_name is not None:
            result['EventBusName'] = self.event_bus_name
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.limit is not None:
            result['Limit'] = self.limit
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventBusName') is not None:
            self.event_bus_name = m.get('EventBusName')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        return self


class ListUserDefinedResponse(TeaModel):
    """
    The response of listUserDefinedEventSources
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_sources: List[EBUserDefinedEventSourceEntry] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_sources = event_sources
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        if self.event_sources:
            for k in self.event_sources:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventSources'] = []
        if self.event_sources is not None:
            for k in self.event_sources:
                result['EventSources'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.event_sources = []
        if m.get('EventSources') is not None:
            for k in m.get('EventSources'):
                temp_model = EBUserDefinedEventSourceEntry()
                self.event_sources.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class ListAliyunOfficialRequest(TeaModel):
    """
    The request of listAliyunOfficialEventSources
    """
    def __init__(
        self,
        next_token: str = None,
        limit: int = None,
    ):
        self.next_token = next_token
        self.limit = limit

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.limit is not None:
            result['Limit'] = self.limit
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        return self


class ListAliyunOfficialResponse(TeaModel):
    """
    The response of listAliyunOfficialEventSources
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_source_list: List[EBAliyunOfficialEventSourceEntry] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_source_list = event_source_list
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_source_list, 'event_source_list')
        if self.event_source_list:
            for k in self.event_source_list:
                if k:
                    k.validate()
        self.validate_required(self.next_token, 'next_token')
        self.validate_required(self.total, 'total')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventSourceList'] = []
        if self.event_source_list is not None:
            for k in self.event_source_list:
                result['EventSourceList'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.event_source_list = []
        if m.get('EventSourceList') is not None:
            for k in m.get('EventSourceList'):
                temp_model = EBAliyunOfficialEventSourceEntry()
                self.event_source_list.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class CreateEventStreamingRequest(TeaModel):
    """
    The request of createEventStreaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
        description: str = None,
        source: Source = None,
        filter_pattern: str = None,
        sink: Sink = None,
        run_options: RunOptions = None,
        tag: str = None,
    ):
        self.event_streaming_name = event_streaming_name
        self.description = description
        self.source = source
        self.filter_pattern = filter_pattern
        self.sink = sink
        self.run_options = run_options
        self.tag = tag

    def validate(self):
        if self.source:
            self.source.validate()
        if self.sink:
            self.sink.validate()
        if self.run_options:
            self.run_options.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        if self.description is not None:
            result['Description'] = self.description
        if self.source is not None:
            result['Source'] = self.source.to_map()
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        if self.sink is not None:
            result['Sink'] = self.sink.to_map()
        if self.run_options is not None:
            result['RunOptions'] = self.run_options.to_map()
        if self.tag is not None:
            result['Tag'] = self.tag
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Source') is not None:
            temp_model = Source()
            self.source = temp_model.from_map(m['Source'])
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        if m.get('Sink') is not None:
            temp_model = Sink()
            self.sink = temp_model.from_map(m['Sink'])
        if m.get('RunOptions') is not None:
            temp_model = RunOptions()
            self.run_options = temp_model.from_map(m['RunOptions'])
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        return self


class CreateEventStreamingResponse(TeaModel):
    """
    The response of createEventStreaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_streaming_arn: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_streaming_arn = event_streaming_arn

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_streaming_arn is not None:
            result['EventStreamingARN'] = self.event_streaming_arn
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventStreamingARN') is not None:
            self.event_streaming_arn = m.get('EventStreamingARN')
        return self


class DeleteEventStreamingRequest(TeaModel):
    """
    The request of delete event streaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
    ):
        self.event_streaming_name = event_streaming_name

    def validate(self):
        self.validate_required(self.event_streaming_name, 'event_streaming_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        return self


class DeleteEventStreamingResponse(TeaModel):
    """
    The response of delete event streaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class GetEventStreamingRequest(TeaModel):
    """
    The request of create event streaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
    ):
        self.event_streaming_name = event_streaming_name

    def validate(self):
        self.validate_required(self.event_streaming_name, 'event_streaming_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        return self


class GetEventStreamingResponse(TeaModel):
    """
    The response of create event streaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_streaming_name: str = None,
        description: str = None,
        source: Source = None,
        filter_pattern: str = None,
        sink: Sink = None,
        run_options: RunOptions = None,
        tag: str = None,
        status: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_streaming_name = event_streaming_name
        self.description = description
        self.source = source
        self.filter_pattern = filter_pattern
        self.sink = sink
        self.run_options = run_options
        self.tag = tag
        self.status = status

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_streaming_name, 'event_streaming_name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.source, 'source')
        if self.source:
            self.source.validate()
        self.validate_required(self.filter_pattern, 'filter_pattern')
        self.validate_required(self.sink, 'sink')
        if self.sink:
            self.sink.validate()
        self.validate_required(self.run_options, 'run_options')
        if self.run_options:
            self.run_options.validate()
        self.validate_required(self.tag, 'tag')
        self.validate_required(self.status, 'status')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        if self.description is not None:
            result['Description'] = self.description
        if self.source is not None:
            result['Source'] = self.source.to_map()
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        if self.sink is not None:
            result['Sink'] = self.sink.to_map()
        if self.run_options is not None:
            result['RunOptions'] = self.run_options.to_map()
        if self.tag is not None:
            result['Tag'] = self.tag
        if self.status is not None:
            result['Status'] = self.status
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Source') is not None:
            temp_model = Source()
            self.source = temp_model.from_map(m['Source'])
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        if m.get('Sink') is not None:
            temp_model = Sink()
            self.sink = temp_model.from_map(m['Sink'])
        if m.get('RunOptions') is not None:
            temp_model = RunOptions()
            self.run_options = temp_model.from_map(m['RunOptions'])
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        if m.get('Status') is not None:
            self.status = m.get('Status')
        return self


class ListEventStreamingMetricsRequest(TeaModel):
    """
    The request of listEventStreamingMetrics
    """
    def __init__(
        self,
        event_streaming_names: List[str] = None,
    ):
        self.event_streaming_names = event_streaming_names

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_names is not None:
            result['EventStreamingNames'] = self.event_streaming_names
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingNames') is not None:
            self.event_streaming_names = m.get('EventStreamingNames')
        return self


class ListEventStreamingMetricsResponse(TeaModel):
    """
    The response of listEventStreamingMetrics
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_streaming_metrics: List[EventStreamingMetric] = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_streaming_metrics = event_streaming_metrics

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_streaming_metrics, 'event_streaming_metrics')
        if self.event_streaming_metrics:
            for k in self.event_streaming_metrics:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventStreamingMetrics'] = []
        if self.event_streaming_metrics is not None:
            for k in self.event_streaming_metrics:
                result['EventStreamingMetrics'].append(k.to_map() if k else None)
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.event_streaming_metrics = []
        if m.get('EventStreamingMetrics') is not None:
            for k in m.get('EventStreamingMetrics'):
                temp_model = EventStreamingMetric()
                self.event_streaming_metrics.append(temp_model.from_map(k))
        return self


class ListEventStreamingsRequest(TeaModel):
    """
    The request of search EventStreaming
    """
    def __init__(
        self,
        name_prefix: str = None,
        source_type: str = None,
        sink_type: str = None,
        limit: int = None,
        next_token: str = None,
        tag: str = None,
    ):
        self.name_prefix = name_prefix
        self.source_type = source_type
        self.sink_type = sink_type
        self.limit = limit
        self.next_token = next_token
        self.tag = tag

    def validate(self):
        pass

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.name_prefix is not None:
            result['NamePrefix'] = self.name_prefix
        if self.source_type is not None:
            result['SourceType'] = self.source_type
        if self.sink_type is not None:
            result['SinkType'] = self.sink_type
        if self.limit is not None:
            result['Limit'] = self.limit
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.tag is not None:
            result['Tag'] = self.tag
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('NamePrefix') is not None:
            self.name_prefix = m.get('NamePrefix')
        if m.get('SourceType') is not None:
            self.source_type = m.get('SourceType')
        if m.get('SinkType') is not None:
            self.sink_type = m.get('SinkType')
        if m.get('Limit') is not None:
            self.limit = m.get('Limit')
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        return self


class ListEventStreamingsResponse(TeaModel):
    """
    The response of search EventStreaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
        event_streamings: List[EBEventStreamingEntry] = None,
        next_token: str = None,
        total: int = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id
        self.event_streamings = event_streamings
        self.next_token = next_token
        self.total = total

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        if self.event_streamings:
            for k in self.event_streamings:
                if k:
                    k.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventStreamings'] = []
        if self.event_streamings is not None:
            for k in self.event_streamings:
                result['EventStreamings'].append(k.to_map() if k else None)
        if self.next_token is not None:
            result['NextToken'] = self.next_token
        if self.total is not None:
            result['Total'] = self.total
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        self.event_streamings = []
        if m.get('EventStreamings') is not None:
            for k in m.get('EventStreamings'):
                temp_model = EBEventStreamingEntry()
                self.event_streamings.append(temp_model.from_map(k))
        if m.get('NextToken') is not None:
            self.next_token = m.get('NextToken')
        if m.get('Total') is not None:
            self.total = m.get('Total')
        return self


class PauseEventStreamingRequest(TeaModel):
    """
    The request of PauseEventStreaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
    ):
        self.event_streaming_name = event_streaming_name

    def validate(self):
        self.validate_required(self.event_streaming_name, 'event_streaming_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        return self


class PauseEventStreamingResponse(TeaModel):
    """
    The response of PauseEventStreaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class StartEventStreamingRequest(TeaModel):
    """
    The request of StartEventStreaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
    ):
        self.event_streaming_name = event_streaming_name

    def validate(self):
        self.validate_required(self.event_streaming_name, 'event_streaming_name')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        return self


class StartEventStreamingResponse(TeaModel):
    """
    The response of StartEventStreaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


class UpdateEventStreamingRequest(TeaModel):
    """
    The request of UpdateEventStreaming
    """
    def __init__(
        self,
        event_streaming_name: str = None,
        description: str = None,
        source: Source = None,
        filter_pattern: str = None,
        sink: Sink = None,
        run_options: RunOptions = None,
        tag: str = None,
    ):
        self.event_streaming_name = event_streaming_name
        self.description = description
        self.source = source
        self.filter_pattern = filter_pattern
        self.sink = sink
        self.run_options = run_options
        self.tag = tag

    def validate(self):
        self.validate_required(self.event_streaming_name, 'event_streaming_name')
        if self.source:
            self.source.validate()
        if self.sink:
            self.sink.validate()
        if self.run_options:
            self.run_options.validate()

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.event_streaming_name is not None:
            result['EventStreamingName'] = self.event_streaming_name
        if self.description is not None:
            result['Description'] = self.description
        if self.source is not None:
            result['Source'] = self.source.to_map()
        if self.filter_pattern is not None:
            result['FilterPattern'] = self.filter_pattern
        if self.sink is not None:
            result['Sink'] = self.sink.to_map()
        if self.run_options is not None:
            result['RunOptions'] = self.run_options.to_map()
        if self.tag is not None:
            result['Tag'] = self.tag
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('EventStreamingName') is not None:
            self.event_streaming_name = m.get('EventStreamingName')
        if m.get('Description') is not None:
            self.description = m.get('Description')
        if m.get('Source') is not None:
            temp_model = Source()
            self.source = temp_model.from_map(m['Source'])
        if m.get('FilterPattern') is not None:
            self.filter_pattern = m.get('FilterPattern')
        if m.get('Sink') is not None:
            temp_model = Sink()
            self.sink = temp_model.from_map(m['Sink'])
        if m.get('RunOptions') is not None:
            temp_model = RunOptions()
            self.run_options = temp_model.from_map(m['RunOptions'])
        if m.get('Tag') is not None:
            self.tag = m.get('Tag')
        return self


class UpdateEventStreamingResponse(TeaModel):
    """
    The response of UpdateEventStreaming
    """
    def __init__(
        self,
        request_id: str = None,
        resource_owner_account_id: str = None,
    ):
        self.request_id = request_id
        self.resource_owner_account_id = resource_owner_account_id

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        _map = super().to_map()
        if _map is not None:
            return _map

        result = dict()
        if self.request_id is not None:
            result['RequestId'] = self.request_id
        if self.resource_owner_account_id is not None:
            result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, m: dict = None):
        m = m or dict()
        if m.get('RequestId') is not None:
            self.request_id = m.get('RequestId')
        if m.get('ResourceOwnerAccountId') is not None:
            self.resource_owner_account_id = m.get('ResourceOwnerAccountId')
        return self


