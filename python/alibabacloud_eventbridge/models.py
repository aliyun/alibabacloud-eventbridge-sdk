# -*- coding: utf-8 -*-
# This file is auto-generated, don't edit it. Thanks.
from Tea.model import TeaModel
try:
    from typing import Dict, Any, List
except ImportError:
    pass


class Config(TeaModel):
    """
    Model for initing client
    """
    def __init__(self, access_key_id=None, access_key_secret=None, security_token=None, protocol=None,
                 region_id=None, read_timeout=None, connect_timeout=None, http_proxy=None, https_proxy=None, credential=None,
                 endpoint=None, no_proxy=None, max_idle_conns=None):
        # accesskey id
        self.access_key_id = access_key_id  # type: str
        # accesskey secret
        self.access_key_secret = access_key_secret  # type: str
        # security token
        self.security_token = security_token  # type: str
        # http protocol
        self.protocol = protocol        # type: str
        # region id
        self.region_id = region_id      # type: str
        # read timeout
        self.read_timeout = read_timeout  # type: int
        # connect timeout
        self.connect_timeout = connect_timeout  # type: int
        # http proxy
        self.http_proxy = http_proxy    # type: str
        # https proxy
        self.https_proxy = https_proxy  # type: str
        # credential
        self.credential = credential
        # endpoint
        self.endpoint = endpoint        # type: str
        # proxy white list
        self.no_proxy = no_proxy        # type: str
        # max idle conns
        self.max_idle_conns = max_idle_conns  # type: int

    def validate(self):
        if self.region_id:
            self.validate_pattern(self.region_id, 'region_id', '^[a-zA-Z0-9_-]+$')

    def to_map(self):
        result = {}
        result['accessKeyId'] = self.access_key_id
        result['accessKeySecret'] = self.access_key_secret
        result['securityToken'] = self.security_token
        result['protocol'] = self.protocol
        result['regionId'] = self.region_id
        result['readTimeout'] = self.read_timeout
        result['connectTimeout'] = self.connect_timeout
        result['httpProxy'] = self.http_proxy
        result['httpsProxy'] = self.https_proxy
        result['credential'] = self.credential
        result['endpoint'] = self.endpoint
        result['noProxy'] = self.no_proxy
        result['maxIdleConns'] = self.max_idle_conns
        return result

    def from_map(self, map={}):
        self.access_key_id = map.get('accessKeyId')
        self.access_key_secret = map.get('accessKeySecret')
        self.security_token = map.get('securityToken')
        self.protocol = map.get('protocol')
        self.region_id = map.get('regionId')
        self.read_timeout = map.get('readTimeout')
        self.connect_timeout = map.get('connectTimeout')
        self.http_proxy = map.get('httpProxy')
        self.https_proxy = map.get('httpsProxy')
        self.credential = map.get('credential')
        self.endpoint = map.get('endpoint')
        self.no_proxy = map.get('noProxy')
        self.max_idle_conns = map.get('maxIdleConns')
        return self


class PutEventsResponseEntry(TeaModel):
    """
    The detail of put event result
    """
    def __init__(self, event_id=None, trace_id=None, error_code=None, error_message=None):
        self.event_id = event_id        # type: str
        self.trace_id = trace_id        # type: str
        self.error_code = error_code    # type: str
        self.error_message = error_message  # type: str

    def validate(self):
        pass

    def to_map(self):
        result = {}
        result['EventId'] = self.event_id
        result['TraceId'] = self.trace_id
        result['ErrorCode'] = self.error_code
        result['ErrorMessage'] = self.error_message
        return result

    def from_map(self, map={}):
        self.event_id = map.get('EventId')
        self.trace_id = map.get('TraceId')
        self.error_code = map.get('ErrorCode')
        self.error_message = map.get('ErrorMessage')
        return self


