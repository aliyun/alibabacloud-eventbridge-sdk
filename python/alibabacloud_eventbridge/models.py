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
            self.validate_pattern(self.time, 'time', '[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*')
        self.validate_required(self.extensions, 'extensions')

    def to_map(self):
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
    ):
        self.id = id
        self.type = type
        self.endpoint = endpoint
        self.push_retry_strategy = push_retry_strategy
        self.param_list = param_list

    def validate(self):
        self.validate_required(self.id, 'id')
        self.validate_required(self.type, 'type')
        self.validate_required(self.endpoint, 'endpoint')
        if self.param_list:
            for k in self.param_list:
                if k:
                    k.validate()

    def to_map(self):
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