class CloudEvent(TeaModel):
    """
    Cloud Event Stanard Froamt
    """
    def __init__(self, id=None, source=None, specversion=None, type=None, datacontenttype=None, dataschema=None,
                 subject=None, time=None, extensions=None, data=None):
        self.id = id                    # type: str
        self.source = source            # type: str
        self.specversion = specversion  # type: str
        self.type = type                # type: str
        self.datacontenttype = datacontenttype  # type: str
        self.dataschema = dataschema    # type: str
        self.subject = subject          # type: str
        self.time = time                # type: str
        self.extensions = extensions    # type: Dict[str, Any]
        self.data = data                # type: bytes

    def validate(self):
        self.validate_required(self.id, 'id')
        self.validate_required(self.source, 'source')
        if self.source:
            self.validate_max_length(self.source, 'source', 128)
        self.validate_required(self.type, 'type')
        if self.type:
            self.validate_max_length(self.type, 'type', 64)
        if self.time:
            self.validate_max_length(self.time, 'time', 64)
            self.validate_pattern(self.time, 'time', '[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}.[0-9]{3}[\\s\\S]*')
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


class PutEventsResponse(TeaModel):
    """
    put event response
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, failed_entry_count=None, entry_list=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.failed_entry_count = failed_entry_count  # type: int
        self.entry_list = entry_list    # type: List[PutEventsResponseEntry]

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        if self.entry_list:
            for k in self.entry_list:
                if k:
                    k.validate()

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['FailedEntryCount'] = self.failed_entry_count
        result['EntryList'] = []
        if self.entry_list is not None:
            for k in self.entry_list:
                result['EntryList'].append(k.to_map() if k else None)
        else:
            result['EntryList'] = None
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.failed_entry_count = map.get('FailedEntryCount')
        self.entry_list = []
        if map.get('EntryList') is not None:
            for k in map.get('EntryList'):
                temp_model = PutEventsResponseEntry()
                self.entry_list.append(temp_model.from_map(k))
        else:
            self.entry_list = None
        return self


class CreateEventBusRequest(TeaModel):
    """
    The request of create EventBus
    """
    def __init__(self, event_bus_name=None, description=None):
        self.event_bus_name = event_bus_name  # type: str
        self.description = description  # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.event_bus_name:
            self.validate_max_length(self.event_bus_name, 'event_bus_name', 127)

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['Description'] = self.description
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.description = map.get('Description')
        return self


class CreateEventBusResponse(TeaModel):
    """
    The response of create EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, event_bus_arn=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.event_bus_arn = event_bus_arn  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBusARN'] = self.event_bus_arn
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.event_bus_arn = map.get('EventBusARN')
        return self


class DeleteEventBusRequest(TeaModel):
    """
    The request of delete the EventBus
    """
    def __init__(self, event_bus_name=None):
        self.event_bus_name = event_bus_name  # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        return self


class DeleteEventBusResponse(TeaModel):
    """
    The response of delete the EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        return self


class GetEventBusRequest(TeaModel):
    """
    The request of get the detail of EventBus
    """
    def __init__(self, event_bus_name=None):
        self.event_bus_name = event_bus_name  # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        return self


class GetEventBusResponse(TeaModel):
    """
    The response of get the detail of EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, event_bus_arn=None, event_bus_name=None,
                 description=None, create_timestamp=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.event_bus_arn = event_bus_arn  # type: str
        self.event_bus_name = event_bus_name  # type: str
        self.description = description  # type: str
        self.create_timestamp = create_timestamp  # type: int

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_bus_arn, 'event_bus_arn')
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.description, 'description')
        self.validate_required(self.create_timestamp, 'create_timestamp')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBusARN'] = self.event_bus_arn
        result['EventBusName'] = self.event_bus_name
        result['Description'] = self.description
        result['CreateTimestamp'] = self.create_timestamp
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.event_bus_arn = map.get('EventBusARN')
        self.event_bus_name = map.get('EventBusName')
        self.description = map.get('Description')
        self.create_timestamp = map.get('CreateTimestamp')
        return self


class ListEventBusesRequest(TeaModel):
    """
    The request of list all the EventBus which meet the search criteria
    """
    def __init__(self, name_prefix=None, limit=None, next_token=None):
        self.name_prefix = name_prefix  # type: str
        self.limit = limit              # type: int
        self.next_token = next_token    # type: str

    def validate(self):
        pass

    def to_map(self):
        result = {}
        result['NamePrefix'] = self.name_prefix
        result['Limit'] = self.limit
        result['NextToken'] = self.next_token
        return result

    def from_map(self, map={}):
        self.name_prefix = map.get('NamePrefix')
        self.limit = map.get('Limit')
        self.next_token = map.get('NextToken')
        return self


class EventBusEntry(TeaModel):
    """
    The detail of EventBuses
    """
    def __init__(self, event_bus_name=None, event_bus_arn=None, description=None, create_timestamp=None):
        self.event_bus_name = event_bus_name  # type: str
        self.event_bus_arn = event_bus_arn  # type: str
        self.description = description  # type: str
        self.create_timestamp = create_timestamp  # type: int

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.event_bus_arn, 'event_bus_arn')
        self.validate_required(self.description, 'description')
        self.validate_required(self.create_timestamp, 'create_timestamp')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['EventBusARN'] = self.event_bus_arn
        result['Description'] = self.description
        result['CreateTimestamp'] = self.create_timestamp
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.event_bus_arn = map.get('EventBusARN')
        self.description = map.get('Description')
        self.create_timestamp = map.get('CreateTimestamp')
        return self


class ListEventBusesResponse(TeaModel):
    """
    The response of search EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, event_buses=None, next_token=None,
                 total=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.event_buses = event_buses  # type: List[EventBusEntry]
        self.next_token = next_token    # type: str
        self.total = total              # type: int

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
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBuses'] = []
        if self.event_buses is not None:
            for k in self.event_buses:
                result['EventBuses'].append(k.to_map() if k else None)
        else:
            result['EventBuses'] = None
        result['NextToken'] = self.next_token
        result['Total'] = self.total
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.event_buses = []
        if map.get('EventBuses') is not None:
            for k in map.get('EventBuses'):
                temp_model = EventBusEntry()
                self.event_buses.append(temp_model.from_map(k))
        else:
            self.event_buses = None
        self.next_token = map.get('NextToken')
        self.total = map.get('Total')
        return self


class CreateRuleRequest(TeaModel):
    """
    The request of create an EventBus rule on Aliyun
    """
    def __init__(self, event_bus_name=None, description=None, rule_name=None, status=None, filter_pattern=None,
                 targets=None):
        self.event_bus_name = event_bus_name  # type: str
        self.description = description  # type: str
        self.rule_name = rule_name      # type: str
        self.status = status            # type: str
        self.filter_pattern = filter_pattern  # type: str
        self.targets = targets          # type: List[TargetEntry]

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        if self.event_bus_name:
            self.validate_max_length(self.event_bus_name, 'event_bus_name', 127)
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['Description'] = self.description
        result['RuleName'] = self.rule_name
        result['Status'] = self.status
        result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        else:
            result['Targets'] = None
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.description = map.get('Description')
        self.rule_name = map.get('RuleName')
        self.status = map.get('Status')
        self.filter_pattern = map.get('FilterPattern')
        self.targets = []
        if map.get('Targets') is not None:
            for k in map.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        else:
            self.targets = None
        return self


class TargetEntry(TeaModel):
    """
    The detail of TargetEntry
    """
    def __init__(self, id=None, type=None, endpoint=None, push_selector=None, push_retry_strategy=None,
                 param_list=None):
        self.id = id                    # type: str
        self.type = type                # type: str
        self.endpoint = endpoint        # type: str
        self.push_selector = push_selector  # type: str
        self.push_retry_strategy = push_retry_strategy  # type: str
        self.param_list = param_list    # type: List[EBTargetParam]

    def validate(self):
        self.validate_required(self.id, 'id')
        self.validate_required(self.endpoint, 'endpoint')
        if self.param_list:
            for k in self.param_list:
                if k:
                    k.validate()

    def to_map(self):
        result = {}
        result['Id'] = self.id
        result['Type'] = self.type
        result['Endpoint'] = self.endpoint
        result['PushSelector'] = self.push_selector
        result['PushRetryStrategy'] = self.push_retry_strategy
        result['ParamList'] = []
        if self.param_list is not None:
            for k in self.param_list:
                result['ParamList'].append(k.to_map() if k else None)
        else:
            result['ParamList'] = None
        return result

    def from_map(self, map={}):
        self.id = map.get('Id')
        self.type = map.get('Type')
        self.endpoint = map.get('Endpoint')
        self.push_selector = map.get('PushSelector')
        self.push_retry_strategy = map.get('PushRetryStrategy')
        self.param_list = []
        if map.get('ParamList') is not None:
            for k in map.get('ParamList'):
                temp_model = EBTargetParam()
                self.param_list.append(temp_model.from_map(k))
        else:
            self.param_list = None
        return self


class EBTargetParam(TeaModel):
    """
    The param of EBTargetParam
    """
    def __init__(self, resource_key=None, form=None, value=None, template=None):
        self.resource_key = resource_key  # type: str
        self.form = form                # type: str
        self.value = value              # type: str
        self.template = template        # type: str

    def validate(self):
        self.validate_required(self.resource_key, 'resource_key')
        self.validate_required(self.form, 'form')

    def to_map(self):
        result = {}
        result['ResourceKey'] = self.resource_key
        result['Form'] = self.form
        result['Value'] = self.value
        result['Template'] = self.template
        return result

    def from_map(self, map={}):
        self.resource_key = map.get('ResourceKey')
        self.form = map.get('Form')
        self.value = map.get('Value')
        self.template = map.get('Template')
        return self


class CreateRuleResponse(TeaModel):
    """
    The response of create EventBus Rule
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, rule_arn=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.rule_arn = rule_arn        # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.rule_arn, 'rule_arn')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['RuleARN'] = self.rule_arn
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.rule_arn = map.get('RuleARN')
        return self


class DeleteRuleRequest(TeaModel):
    """
    The request of delete the rule
    """
    def __init__(self, event_bus_name=None, rule_name=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        return self


class DeleteRuleResponse(TeaModel):
    """
    The response of delete the rule
    """
    def __init__(self, request_id=None, resource_owner_account_id=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        return self


class DisableRuleRequest(TeaModel):
    """
    The request of disable the EventBus rule
    """
    def __init__(self, event_bus_name=None, rule_name=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        return self


class DisableRuleResponse(TeaModel):
    """
    The response of disable the EventBus rule
    """
    def __init__(self, request_id=None, resource_owner_account_id=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        return self


class EnableRuleRequest(TeaModel):
    """
    The request of enable the EventBus rule
    """
    def __init__(self, event_bus_name=None, rule_name=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        return self


class EnableRuleResponse(TeaModel):
    """
    The response of enable the EventBus rule
    """
    def __init__(self, request_id=None, resource_owner_account_id=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        return self


class GetRuleRequest(TeaModel):
    """
    The request of Get EventBus
    """
    def __init__(self, event_bus_name=None, rule_name=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        return self


class GetRuleResponse(TeaModel):
    """
    The response of Get EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, event_bus_name=None, rule_arn=None,
                 rule_name=None, description=None, status=None, filter_pattern=None, targets=None, ctime=None, mtime=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.event_bus_name = event_bus_name  # type: str
        self.rule_arn = rule_arn        # type: str
        self.rule_name = rule_name      # type: str
        self.description = description  # type: str
        self.status = status            # type: str
        self.filter_pattern = filter_pattern  # type: str
        self.targets = targets          # type: List[TargetEntry]
        self.ctime = ctime              # type: int
        self.mtime = mtime              # type: int

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
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBusName'] = self.event_bus_name
        result['RuleARN'] = self.rule_arn
        result['RuleName'] = self.rule_name
        result['Description'] = self.description
        result['Status'] = self.status
        result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        else:
            result['Targets'] = None
        result['Ctime'] = self.ctime
        result['Mtime'] = self.mtime
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.event_bus_name = map.get('EventBusName')
        self.rule_arn = map.get('RuleARN')
        self.rule_name = map.get('RuleName')
        self.description = map.get('Description')
        self.status = map.get('Status')
        self.filter_pattern = map.get('FilterPattern')
        self.targets = []
        if map.get('Targets') is not None:
            for k in map.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        else:
            self.targets = None
        self.ctime = map.get('Ctime')
        self.mtime = map.get('Mtime')
        return self


class ListRulesRequest(TeaModel):
    """
    The request of search EventBus
    """
    def __init__(self, event_bus_name=None, rule_name_prefix=None, limit=None, next_token=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name_prefix = rule_name_prefix  # type: str
        self.limit = limit              # type: int
        self.next_token = next_token    # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleNamePrefix'] = self.rule_name_prefix
        result['Limit'] = self.limit
        result['NextToken'] = self.next_token
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name_prefix = map.get('RuleNamePrefix')
        self.limit = map.get('Limit')
        self.next_token = map.get('NextToken')
        return self


class ListRulesResponse(TeaModel):
    """
    The response of search EventBus
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, next_token=None, rules=None, total=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.next_token = next_token    # type: str
        self.rules = rules              # type: List[EventRuleDTO]
        self.total = total              # type: int

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
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['NextToken'] = self.next_token
        result['Rules'] = []
        if self.rules is not None:
            for k in self.rules:
                result['Rules'].append(k.to_map() if k else None)
        else:
            result['Rules'] = None
        result['Total'] = self.total
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.next_token = map.get('NextToken')
        self.rules = []
        if map.get('Rules') is not None:
            for k in map.get('Rules'):
                temp_model = EventRuleDTO()
                self.rules.append(temp_model.from_map(k))
        else:
            self.rules = None
        self.total = map.get('Total')
        return self


class EventRuleDTO(TeaModel):
    """
    The detail of EventBuses rule
    """
    def __init__(self, rule_arn=None, event_bus_name=None, rule_name=None, description=None, status=None,
                 filter_pattern=None, targets=None, ctime=None, mtime=None):
        self.rule_arn = rule_arn        # type: str
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str
        self.description = description  # type: str
        self.status = status            # type: str
        self.filter_pattern = filter_pattern  # type: str
        self.targets = targets          # type: List[TargetEntry]
        self.ctime = ctime              # type: int
        self.mtime = mtime              # type: int

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
        result = {}
        result['RuleARN'] = self.rule_arn
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        result['Description'] = self.description
        result['Status'] = self.status
        result['FilterPattern'] = self.filter_pattern
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        else:
            result['Targets'] = None
        result['Ctime'] = self.ctime
        result['Mtime'] = self.mtime
        return result

    def from_map(self, map={}):
        self.rule_arn = map.get('RuleARN')
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        self.description = map.get('Description')
        self.status = map.get('Status')
        self.filter_pattern = map.get('FilterPattern')
        self.targets = []
        if map.get('Targets') is not None:
            for k in map.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        else:
            self.targets = None
        self.ctime = map.get('Ctime')
        self.mtime = map.get('Mtime')
        return self


class UpdateRuleRequest(TeaModel):
    """
    The request of update the EventBus rule
    """
    def __init__(self, event_bus_name=None, rule_name=None, description=None, status=None, filter_pattern=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str
        self.description = description  # type: str
        self.status = status            # type: str
        self.filter_pattern = filter_pattern  # type: str

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        result['Description'] = self.description
        result['Status'] = self.status
        result['FilterPattern'] = self.filter_pattern
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        self.description = map.get('Description')
        self.status = map.get('Status')
        self.filter_pattern = map.get('FilterPattern')
        return self


class UpdateRuleResponse(TeaModel):
    """
    The response of update the EventBus rule
    """
    def __init__(self, request_id=None, resource_owner_account_id=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        return self


class CreateTargetsRequest(TeaModel):
    """
    The request of create Targets
    """
    def __init__(self, event_bus_name=None, rule_name=None, targets=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str
        self.targets = targets          # type: List[TargetEntry]

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        else:
            result['Targets'] = None
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        self.targets = []
        if map.get('Targets') is not None:
            for k in map.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        else:
            self.targets = None
        return self


class CreateTargetsResponse(TeaModel):
    """
    The response of create Targets
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, event_bus_arn=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.event_bus_arn = event_bus_arn  # type: str

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.event_bus_arn, 'event_bus_arn')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['EventBusARN'] = self.event_bus_arn
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.event_bus_arn = map.get('EventBusARN')
        return self


class DeleteTargetsRequest(TeaModel):
    """
    The request of delete Targets
    """
    def __init__(self, event_bus_name=None, rule_name=None, target_ids=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str
        self.target_ids = target_ids    # type: List[str]

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')
        self.validate_required(self.target_ids, 'target_ids')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        result['TargetIds'] = self.target_ids
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        self.target_ids = map.get('TargetIds')
        return self


class DeleteTargetsResponse(TeaModel):
    """
    The response of delete Targets
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, error_entries_count=None,
                 error_entries=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.error_entries_count = error_entries_count  # type: int
        self.error_entries = error_entries  # type: List[TargetResultEntry]

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
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['ErrorEntriesCount'] = self.error_entries_count
        result['ErrorEntries'] = []
        if self.error_entries is not None:
            for k in self.error_entries:
                result['ErrorEntries'].append(k.to_map() if k else None)
        else:
            result['ErrorEntries'] = None
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.error_entries_count = map.get('ErrorEntriesCount')
        self.error_entries = []
        if map.get('ErrorEntries') is not None:
            for k in map.get('ErrorEntries'):
                temp_model = TargetResultEntry()
                self.error_entries.append(temp_model.from_map(k))
        else:
            self.error_entries = None
        return self


class TargetResultEntry(TeaModel):
    """
    The result detail of target operation
    """
    def __init__(self, error_code=None, error_message=None, entry_id=None):
        self.error_code = error_code    # type: str
        self.error_message = error_message  # type: str
        self.entry_id = entry_id        # type: str

    def validate(self):
        self.validate_required(self.error_code, 'error_code')
        self.validate_required(self.error_message, 'error_message')
        self.validate_required(self.entry_id, 'entry_id')

    def to_map(self):
        result = {}
        result['ErrorCode'] = self.error_code
        result['ErrorMessage'] = self.error_message
        result['EntryId'] = self.entry_id
        return result

    def from_map(self, map={}):
        self.error_code = map.get('ErrorCode')
        self.error_message = map.get('ErrorMessage')
        self.entry_id = map.get('EntryId')
        return self


class ListTargetsRequest(TeaModel):
    """
    The request of search Targets
    """
    def __init__(self, event_bus_name=None, rule_name=None, limit=None):
        self.event_bus_name = event_bus_name  # type: str
        self.rule_name = rule_name      # type: str
        self.limit = limit              # type: int

    def validate(self):
        self.validate_required(self.event_bus_name, 'event_bus_name')
        self.validate_required(self.rule_name, 'rule_name')

    def to_map(self):
        result = {}
        result['EventBusName'] = self.event_bus_name
        result['RuleName'] = self.rule_name
        result['Limit'] = self.limit
        return result

    def from_map(self, map={}):
        self.event_bus_name = map.get('EventBusName')
        self.rule_name = map.get('RuleName')
        self.limit = map.get('Limit')
        return self


class ListTargetsResponse(TeaModel):
    """
    The response of search Targets
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, targets=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.targets = targets          # type: List[TargetEntry]

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.targets, 'targets')
        if self.targets:
            for k in self.targets:
                if k:
                    k.validate()

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['Targets'] = []
        if self.targets is not None:
            for k in self.targets:
                result['Targets'].append(k.to_map() if k else None)
        else:
            result['Targets'] = None
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.targets = []
        if map.get('Targets') is not None:
            for k in map.get('Targets'):
                temp_model = TargetEntry()
                self.targets.append(temp_model.from_map(k))
        else:
            self.targets = None
        return self


class TestEventPatternRequest(TeaModel):
    """
    The request of testEventPattern
    """
    def __init__(self, event=None, event_pattern=None):
        self.event = event              # type: str
        self.event_pattern = event_pattern  # type: str

    def validate(self):
        self.validate_required(self.event, 'event')
        if self.event:
            self.validate_max_length(self.event, 'event', 2048)
        self.validate_required(self.event_pattern, 'event_pattern')
        if self.event_pattern:
            self.validate_max_length(self.event_pattern, 'event_pattern', 2048)

    def to_map(self):
        result = {}
        result['Event'] = self.event
        result['EventPattern'] = self.event_pattern
        return result

    def from_map(self, map={}):
        self.event = map.get('Event')
        self.event_pattern = map.get('EventPattern')
        return self


class TestEventPatternResponse(TeaModel):
    """
    The response of testEventPattern
    """
    def __init__(self, request_id=None, resource_owner_account_id=None, result=None):
        self.request_id = request_id    # type: str
        self.resource_owner_account_id = resource_owner_account_id  # type: str
        self.result = result            # type: bool

    def validate(self):
        self.validate_required(self.request_id, 'request_id')
        self.validate_required(self.resource_owner_account_id, 'resource_owner_account_id')
        self.validate_required(self.result, 'result')

    def to_map(self):
        result = {}
        result['RequestId'] = self.request_id
        result['ResourceOwnerAccountId'] = self.resource_owner_account_id
        result['Result'] = self.result
        return result

    def from_map(self, map={}):
        self.request_id = map.get('RequestId')
        self.resource_owner_account_id = map.get('ResourceOwnerAccountId')
        self.result = map.get('Result')
        return self
