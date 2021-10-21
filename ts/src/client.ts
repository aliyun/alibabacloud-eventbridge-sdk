// This file is auto-generated, don't edit it
/**
 *
 */
import Util, * as $Util from '@alicloud/tea-util';
import EventBridgeUtil from '@alicloud/eventbridge-util';
import Credential, * as $Credential from '@alicloud/credentials';
import * as $tea from '@alicloud/tea-typescript';

/**
 * Model for initing client
 */
export class Config extends $tea.Model {
  accessKeyId?: string;
  accessKeySecret?: string;
  securityToken?: string;
  protocol?: string;
  regionId?: string;
  readTimeout?: number;
  connectTimeout?: number;
  httpProxy?: string;
  httpsProxy?: string;
  credential?: Credential;
  endpoint?: string;
  noProxy?: string;
  maxIdleConns?: number;
  static names(): { [key: string]: string } {
    return {
      accessKeyId: 'accessKeyId',
      accessKeySecret: 'accessKeySecret',
      securityToken: 'securityToken',
      protocol: 'protocol',
      regionId: 'regionId',
      readTimeout: 'readTimeout',
      connectTimeout: 'connectTimeout',
      httpProxy: 'httpProxy',
      httpsProxy: 'httpsProxy',
      credential: 'credential',
      endpoint: 'endpoint',
      noProxy: 'noProxy',
      maxIdleConns: 'maxIdleConns',
    };
  }

  static types(): { [key: string]: any } {
    return {
      accessKeyId: 'string',
      accessKeySecret: 'string',
      securityToken: 'string',
      protocol: 'string',
      regionId: 'string',
      readTimeout: 'number',
      connectTimeout: 'number',
      httpProxy: 'string',
      httpsProxy: 'string',
      credential: Credential,
      endpoint: 'string',
      noProxy: 'string',
      maxIdleConns: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of put event result
 */
export class PutEventsResponseEntry extends $tea.Model {
  eventId?: string;
  traceId?: string;
  errorCode?: string;
  errorMessage?: string;
  static names(): { [key: string]: string } {
    return {
      eventId: 'EventId',
      traceId: 'TraceId',
      errorCode: 'ErrorCode',
      errorMessage: 'ErrorMessage',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventId: 'string',
      traceId: 'string',
      errorCode: 'string',
      errorMessage: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * Cloud Event Stanard Froamt
 */
export class CloudEvent extends $tea.Model {
  id: string;
  source: string;
  specversion?: string;
  type: string;
  datacontenttype?: string;
  dataschema?: string;
  subject?: string;
  time?: string;
  extensions: { [key: string]: any };
  data?: Buffer;
  static names(): { [key: string]: string } {
    return {
      id: 'id',
      source: 'source',
      specversion: 'specversion',
      type: 'type',
      datacontenttype: 'datacontenttype',
      dataschema: 'dataschema',
      subject: 'subject',
      time: 'time',
      extensions: 'extensions',
      data: 'data',
    };
  }

  static types(): { [key: string]: any } {
    return {
      id: 'string',
      source: 'string',
      specversion: 'string',
      type: 'string',
      datacontenttype: 'string',
      dataschema: 'string',
      subject: 'string',
      time: 'string',
      extensions: { 'type': 'map', 'keyType': 'string', 'valueType': 'any' },
      data: 'Buffer',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * put event response
 */
export class PutEventsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  failedEntryCount?: number;
  entryList?: PutEventsResponseEntry[];
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      failedEntryCount: 'FailedEntryCount',
      entryList: 'EntryList',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      failedEntryCount: 'number',
      entryList: { 'type': 'array', 'itemType': PutEventsResponseEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of create EventBus
 */
export class CreateEventBusRequest extends $tea.Model {
  eventBusName: string;
  description?: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      description: 'Description',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      description: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of create EventBus
 */
export class CreateEventBusResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventBusARN?: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBusARN: 'EventBusARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventBusARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The event source entry
 */
export class EBAliyunOfficialEventSourceEntry extends $tea.Model {
  name: string;
  description: string;
  arn: string;
  status: string;
  ctime: number;
  eventBusName: string;
  eventTypes: EventTypeEntry[];
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      description: 'Description',
      arn: 'ARN',
      status: 'Status',
      ctime: 'Ctime',
      eventBusName: 'EventBusName',
      eventTypes: 'EventTypes',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      description: 'string',
      arn: 'string',
      status: 'string',
      ctime: 'number',
      eventBusName: 'string',
      eventTypes: { 'type': 'array', 'itemType': EventTypeEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The event source entry
 */
export class EventTypeEntry extends $tea.Model {
  name: string;
  eventSourceName: string;
  shortName: string;
  groupName: string;
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      eventSourceName: 'EventSourceName',
      shortName: 'ShortName',
      groupName: 'GroupName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      eventSourceName: 'string',
      shortName: 'string',
      groupName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of listAliyunOfficialEventSources
 */
export class ListAliyunOfficialRequest extends $tea.Model {
  nextToken?: string;
  limit?: number;
  static names(): { [key: string]: string } {
    return {
      nextToken: 'NextToken',
      limit: 'Limit',
    };
  }

  static types(): { [key: string]: any } {
    return {
      nextToken: 'string',
      limit: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of listAliyunOfficialEventSources
 */
export class ListAliyunOfficialResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventSourceList: EBAliyunOfficialEventSourceEntry[];
  nextToken: string;
  total: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventSourceList: 'EventSourceList',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventSourceList: { 'type': 'array', 'itemType': EBAliyunOfficialEventSourceEntry },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The event source entry
 */
export class EBUserDefinedEventSourceEntry extends $tea.Model {
  name?: string;
  description?: string;
  arn?: string;
  status?: string;
  ctime?: number;
  eventBusName?: string;
  sourceRabbitMQParameters?: SourceRabbitMQParameters;
  sourceMNSParameters?: SourceMNSParameters;
  sourceRocketMQParameters: SourceRocketMQParameters;
  sourceKafkaParameters: SourceKafkaParameters;
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      description: 'Description',
      arn: 'ARN',
      status: 'Status',
      ctime: 'Ctime',
      eventBusName: 'EventBusName',
      sourceRabbitMQParameters: 'SourceRabbitMQParameters',
      sourceMNSParameters: 'SourceMNSParameters',
      sourceRocketMQParameters: 'SourceRocketMQParameters',
      sourceKafkaParameters: 'SourceKafkaParameters',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      description: 'string',
      arn: 'string',
      status: 'string',
      ctime: 'number',
      eventBusName: 'string',
      sourceRabbitMQParameters: SourceRabbitMQParameters,
      sourceMNSParameters: SourceMNSParameters,
      sourceRocketMQParameters: SourceRocketMQParameters,
      sourceKafkaParameters: SourceKafkaParameters,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of listUserDefinedEventSources
 */
export class ListUserDefinedRequest extends $tea.Model {
  eventBusName?: string;
  nextToken?: string;
  limit?: number;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      nextToken: 'NextToken',
      limit: 'Limit',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      nextToken: 'string',
      limit: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of listUserDefinedEventSources
 */
export class ListUserDefinedResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventSources?: EBUserDefinedEventSourceEntry[];
  nextToken?: string;
  total?: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventSources: 'EventSources',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventSources: { 'type': 'array', 'itemType': EBUserDefinedEventSourceEntry },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of delete the EventBus
 */
export class DeleteEventBusRequest extends $tea.Model {
  eventBusName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of delete the EventBus
 */
export class DeleteEventBusResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of get the detail of EventBus
 */
export class GetEventBusRequest extends $tea.Model {
  eventBusName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of get the detail of EventBus
 */
export class GetEventBusResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventBusARN: string;
  eventBusName: string;
  description: string;
  createTimestamp: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBusARN: 'EventBusARN',
      eventBusName: 'EventBusName',
      description: 'Description',
      createTimestamp: 'CreateTimestamp',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventBusARN: 'string',
      eventBusName: 'string',
      description: 'string',
      createTimestamp: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of list all the EventBus which meet the search criteria
 */
export class ListEventBusesRequest extends $tea.Model {
  namePrefix?: string;
  limit?: number;
  nextToken?: string;
  static names(): { [key: string]: string } {
    return {
      namePrefix: 'NamePrefix',
      limit: 'Limit',
      nextToken: 'NextToken',
    };
  }

  static types(): { [key: string]: any } {
    return {
      namePrefix: 'string',
      limit: 'number',
      nextToken: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of EventBuses
 */
export class EventBusEntry extends $tea.Model {
  eventBusName: string;
  eventBusARN: string;
  description: string;
  createTimestamp: number;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventBusARN: 'EventBusARN',
      description: 'Description',
      createTimestamp: 'CreateTimestamp',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventBusARN: 'string',
      description: 'string',
      createTimestamp: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of search EventBus
 */
export class ListEventBusesResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventBuses: EventBusEntry[];
  nextToken: string;
  total: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBuses: 'EventBuses',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventBuses: { 'type': 'array', 'itemType': EventBusEntry },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of create an EventBus rule on Aliyun
 */
export class CreateRuleRequest extends $tea.Model {
  eventBusName: string;
  description?: string;
  ruleName: string;
  status?: string;
  filterPattern?: string;
  targets: TargetEntry[];
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      description: 'Description',
      ruleName: 'RuleName',
      status: 'Status',
      filterPattern: 'FilterPattern',
      targets: 'Targets',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      description: 'string',
      ruleName: 'string',
      status: 'string',
      filterPattern: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The traced event
 */
export class TracedEvent extends $tea.Model {
  eventBusName: string;
  eventId: string;
  eventSource: string;
  eventReceivedTime: number;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventId: 'EventId',
      eventSource: 'EventSource',
      eventReceivedTime: 'EventReceivedTime',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventId: 'string',
      eventSource: 'string',
      eventReceivedTime: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of query the event by id
 */
export class QueryEventByEventIdRequest extends $tea.Model {
  eventBusName?: string;
  eventSource?: string;
  eventId?: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventSource: 'EventSource',
      eventId: 'EventId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventSource: 'string',
      eventId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of query event by id
 */
export class QueryEventByEventIdResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  tracedEvents?: TracedEvent[];
  nextToken?: string;
  total?: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      tracedEvents: 'TracedEvents',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      tracedEvents: { 'type': 'array', 'itemType': TracedEvent },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of query the event traces by the event period
 */
export class QueryEventsByPeriodRequest extends $tea.Model {
  eventBusName: string;
  eventSource?: string;
  startTime: number;
  endTime: number;
  limit: number;
  nextToken: number;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventSource: 'EventSource',
      startTime: 'StartTime',
      endTime: 'EndTime',
      limit: 'Limit',
      nextToken: 'NextToken',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventSource: 'string',
      startTime: 'number',
      endTime: 'number',
      limit: 'number',
      nextToken: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of query the event traces by the event period
 */
export class QueryEventsByPeriodResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  tracedEvents?: TracedEvent[];
  nextToken?: string;
  total?: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      tracedEvents: 'TracedEvents',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      tracedEvents: { 'type': 'array', 'itemType': TracedEvent },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of EventTrace
 */
export class EventTrace extends $tea.Model {
  resourceOwnerId: string;
  action: string;
  eventId: string;
  eventBusName: string;
  actionTime: string;
  static names(): { [key: string]: string } {
    return {
      resourceOwnerId: 'ResourceOwnerId',
      action: 'Action',
      eventId: 'EventId',
      eventBusName: 'EventBusName',
      actionTime: 'ActionTime',
    };
  }

  static types(): { [key: string]: any } {
    return {
      resourceOwnerId: 'string',
      action: 'string',
      eventId: 'string',
      eventBusName: 'string',
      actionTime: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of queryEventTraces
 */
export class QueryEventTracesRequest extends $tea.Model {
  eventBusName?: string;
  eventId?: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventId: 'EventId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of queryEventTraces
 */
export class QueryEventTracesResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventTraceList?: EventTrace[];
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventTraceList: 'EventTraceList',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventTraceList: { 'type': 'array', 'itemType': EventTrace },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of delete event streaming
 */
export class DeleteEventStreamingRequest extends $tea.Model {
  eventStreamingName: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of delete event streaming
 */
export class DeleteEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of create event streaming
 */
export class GetEventStreamingRequest extends $tea.Model {
  eventStreamingName: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of create event streaming
 */
export class GetEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventStreamingName: string;
  description: string;
  source: Source;
  filterPattern: string;
  sink: Sink;
  runOptions: RunOptions;
  tag: string;
  status: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventStreamingName: 'EventStreamingName',
      description: 'Description',
      source: 'Source',
      filterPattern: 'FilterPattern',
      sink: 'Sink',
      runOptions: 'RunOptions',
      tag: 'Tag',
      status: 'Status',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventStreamingName: 'string',
      description: 'string',
      source: Source,
      filterPattern: 'string',
      sink: Sink,
      runOptions: RunOptions,
      tag: 'string',
      status: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The metrics of event streaming
 */
export class EventStreamingMetric extends $tea.Model {
  name?: string;
  tps?: number;
  delayTime?: number;
  diffOffset?: number;
  lastDateSyncTime?: number;
  lastHeartBeat?: number;
  status?: string;
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      tps: 'TPS',
      delayTime: 'DelayTime',
      diffOffset: 'DiffOffset',
      lastDateSyncTime: 'LastDateSyncTime',
      lastHeartBeat: 'LastHeartBeat',
      status: 'Status',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      tps: 'number',
      delayTime: 'number',
      diffOffset: 'number',
      lastDateSyncTime: 'number',
      lastHeartBeat: 'number',
      status: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of listEventStreamingMetrics
 */
export class ListEventStreamingMetricsRequest extends $tea.Model {
  eventStreamingNames?: string[];
  static names(): { [key: string]: string } {
    return {
      eventStreamingNames: 'EventStreamingNames',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingNames: { 'type': 'array', 'itemType': 'string' },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of listEventStreamingMetrics
 */
export class ListEventStreamingMetricsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventStreamingMetrics: EventStreamingMetric[];
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventStreamingMetrics: 'EventStreamingMetrics',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventStreamingMetrics: { 'type': 'array', 'itemType': EventStreamingMetric },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The eventsource of event streaming
 */
export class EBEventSourceEntry extends $tea.Model {
  name: string;
  New: boolean;
  description: string;
  externalSourceType: string;
  externalSourceConfig: { [key: string]: any };
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      New: 'IsNew',
      description: 'Description',
      externalSourceType: 'ExternalSourceType',
      externalSourceConfig: 'ExternalSourceConfig',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      New: 'boolean',
      description: 'string',
      externalSourceType: 'string',
      externalSourceConfig: { 'type': 'map', 'keyType': 'string', 'valueType': 'any' },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of Save and start event streaming procss
 */
export class SaveAndStartEventStreamingRequest extends $tea.Model {
  name: string;
  description?: string;
  EBEventSourceEntry?: string;
  filterPattern?: string;
  targets: TargetEntry[];
  static names(): { [key: string]: string } {
    return {
      name: 'Name',
      description: 'Description',
      EBEventSourceEntry: 'EBEventSourceEntry',
      filterPattern: 'FilterPattern',
      targets: 'Targets',
    };
  }

  static types(): { [key: string]: any } {
    return {
      name: 'string',
      description: 'string',
      EBEventSourceEntry: 'string',
      filterPattern: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of Save and start event streaming procss
 */
export class SaveAndStartEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventStreamingARN: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventStreamingARN: 'EventStreamingARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventStreamingARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of TargetEntry
 */
export class TargetEntry extends $tea.Model {
  id: string;
  type: string;
  endpoint: string;
  pushRetryStrategy?: string;
  paramList?: EBTargetParam[];
  static names(): { [key: string]: string } {
    return {
      id: 'Id',
      type: 'Type',
      endpoint: 'Endpoint',
      pushRetryStrategy: 'PushRetryStrategy',
      paramList: 'ParamList',
    };
  }

  static types(): { [key: string]: any } {
    return {
      id: 'string',
      type: 'string',
      endpoint: 'string',
      pushRetryStrategy: 'string',
      paramList: { 'type': 'array', 'itemType': EBTargetParam },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The param of EBTargetParam
 */
export class EBTargetParam extends $tea.Model {
  resourceKey: string;
  form: string;
  value?: string;
  template?: string;
  static names(): { [key: string]: string } {
    return {
      resourceKey: 'ResourceKey',
      form: 'Form',
      value: 'Value',
      template: 'Template',
    };
  }

  static types(): { [key: string]: any } {
    return {
      resourceKey: 'string',
      form: 'string',
      value: 'string',
      template: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of create EventBus Rule
 */
export class CreateRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  ruleARN: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      ruleARN: 'RuleARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      ruleARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of delete the rule
 */
export class DeleteRuleRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of delete the rule
 */
export class DeleteRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of disable the EventBus rule
 */
export class DisableRuleRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of disable the EventBus rule
 */
export class DisableRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of enable the EventBus rule
 */
export class EnableRuleRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of enable the EventBus rule
 */
export class EnableRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of UpdateEventStreaming
 */
export class UpdateEventStreamingRequest extends $tea.Model {
  eventStreamingName: string;
  description?: string;
  Source?: Source;
  filterPattern?: string;
  Sink?: Sink;
  runOptions?: RunOptions;
  tag?: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
      description: 'Description',
      Source: 'Source',
      filterPattern: 'FilterPattern',
      Sink: 'Sink',
      runOptions: 'RunOptions',
      tag: 'Tag',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
      description: 'string',
      Source: Source,
      filterPattern: 'string',
      Sink: Sink,
      runOptions: RunOptions,
      tag: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of UpdateEventStreaming
 */
export class UpdateEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of StartEventStreaming
 */
export class StartEventStreamingRequest extends $tea.Model {
  eventStreamingName: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of StartEventStreaming
 */
export class StartEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of PauseEventStreaming
 */
export class PauseEventStreamingRequest extends $tea.Model {
  eventStreamingName: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of PauseEventStreaming
 */
export class PauseEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of DeadLetterQueue
 */
export class DeadLetterQueue extends $tea.Model {
  arn?: string;
  static names(): { [key: string]: string } {
    return {
      arn: 'Arn',
    };
  }

  static types(): { [key: string]: any } {
    return {
      arn: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of EBEventStreamingEntry
 */
export class EBEventStreamingEntry extends $tea.Model {
  eventStreamingName?: string;
  description?: string;
  source?: Source;
  filterPattern?: string;
  sink?: Sink;
  runOptions?: RunOptions;
  tag?: string;
  status?: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
      description: 'Description',
      source: 'Source',
      filterPattern: 'FilterPattern',
      sink: 'Sink',
      runOptions: 'RunOptions',
      tag: 'Tag',
      status: 'Status',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
      description: 'string',
      source: Source,
      filterPattern: 'string',
      sink: Sink,
      runOptions: RunOptions,
      tag: 'string',
      status: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of search EventStreaming
 */
export class listEventStreamingsRequest extends $tea.Model {
  namePrefix?: string;
  sourceType?: string;
  sinkType?: string;
  limit?: number;
  nextToken?: string;
  tag?: string;
  static names(): { [key: string]: string } {
    return {
      namePrefix: 'NamePrefix',
      sourceType: 'SourceType',
      sinkType: 'SinkType',
      limit: 'Limit',
      nextToken: 'NextToken',
      tag: 'Tag',
    };
  }

  static types(): { [key: string]: any } {
    return {
      namePrefix: 'string',
      sourceType: 'string',
      sinkType: 'string',
      limit: 'number',
      nextToken: 'string',
      tag: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of search EventStreaming
 */
export class listEventStreamingsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventStreamings?: EBEventStreamingEntry[];
  nextToken?: string;
  total?: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventStreamings: 'EventStreamings',
      nextToken: 'NextToken',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventStreamings: { 'type': 'array', 'itemType': EBEventStreamingEntry },
      nextToken: 'string',
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkOdpsParameters
 */
export class SinkOdpsParameters extends $tea.Model {
  project?: TargetParameter;
  table?: TargetParameter;
  roleName?: TargetParameter;
  format?: TargetParameter;
  mode?: TargetParameter;
  partitionWindowType?: TargetParameter;
  timeZone?: TargetParameter;
  useStreaming?: TargetParameter;
  extendConfig?: { [key: string]: any };
  static names(): { [key: string]: string } {
    return {
      project: 'Project',
      table: 'Table',
      roleName: 'RoleName',
      format: 'Format',
      mode: 'Mode',
      partitionWindowType: 'PartitionWindowType',
      timeZone: 'TimeZone',
      useStreaming: 'UseStreaming',
      extendConfig: 'ExtendConfig',
    };
  }

  static types(): { [key: string]: any } {
    return {
      project: TargetParameter,
      table: TargetParameter,
      roleName: TargetParameter,
      format: TargetParameter,
      mode: TargetParameter,
      partitionWindowType: TargetParameter,
      timeZone: TargetParameter,
      useStreaming: TargetParameter,
      extendConfig: { 'type': 'map', 'keyType': 'string', 'valueType': 'any' },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkFcParameters
 */
export class SinkFcParameters extends $tea.Model {
  serviceName?: TargetParameter;
  functionName?: TargetParameter;
  body?: TargetParameter;
  qualifier?: TargetParameter;
  invocationType?: TargetParameter;
  batchSize?: TargetParameter;
  extendConfig?: { [key: string]: any };
  static names(): { [key: string]: string } {
    return {
      serviceName: 'ServiceName',
      functionName: 'FunctionName',
      body: 'Body',
      qualifier: 'Qualifier',
      invocationType: 'InvocationType',
      batchSize: 'BatchSize',
      extendConfig: 'ExtendConfig',
    };
  }

  static types(): { [key: string]: any } {
    return {
      serviceName: TargetParameter,
      functionName: TargetParameter,
      body: TargetParameter,
      qualifier: TargetParameter,
      invocationType: TargetParameter,
      batchSize: TargetParameter,
      extendConfig: { 'type': 'map', 'keyType': 'string', 'valueType': 'any' },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkRocketMQParameters
 */
export class SinkRocketMQParameters extends $tea.Model {
  instanceId?: TargetParameter;
  topic?: TargetParameter;
  body?: TargetParameter;
  properties?: TargetParameter;
  keys?: TargetParameter;
  tags?: TargetParameter;
  static names(): { [key: string]: string } {
    return {
      instanceId: 'InstanceId',
      topic: 'Topic',
      body: 'Body',
      properties: 'Properties',
      keys: 'Keys',
      tags: 'Tags',
    };
  }

  static types(): { [key: string]: any } {
    return {
      instanceId: TargetParameter,
      topic: TargetParameter,
      body: TargetParameter,
      properties: TargetParameter,
      keys: TargetParameter,
      tags: TargetParameter,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkKafkaParameters
 */
export class SinkKafkaParameters extends $tea.Model {
  instanceId?: TargetParameter;
  topic?: TargetParameter;
  acks?: TargetParameter;
  key?: TargetParameter;
  value?: TargetParameter;
  static names(): { [key: string]: string } {
    return {
      instanceId: 'InstanceId',
      topic: 'Topic',
      acks: 'Acks',
      key: 'Key',
      value: 'Value',
    };
  }

  static types(): { [key: string]: any } {
    return {
      instanceId: TargetParameter,
      topic: TargetParameter,
      acks: TargetParameter,
      key: TargetParameter,
      value: TargetParameter,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkRabbitMQParameters
 */
export class SinkRabbitMQParameters extends $tea.Model {
  instanceId?: TargetParameter;
  virtualHostName?: TargetParameter;
  targetType?: TargetParameter;
  exchange?: TargetParameter;
  routingKey?: TargetParameter;
  queueName?: TargetParameter;
  body?: TargetParameter;
  messageId?: TargetParameter;
  properties?: TargetParameter;
  static names(): { [key: string]: string } {
    return {
      instanceId: 'InstanceId',
      virtualHostName: 'VirtualHostName',
      targetType: 'TargetType',
      exchange: 'Exchange',
      routingKey: 'RoutingKey',
      queueName: 'QueueName',
      body: 'Body',
      messageId: 'MessageId',
      properties: 'Properties',
    };
  }

  static types(): { [key: string]: any } {
    return {
      instanceId: TargetParameter,
      virtualHostName: TargetParameter,
      targetType: TargetParameter,
      exchange: TargetParameter,
      routingKey: TargetParameter,
      queueName: TargetParameter,
      body: TargetParameter,
      messageId: TargetParameter,
      properties: TargetParameter,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of SinkMNSParameters
 */
export class SinkMNSParameters extends $tea.Model {
  QueueName?: TargetParameter;
  body?: TargetParameter;
  static names(): { [key: string]: string } {
    return {
      QueueName: 'QueueName',
      body: 'Body',
    };
  }

  static types(): { [key: string]: any } {
    return {
      QueueName: TargetParameter,
      body: TargetParameter,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of TargetParameter
 */
export class TargetParameter extends $tea.Model {
  value?: string;
  form?: string;
  template?: string;
  static names(): { [key: string]: string } {
    return {
      value: 'Value',
      form: 'Form',
      template: 'Template',
    };
  }

  static types(): { [key: string]: any } {
    return {
      value: 'string',
      form: 'string',
      template: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of Sink
 */
export class Sink extends $tea.Model {
  sinkMNSParameters?: SinkMNSParameters;
  sinkRabbitMQParameters?: SinkRabbitMQParameters;
  sinkKafkaParameters?: SinkKafkaParameters;
  sinkRocketMQParameters?: SinkRocketMQParameters;
  sinkFcParameters?: SinkFcParameters;
  sinkOdpsParameters?: SinkOdpsParameters;
  static names(): { [key: string]: string } {
    return {
      sinkMNSParameters: 'SinkMNSParameters',
      sinkRabbitMQParameters: 'SinkRabbitMQParameters',
      sinkKafkaParameters: 'SinkKafkaParameters',
      sinkRocketMQParameters: 'SinkRocketMQParameters',
      sinkFcParameters: 'SinkFcParameters',
      sinkOdpsParameters: 'SinkOdpsParameters',
    };
  }

  static types(): { [key: string]: any } {
    return {
      sinkMNSParameters: SinkMNSParameters,
      sinkRabbitMQParameters: SinkRabbitMQParameters,
      sinkKafkaParameters: SinkKafkaParameters,
      sinkRocketMQParameters: SinkRocketMQParameters,
      sinkFcParameters: SinkFcParameters,
      sinkOdpsParameters: SinkOdpsParameters,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of RunOptions
 */
export class RunOptions extends $tea.Model {
  maximumTasks?: number;
  retryStrategy?: RetryStrategy;
  errorsTolerance?: string;
  deadLetterQueue?: DeadLetterQueue;
  static names(): { [key: string]: string } {
    return {
      maximumTasks: 'MaximumTasks',
      retryStrategy: 'RetryStrategy',
      errorsTolerance: 'ErrorsTolerance',
      deadLetterQueue: 'DeadLetterQueue',
    };
  }

  static types(): { [key: string]: any } {
    return {
      maximumTasks: 'number',
      retryStrategy: RetryStrategy,
      errorsTolerance: 'string',
      deadLetterQueue: DeadLetterQueue,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of RetryStrategy
 */
export class RetryStrategy extends $tea.Model {
  pushRetryStrategy?: string;
  maximumEventAgeInSeconds?: number;
  maximumRetryAttempts?: number;
  static names(): { [key: string]: string } {
    return {
      pushRetryStrategy: 'PushRetryStrategy',
      maximumEventAgeInSeconds: 'MaximumEventAgeInSeconds',
      maximumRetryAttempts: 'MaximumRetryAttempts',
    };
  }

  static types(): { [key: string]: any } {
    return {
      pushRetryStrategy: 'string',
      maximumEventAgeInSeconds: 'number',
      maximumRetryAttempts: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The config of Source
 */
export class Source extends $tea.Model {
  sourceMNSParameters?: SourceMNSParameters;
  sourceRabbitMQParameters?: SourceRabbitMQParameters;
  sourceRocketMQParameters?: SourceRocketMQParameters;
  sourceKafkaParameters?: SourceKafkaParameters;
  static names(): { [key: string]: string } {
    return {
      sourceMNSParameters: 'SourceMNSParameters',
      sourceRabbitMQParameters: 'SourceRabbitMQParameters',
      sourceRocketMQParameters: 'SourceRocketMQParameters',
      sourceKafkaParameters: 'SourceKafkaParameters',
    };
  }

  static types(): { [key: string]: any } {
    return {
      sourceMNSParameters: SourceMNSParameters,
      sourceRabbitMQParameters: SourceRabbitMQParameters,
      sourceRocketMQParameters: SourceRocketMQParameters,
      sourceKafkaParameters: SourceKafkaParameters,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of createEventStreaming
 */
export class CreateEventStreamingRequest extends $tea.Model {
  eventStreamingName?: string;
  description?: string;
  source?: Source;
  filterPattern?: string;
  sink?: Sink;
  runOptions?: RunOptions;
  tag?: string;
  static names(): { [key: string]: string } {
    return {
      eventStreamingName: 'EventStreamingName',
      description: 'Description',
      source: 'Source',
      filterPattern: 'FilterPattern',
      sink: 'Sink',
      runOptions: 'RunOptions',
      tag: 'Tag',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventStreamingName: 'string',
      description: 'string',
      source: Source,
      filterPattern: 'string',
      sink: Sink,
      runOptions: RunOptions,
      tag: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of createEventStreaming
 */
export class CreateEventStreamingResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventStreamingARN?: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventStreamingARN: 'EventStreamingARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventStreamingARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of SourceRabbitMQParameters
 */
export class SourceRabbitMQParameters extends $tea.Model {
  regionId?: string;
  instanceId?: string;
  virtualHostName: string;
  queueName: string;
  static names(): { [key: string]: string } {
    return {
      regionId: 'RegionId',
      instanceId: 'InstanceId',
      virtualHostName: 'VirtualHostName',
      queueName: 'QueueName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      regionId: 'string',
      instanceId: 'string',
      virtualHostName: 'string',
      queueName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of SourceMNSParameters
 */
export class SourceMNSParameters extends $tea.Model {
  regionId?: string;
  queueName?: string;
  isBase64Decode: boolean;
  static names(): { [key: string]: string } {
    return {
      regionId: 'RegionId',
      queueName: 'QueueName',
      isBase64Decode: 'IsBase64Decode',
    };
  }

  static types(): { [key: string]: any } {
    return {
      regionId: 'string',
      queueName: 'string',
      isBase64Decode: 'boolean',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of SourceRocketMQParameters
 */
export class SourceRocketMQParameters extends $tea.Model {
  regionId?: string;
  instanceId?: string;
  topic?: string;
  tag?: string;
  timestamp?: number;
  offset?: string;
  groupID: string;
  static names(): { [key: string]: string } {
    return {
      regionId: 'RegionId',
      instanceId: 'InstanceId',
      topic: 'Topic',
      tag: 'Tag',
      timestamp: 'Timestamp',
      offset: 'Offset',
      groupID: 'GroupID',
    };
  }

  static types(): { [key: string]: any } {
    return {
      regionId: 'string',
      instanceId: 'string',
      topic: 'string',
      tag: 'string',
      timestamp: 'number',
      offset: 'string',
      groupID: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of SourceKafkaParameters
 */
export class SourceKafkaParameters extends $tea.Model {
  InstanceId?: string;
  topic?: string;
  consumerGroup: string;
  offsetRest?: string;
  static names(): { [key: string]: string } {
    return {
      InstanceId: 'InstanceId',
      topic: 'Topic',
      consumerGroup: 'ConsumerGroup',
      offsetRest: 'OffsetRest',
    };
  }

  static types(): { [key: string]: any } {
    return {
      InstanceId: 'string',
      topic: 'string',
      consumerGroup: 'string',
      offsetRest: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of createEventSource
 */
export class CreateEventSourceRequest extends $tea.Model {
  eventSourceName: string;
  description?: string;
  eventBusName: string;
  sourceRabbitMQParameters?: SourceRabbitMQParameters;
  sourceMNSParameters?: SourceMNSParameters;
  SourceRocketMQParameters?: SourceRocketMQParameters;
  static names(): { [key: string]: string } {
    return {
      eventSourceName: 'EventSourceName',
      description: 'Description',
      eventBusName: 'EventBusName',
      sourceRabbitMQParameters: 'SourceRabbitMQParameters',
      sourceMNSParameters: 'SourceMNSParameters',
      SourceRocketMQParameters: 'SourceRocketMQParameters',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventSourceName: 'string',
      description: 'string',
      eventBusName: 'string',
      sourceRabbitMQParameters: SourceRabbitMQParameters,
      sourceMNSParameters: SourceMNSParameters,
      SourceRocketMQParameters: SourceRocketMQParameters,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of createEventSource
 */
export class CreateEventSourceResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventSourceARN?: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventSourceARN: 'EventSourceARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventSourceARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of deleteEventSource
 */
export class DeleteEventSourceRequest extends $tea.Model {
  eventBusName?: string;
  eventSourceName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventSourceName: 'EventSourceName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventSourceName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of deleteEventSource
 */
export class DeleteEventSourceResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of update the event source
 */
export class UpdateEventSourceRequest extends $tea.Model {
  eventSourceName: string;
  description?: string;
  eventBusName: string;
  sourceRabbitMQParameters?: SourceRabbitMQParameters;
  sourceMNSParameters?: SourceMNSParameters;
  sourceRocketMQParameters?: SourceRocketMQParameters;
  static names(): { [key: string]: string } {
    return {
      eventSourceName: 'EventSourceName',
      description: 'Description',
      eventBusName: 'EventBusName',
      sourceRabbitMQParameters: 'SourceRabbitMQParameters',
      sourceMNSParameters: 'SourceMNSParameters',
      sourceRocketMQParameters: 'SourceRocketMQParameters',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventSourceName: 'string',
      description: 'string',
      eventBusName: 'string',
      sourceRabbitMQParameters: SourceRabbitMQParameters,
      sourceMNSParameters: SourceMNSParameters,
      sourceRocketMQParameters: SourceRocketMQParameters,
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of update the event source
 */
export class UpdateEventSourceResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of Get EventBus
 */
export class GetRuleRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of Get EventBus
 */
export class GetRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventBusName: string;
  ruleARN: string;
  ruleName: string;
  description: string;
  status: string;
  filterPattern: string;
  targets: TargetEntry[];
  ctime: number;
  mtime: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBusName: 'EventBusName',
      ruleARN: 'RuleARN',
      ruleName: 'RuleName',
      description: 'Description',
      status: 'Status',
      filterPattern: 'FilterPattern',
      targets: 'Targets',
      ctime: 'Ctime',
      mtime: 'Mtime',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventBusName: 'string',
      ruleARN: 'string',
      ruleName: 'string',
      description: 'string',
      status: 'string',
      filterPattern: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
      ctime: 'number',
      mtime: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of search EventBus
 */
export class ListRulesRequest extends $tea.Model {
  eventBusName: string;
  ruleNamePrefix?: string;
  limit?: number;
  nextToken?: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleNamePrefix: 'RuleNamePrefix',
      limit: 'Limit',
      nextToken: 'NextToken',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleNamePrefix: 'string',
      limit: 'number',
      nextToken: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of search EventBus
 */
export class ListRulesResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  nextToken: string;
  rules: EventRuleDTO[];
  total: number;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      nextToken: 'NextToken',
      rules: 'Rules',
      total: 'Total',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      nextToken: 'string',
      rules: { 'type': 'array', 'itemType': EventRuleDTO },
      total: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The detail of EventBuses rule
 */
export class EventRuleDTO extends $tea.Model {
  ruleARN: string;
  eventBusName: string;
  ruleName: string;
  description: string;
  status: string;
  filterPattern: string;
  targets: TargetEntry[];
  ctime: number;
  mtime: number;
  static names(): { [key: string]: string } {
    return {
      ruleARN: 'RuleARN',
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      description: 'Description',
      status: 'Status',
      filterPattern: 'FilterPattern',
      targets: 'Targets',
      ctime: 'Ctime',
      mtime: 'Mtime',
    };
  }

  static types(): { [key: string]: any } {
    return {
      ruleARN: 'string',
      eventBusName: 'string',
      ruleName: 'string',
      description: 'string',
      status: 'string',
      filterPattern: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
      ctime: 'number',
      mtime: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of update the EventBus rule
 */
export class UpdateRuleRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  description?: string;
  status?: string;
  filterPattern?: string;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      description: 'Description',
      status: 'Status',
      filterPattern: 'FilterPattern',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
      description: 'string',
      status: 'string',
      filterPattern: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of update the EventBus rule
 */
export class UpdateRuleResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of create Targets
 */
export class CreateTargetsRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  targets: TargetEntry[];
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      targets: 'Targets',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of create Targets
 */
export class CreateTargetsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  eventBusARN: string;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBusARN: 'EventBusARN',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      eventBusARN: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of delete Targets
 */
export class DeleteTargetsRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  targetIds: string[];
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      targetIds: 'TargetIds',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
      targetIds: { 'type': 'array', 'itemType': 'string' },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of delete Targets
 */
export class DeleteTargetsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  errorEntriesCount: number;
  errorEntries: TargetResultEntry[];
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      errorEntriesCount: 'ErrorEntriesCount',
      errorEntries: 'ErrorEntries',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      errorEntriesCount: 'number',
      errorEntries: { 'type': 'array', 'itemType': TargetResultEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The result detail of target operation
 */
export class TargetResultEntry extends $tea.Model {
  errorCode: string;
  errorMessage: string;
  entryId: string;
  static names(): { [key: string]: string } {
    return {
      errorCode: 'ErrorCode',
      errorMessage: 'ErrorMessage',
      entryId: 'EntryId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      errorCode: 'string',
      errorMessage: 'string',
      entryId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of search Targets
 */
export class ListTargetsRequest extends $tea.Model {
  eventBusName: string;
  ruleName: string;
  limit?: number;
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      limit: 'Limit',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
      limit: 'number',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of search Targets
 */
export class ListTargetsResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  targets: TargetEntry[];
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      targets: 'Targets',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      targets: { 'type': 'array', 'itemType': TargetEntry },
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of testEventPattern
 */
export class TestEventPatternRequest extends $tea.Model {
  event: string;
  eventPattern: string;
  static names(): { [key: string]: string } {
    return {
      event: 'Event',
      eventPattern: 'EventPattern',
    };
  }

  static types(): { [key: string]: any } {
    return {
      event: 'string',
      eventPattern: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of testEventPattern
 */
export class TestEventPatternResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  result: boolean;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      result: 'Result',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      result: 'boolean',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The request of query EventBridge status for a given user
 */
export class QueryEventBridgeStatusRequest extends $tea.Model {
  resourceOwnerAccountId: string;
  static names(): { [key: string]: string } {
    return {
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
    };
  }

  static types(): { [key: string]: any } {
    return {
      resourceOwnerAccountId: 'string',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}

/**
 * The response of query EventBridge status for a given user
 */
export class QueryEventBridgeStatusResponse extends $tea.Model {
  requestId: string;
  resourceOwnerAccountId: string;
  defaultBusEnable: boolean;
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      defaultBusEnable: 'DefaultBusEnable',
    };
  }

  static types(): { [key: string]: any } {
    return {
      requestId: 'string',
      resourceOwnerAccountId: 'string',
      defaultBusEnable: 'boolean',
    };
  }

  constructor(map?: { [key: string]: any }) {
    super(map);
  }
}


export default class Client {
  _protocol: string;
  _readTimeout: number;
  _connectTimeout: number;
  _httpProxy: string;
  _httpsProxy: string;
  _noProxy: string;
  _maxIdleConns: number;
  _endpoint: string;
  _regionId: string;
  _credential: Credential;

  /**
   * Init client with Config
   * @param config config contains the necessary information to create a client
   */
  constructor(config: Config) {
    if (Util.isUnset($tea.toMap(config))) {
      throw $tea.newError({
        code: "ParameterMissing",
        message: "'config' can not be unset",
      });
    }

    Util.validateModel(config);
    if (!Util.empty(config.accessKeyId) && !Util.empty(config.accessKeySecret)) {
      let credentialType = "access_key";
      if (!Util.empty(config.securityToken)) {
        credentialType = "sts";
      }

      let credentialConfig = new $Credential.Config({
        accessKeyId: config.accessKeyId,
        type: credentialType,
        accessKeySecret: config.accessKeySecret,
        securityToken: config.securityToken,
      });
      this._credential = new Credential(credentialConfig);
    } else if (!Util.isUnset(config.credential)) {
      this._credential = config.credential;
    } else {
      throw $tea.newError({
        code: "ParameterMissing",
        message: "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset",
      });
    }

    if (Util.empty(config.endpoint)) {
      throw $tea.newError({
        code: "ParameterMissing",
        message: "'endpoint' can not be unset",
      });
    }

    if (EventBridgeUtil.startWith(config.endpoint, "http") || EventBridgeUtil.startWith(config.endpoint, "https")) {
      throw $tea.newError({
        code: "ParameterError",
        message: "'endpoint' shouldn't start with 'http' or 'https'",
      });
    }

    this._regionId = config.regionId;
    this._protocol = config.protocol;
    this._endpoint = config.endpoint;
    this._readTimeout = config.readTimeout;
    this._connectTimeout = config.connectTimeout;
    this._httpProxy = config.httpProxy;
    this._httpsProxy = config.httpsProxy;
    this._maxIdleConns = config.maxIdleConns;
  }

  /**
   * Encapsulate the request and invoke the network
   * @param action the api name
   * @param protocol http or https
   * @param method e.g. GET
   * @param pathname pathname of every api
   * @param query which contains request params
   * @param body content of request
   * @param runtime which controls some details of call api, such as retry times
   * @return the response
   */
  async doRequest(action: string, protocol: string, method: string, pathname: string, query: {[key: string ]: string}, body: any, headers: {[key: string ]: string}, runtime: $Util.RuntimeOptions): Promise<{[key: string]: any}> {
    let _runtime: { [key: string]: any } = {
      timeouted: "retry",
      readTimeout: Util.defaultNumber(runtime.readTimeout, this._readTimeout),
      connectTimeout: Util.defaultNumber(runtime.connectTimeout, this._connectTimeout),
      httpProxy: Util.defaultString(runtime.httpProxy, this._httpProxy),
      httpsProxy: Util.defaultString(runtime.httpsProxy, this._httpsProxy),
      noProxy: Util.defaultString(runtime.noProxy, this._noProxy),
      maxIdleConns: Util.defaultNumber(runtime.maxIdleConns, this._maxIdleConns),
      retry: {
        retryable: runtime.autoretry,
        maxAttempts: Util.defaultNumber(runtime.maxAttempts, 3),
      },
      backoff: {
        policy: Util.defaultString(runtime.backoffPolicy, "no"),
        period: Util.defaultNumber(runtime.backoffPeriod, 1),
      },
      ignoreSSL: runtime.ignoreSSL,
    }

    let _lastRequest = null;
    let _now = Date.now();
    let _retryTimes = 0;
    while ($tea.allowRetry(_runtime['retry'], _retryTimes, _now)) {
      if (_retryTimes > 0) {
        let _backoffTime = $tea.getBackoffTime(_runtime['backoff'], _retryTimes);
        if (_backoffTime > 0) {
          await $tea.sleep(_backoffTime);
        }
      }

      _retryTimes = _retryTimes + 1;
      try {
        let request_ = new $tea.Request();
        request_.protocol = Util.defaultString(this._protocol, protocol);
        request_.method = method;
        request_.pathname = pathname;
        request_.headers = {
          date: Util.getDateUTCString(),
          host: this._endpoint,
          accept: "application/json",
          'x-acs-signature-nonce': Util.getNonce(),
          'x-acs-signature-method': "HMAC-SHA1",
          'x-acs-signature-version': "1.0",
          'x-eventbridge-version': "2015-06-06",
          'user-agent': Util.getUserAgent(" aliyun-eventbridge-sdk/1.1.0"),
          ...headers,
        };
        if (!Util.isUnset(this._regionId)) {
          request_.headers["x-eventbridge-regionId"] = this._regionId;
        }

        if (!Util.isUnset(body)) {
          request_.body = new $tea.BytesReadable(Util.toJSONString(body));
          request_.headers["content-type"] = "application/json; charset=utf-8";
        }

        if (Util.equalString(action, "putEvents")) {
          request_.headers["content-type"] = "application/cloudevents-batch+json; charset=utf-8";
        }

        if (Util.equalString(action, "putEventsToAccount")) {
          request_.headers["content-type"] = "application/cloudevents-batch+json; charset=utf-8";
          request_.headers["x-eventbridge-sourcetype"] = "acs.*";
        }

        if (!Util.isUnset(query)) {
          request_.query = query;
        }

        let accessKeyId = await this._credential.getAccessKeyId();
        let accessKeySecret = await this._credential.getAccessKeySecret();
        let securityToken = await this._credential.getSecurityToken();
        if (!Util.empty(securityToken)) {
          request_.headers["x-acs-accesskey-id"] = accessKeyId;
          request_.headers["x-acs-security-token"] = securityToken;
        }

        let stringToSign = EventBridgeUtil.getStringToSign(request_);
        request_.headers["authorization"] = `acs:${accessKeyId}:${EventBridgeUtil.getSignature(stringToSign, accessKeySecret)}`;
        _lastRequest = request_;
        let response_ = await $tea.doAction(request_, _runtime);

        let result = await Util.readAsJSON(response_.body);
        let tmp = Util.assertAsMap(result);
        if (Util.is4xx(response_.statusCode) || Util.is5xx(response_.statusCode)) {
          throw $tea.newError({
            code: tmp["code"],
            message: `[EventBridgeError] ${tmp["message"]}`,
            data: tmp,
          });
        }

        return tmp;
      } catch (ex) {
        if ($tea.isRetryable(ex)) {
          continue;
        }
        throw ex;
      }
    }

    throw $tea.newUnretryableError(_lastRequest);
  }

  /**
   * Publish event to the aliyun EventBus
   */
  async putEvents(eventList: CloudEvent[]): Promise<PutEventsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.putEventsWithOptions(eventList, runtime);
  }

  /**
   * Publish event to the aliyun EventBus
   */
  async putEventsWithOptions(eventList: CloudEvent[], runtime: $Util.RuntimeOptions): Promise<PutEventsResponse> {

    for (let cloudEvent of eventList) {
      if (Util.isUnset(cloudEvent.specversion)) {
        cloudEvent.specversion = "1.0";
      }

      if (Util.isUnset(cloudEvent.datacontenttype)) {
        cloudEvent.datacontenttype = "application/json; charset=utf-8";
      }

      Util.validateModel(cloudEvent);
    }
    let body = EventBridgeUtil.serialize(eventList);
    return $tea.cast<PutEventsResponse>(await this.doRequest("putEvents", "HTTP", "POST", `/openapi/putEvents`, null, body, null, runtime), new PutEventsResponse({}));
  }

  /**
   * Publish event to the aliyun specified account's event bus
   */
  async putEventsToAccount(accoutid: string, eventList: CloudEvent[]): Promise<PutEventsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.putEventsToAccountWithOptions(accoutid, eventList, runtime);
  }

  /**
   * Publish event to the aliyun specified account's event bus
   */
  async putEventsToAccountWithOptions(accoutid: string, eventList: CloudEvent[], runtime: $Util.RuntimeOptions): Promise<PutEventsResponse> {

    for (let cloudEvent of eventList) {
      if (Util.isUnset(cloudEvent.specversion)) {
        cloudEvent.specversion = "1.0";
      }

      if (Util.isUnset(cloudEvent.datacontenttype)) {
        cloudEvent.datacontenttype = "application/json; charset=utf-8";
      }

      Util.validateModel(cloudEvent);
    }
    if (Util.empty(accoutid)) {
      throw $tea.newError({
        code: "ParameterMissing",
        message: "accoutid should be setted",
      });
    }

    let header : {[key: string ]: string} = {
      'x-eventbridge-accountid': accoutid,
    };
    let body = EventBridgeUtil.serialize(eventList);
    return $tea.cast<PutEventsResponse>(await this.doRequest("putEventsToAccount", "HTTP", "POST", `/openapi/putEventsToAccount`, null, body, header, runtime), new PutEventsResponse({}));
  }

  /**
   * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
   */
  async createEventBus(request: CreateEventBusRequest): Promise<CreateEventBusResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.createEventBusWithOptions(request, runtime);
  }

  /**
   * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
   */
  async createEventBusWithOptions(request: CreateEventBusRequest, runtime: $Util.RuntimeOptions): Promise<CreateEventBusResponse> {
    Util.validateModel(request);
    return $tea.cast<CreateEventBusResponse>(await this.doRequest("createEventBus", "HTTP", "POST", `/openapi/createEventBus`, null, $tea.toMap(request), null, runtime), new CreateEventBusResponse({}));
  }

  /**
   * List the aliyun official event source within your account
   */
  async listAliyunOfficialEventSources(request: ListAliyunOfficialRequest): Promise<ListAliyunOfficialResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listAliyunOfficialEventSourcesWithOptions(request, runtime);
  }

  /**
   * List the aliyun official event source within your account
   */
  async listAliyunOfficialEventSourcesWithOptions(request: ListAliyunOfficialRequest, runtime: $Util.RuntimeOptions): Promise<ListAliyunOfficialResponse> {
    Util.validateModel(request);
    return $tea.cast<ListAliyunOfficialResponse>(await this.doRequest("listAliyunOfficialEventSources", "HTTP", "POST", `/openapi/v2/listAliyunOfficialEventSources`, null, $tea.toMap(request), null, runtime), new ListAliyunOfficialResponse({}));
  }

  /**
   * List the user defined event source within your account
   */
  async listUserDefinedEventSources(request: ListUserDefinedRequest): Promise<ListUserDefinedResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listUserDefinedEventSourcesWithOptions(request, runtime);
  }

  /**
   * List the user defined event source within your account
   */
  async listUserDefinedEventSourcesWithOptions(request: ListUserDefinedRequest, runtime: $Util.RuntimeOptions): Promise<ListUserDefinedResponse> {
    Util.validateModel(request);
    return $tea.cast<ListUserDefinedResponse>(await this.doRequest("listUserDefinedEventSources", "HTTP", "POST", `/openapi/v2/listUserDefinedEventSources`, null, $tea.toMap(request), null, runtime), new ListUserDefinedResponse({}));
  }

  /**
   * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
   */
  async deleteEventBus(request: DeleteEventBusRequest): Promise<DeleteEventBusResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.deleteEventBusWithOptions(request, runtime);
  }

  /**
   * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
   */
  async deleteEventBusWithOptions(request: DeleteEventBusRequest, runtime: $Util.RuntimeOptions): Promise<DeleteEventBusResponse> {
    Util.validateModel(request);
    return $tea.cast<DeleteEventBusResponse>(await this.doRequest("deleteEventBus", "HTTP", "POST", `/openapi/deleteEventBus`, null, $tea.toMap(request), null, runtime), new DeleteEventBusResponse({}));
  }

  /**
   * Displays details about an event bus in your account
   */
  async getEventBus(request: GetEventBusRequest): Promise<GetEventBusResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.getEventBusWithOptions(request, runtime);
  }

  /**
   * Displays details about an event bus in your account
   */
  async getEventBusWithOptions(request: GetEventBusRequest, runtime: $Util.RuntimeOptions): Promise<GetEventBusResponse> {
    Util.validateModel(request);
    return $tea.cast<GetEventBusResponse>(await this.doRequest("getEventBus", "HTTP", "POST", `/openapi/getEventBus`, null, $tea.toMap(request), null, runtime), new GetEventBusResponse({}));
  }

  /**
   * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
   */
  async listEventBuses(request: ListEventBusesRequest): Promise<ListEventBusesResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listEventBusesWithOptions(request, runtime);
  }

  /**
   * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
   */
  async listEventBusesWithOptions(request: ListEventBusesRequest, runtime: $Util.RuntimeOptions): Promise<ListEventBusesResponse> {
    Util.validateModel(request);
    return $tea.cast<ListEventBusesResponse>(await this.doRequest("listEventBuses", "HTTP", "POST", `/openapi/listEventBuses`, null, $tea.toMap(request), null, runtime), new ListEventBusesResponse({}));
  }

  /**
   * Query the event traces by the event Id
   */
  async queryEventByEventId(request: QueryEventByEventIdRequest): Promise<QueryEventByEventIdResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.queryEventByEventIdWithOptions(request, runtime);
  }

  /**
   * Query the event traces by the event Id
   */
  async queryEventByEventIdWithOptions(request: QueryEventByEventIdRequest, runtime: $Util.RuntimeOptions): Promise<QueryEventByEventIdResponse> {
    Util.validateModel(request);
    return $tea.cast<QueryEventByEventIdResponse>(await this.doRequest("queryEventByEventId", "HTTP", "POST", `/openapi/queryEventByEventId`, null, $tea.toMap(request), null, runtime), new QueryEventByEventIdResponse({}));
  }

  /**
   *Query the event traces by the event period
   */
  async queryEventsByPeriod(request: QueryEventsByPeriodRequest): Promise<QueryEventsByPeriodResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.queryEventsByPeriodWithOptions(request, runtime);
  }

  /**
   * Query the event traces by the event period
   */
  async queryEventsByPeriodWithOptions(request: QueryEventsByPeriodRequest, runtime: $Util.RuntimeOptions): Promise<QueryEventsByPeriodResponse> {
    Util.validateModel(request);
    return $tea.cast<QueryEventsByPeriodResponse>(await this.doRequest("queryEventsByPeriod", "HTTP", "POST", `/openapi/queryEventsByPeriod`, null, $tea.toMap(request), null, runtime), new QueryEventsByPeriodResponse({}));
  }

  /**
   * Query the event traces by the event Id
   */
  async queryEventTraces(request: QueryEventTracesRequest): Promise<QueryEventTracesResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.queryEventTracesWithOptions(request, runtime);
  }

  /**
   * Query the event traces by the event Id
   */
  async queryEventTracesWithOptions(request: QueryEventTracesRequest, runtime: $Util.RuntimeOptions): Promise<QueryEventTracesResponse> {
    Util.validateModel(request);
    return $tea.cast<QueryEventTracesResponse>(await this.doRequest("queryEventTraces", "HTTP", "POST", `/openapi/queryEventTraces`, null, $tea.toMap(request), null, runtime), new QueryEventTracesResponse({}));
  }

  /**
   * delete event streaming
   */
  async deleteEventStreaming(request: DeleteEventStreamingRequest): Promise<DeleteEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.deleteEventStreamingWithOptions(request, runtime);
  }

  /**
   * delete event streaming
   */
  async deleteEventStreamingWithOptions(request: DeleteEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<DeleteEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<DeleteEventStreamingResponse>(await this.doRequest("deleteEventStreaming", "HTTP", "POST", `/openapi/v2/deleteEventStreaming`, null, $tea.toMap(request), null, runtime), new DeleteEventStreamingResponse({}));
  }

  /**
   * create event streaming
   */
  async getEventStreaming(request: GetEventStreamingRequest): Promise<GetEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.getEventStreamingWithOptions(request, runtime);
  }

  /**
   * create event streaming
   */
  async getEventStreamingWithOptions(request: GetEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<GetEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<GetEventStreamingResponse>(await this.doRequest("getEventStreaming", "HTTP", "POST", `/openapi/v2/getEventStreaming`, null, $tea.toMap(request), null, runtime), new GetEventStreamingResponse({}));
  }

  /**
   * List the metrics of event streaming
   */
  async listEventStreamingMetrics(request: ListEventStreamingMetricsRequest): Promise<ListEventStreamingMetricsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listEventStreamingMetricsWithOptions(request, runtime);
  }

  /**
   * List the metrics of event streaming
   */
  async listEventStreamingMetricsWithOptions(request: ListEventStreamingMetricsRequest, runtime: $Util.RuntimeOptions): Promise<ListEventStreamingMetricsResponse> {
    Util.validateModel(request);
    return $tea.cast<ListEventStreamingMetricsResponse>(await this.doRequest("listEventStreamingMetrics", "HTTP", "POST", `/openapi/v2/listEventStreamingMetrics`, null, $tea.toMap(request), null, runtime), new ListEventStreamingMetricsResponse({}));
  }

  /**
   * Save and start event streaming procss
   */
  async saveAndStartEventStreaming(request: SaveAndStartEventStreamingRequest): Promise<SaveAndStartEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.saveAndStartEventStreamingWithOptions(request, runtime);
  }

  /**
   * Save and start event streaming procss
   */
  async saveAndStartEventStreamingWithOptions(request: SaveAndStartEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<SaveAndStartEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<SaveAndStartEventStreamingResponse>(await this.doRequest("saveAndStartEventStreaming", "HTTP", "POST", `/openapi/saveAndStartEventStreaming`, null, $tea.toMap(request), null, runtime), new SaveAndStartEventStreamingResponse({}));
  }

  /**
   * Create an EventBus rule on Aliyun
   */
  async createRule(request: CreateRuleRequest): Promise<CreateRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.createRuleWithOptions(request, runtime);
  }

  /**
   * Create an EventBus rule on Aliyun
   */
  async createRuleWithOptions(request: CreateRuleRequest, runtime: $Util.RuntimeOptions): Promise<CreateRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<CreateRuleResponse>(await this.doRequest("createRule", "HTTP", "POST", `/openapi/createRule`, null, $tea.toMap(request), null, runtime), new CreateRuleResponse({}));
  }

  /**
   * Deletes the specified rule.
   */
  async deleteRule(request: DeleteRuleRequest): Promise<DeleteRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.deleteRuleWithOptions(request, runtime);
  }

  /**
   * Deletes the specified rule.
   */
  async deleteRuleWithOptions(request: DeleteRuleRequest, runtime: $Util.RuntimeOptions): Promise<DeleteRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<DeleteRuleResponse>(await this.doRequest("deleteRule", "HTTP", "POST", `/openapi/deleteRule`, null, $tea.toMap(request), null, runtime), new DeleteRuleResponse({}));
  }

  /**
   * Disables the specified rule
   */
  async disableRule(request: DisableRuleRequest): Promise<DisableRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.disableRuleWithOptions(request, runtime);
  }

  /**
   * Disables the specified rule
   */
  async disableRuleWithOptions(request: DisableRuleRequest, runtime: $Util.RuntimeOptions): Promise<DisableRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<DisableRuleResponse>(await this.doRequest("disableRule", "HTTP", "POST", `/openapi/disableRule`, null, $tea.toMap(request), null, runtime), new DisableRuleResponse({}));
  }

  /**
   * Enables the specified rule
   */
  async enableRule(request: EnableRuleRequest): Promise<EnableRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.enableRuleWithOptions(request, runtime);
  }

  /**
   * Enables the specified rule
   */
  async enableRuleWithOptions(request: EnableRuleRequest, runtime: $Util.RuntimeOptions): Promise<EnableRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<EnableRuleResponse>(await this.doRequest("enableRule", "HTTP", "POST", `/openapi/enableRule`, null, $tea.toMap(request), null, runtime), new EnableRuleResponse({}));
  }

  /**
   * Update event streaming procss
   */
  async updateEventStreaming(request: UpdateEventStreamingRequest): Promise<UpdateEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.updateEventStreamingWithOptions(request, runtime);
  }

  /**
   * create event streaming
   */
  async updateEventStreamingWithOptions(request: UpdateEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<UpdateEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<UpdateEventStreamingResponse>(await this.doRequest("updateEventStreaming", "HTTP", "POST", `/openapi/v2/updateEventStreaming`, null, $tea.toMap(request), null, runtime), new UpdateEventStreamingResponse({}));
  }

  /**
   * create event streaming
   */
  async startEventStreaming(request: StartEventStreamingRequest): Promise<StartEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.startEventStreamingsWithOptions(request, runtime);
  }

  /**
   * create event streaming
   */
  async startEventStreamingsWithOptions(request: StartEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<StartEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<StartEventStreamingResponse>(await this.doRequest("startEventStreaming", "HTTP", "POST", `/openapi/v2/startEventStreaming`, null, $tea.toMap(request), null, runtime), new StartEventStreamingResponse({}));
  }

  /**
   * delete event streaming
   */
  async pauseEventStreaming(request: PauseEventStreamingRequest): Promise<PauseEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.pauseEventStreamingWithOptions(request, runtime);
  }

  /**
   * delete event streaming
   */
  async pauseEventStreamingWithOptions(request: PauseEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<PauseEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<PauseEventStreamingResponse>(await this.doRequest("startEventStreaming", "HTTP", "POST", `/openapi/v2/pauseEventStreaming`, null, $tea.toMap(request), null, runtime), new PauseEventStreamingResponse({}));
  }

  /**
   * create event streaming
   */
  async listEventStreamings(request: listEventStreamingsRequest): Promise<listEventStreamingsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listEventStreamingsWithOptions(request, runtime);
  }

  /**
   * create event streaming
   */
  async listEventStreamingsWithOptions(request: listEventStreamingsRequest, runtime: $Util.RuntimeOptions): Promise<listEventStreamingsResponse> {
    Util.validateModel(request);
    return $tea.cast<listEventStreamingsResponse>(await this.doRequest("listEventStreamings", "HTTP", "POST", `/openapi/v2/listEventStreamings`, null, $tea.toMap(request), null, runtime), new listEventStreamingsResponse({}));
  }

  /**
   * Create event streaming procss
   */
  async createEventStreaming(request: CreateEventStreamingRequest): Promise<CreateEventStreamingResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.createEventStreamingWithOptions(request, runtime);
  }

  /**
   * Create event streaming procss
   */
  async createEventStreamingWithOptions(request: CreateEventStreamingRequest, runtime: $Util.RuntimeOptions): Promise<CreateEventStreamingResponse> {
    Util.validateModel(request);
    return $tea.cast<CreateEventStreamingResponse>(await this.doRequest("createEventStreaming", "HTTP", "POST", `/openapi/v2/createEventStreaming`, null, $tea.toMap(request), null, runtime), new CreateEventStreamingResponse({}));
  }

  /**
   * Creates a new event source within your account
   */
  async createEventSource(request: CreateEventSourceRequest): Promise<CreateEventSourceResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.createEventSourceWithOptions(request, runtime);
  }

  /**
   * Creates a new event source within your account
   */
  async createEventSourceWithOptions(request: CreateEventSourceRequest, runtime: $Util.RuntimeOptions): Promise<CreateEventSourceResponse> {
    Util.validateModel(request);
    return $tea.cast<CreateEventSourceResponse>(await this.doRequest("createEventSource", "HTTP", "POST", `/openapi/v2/createEventSource`, null, $tea.toMap(request), null, runtime), new CreateEventSourceResponse({}));
  }

  /**
   * Delete the event source
   */
  async deleteEventSource(request: DeleteEventSourceRequest): Promise<DeleteEventSourceResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.deleteEventSourceWithOptions(request, runtime);
  }

  /**
   * Delete the event source
   */
  async deleteEventSourceWithOptions(request: DeleteEventSourceRequest, runtime: $Util.RuntimeOptions): Promise<DeleteEventSourceResponse> {
    Util.validateModel(request);
    return $tea.cast<DeleteEventSourceResponse>(await this.doRequest("deleteEventSource", "HTTP", "POST", `/openapi/v2/deleteEventSource`, null, $tea.toMap(request), null, runtime), new DeleteEventSourceResponse({}));
  }

  /**
   * Update the event source
   */
  async updateEventSource(request: UpdateEventSourceRequest): Promise<UpdateEventSourceResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.updateEventSourceWithOptions(request, runtime);
  }

  /**
   * Update the event source
   */
  async updateEventSourceWithOptions(request: UpdateEventSourceRequest, runtime: $Util.RuntimeOptions): Promise<UpdateEventSourceResponse> {
    Util.validateModel(request);
    return $tea.cast<UpdateEventSourceResponse>(await this.doRequest("updateEventSource", "HTTP", "POST", `/openapi/v2/updateEventSource`, null, $tea.toMap(request), null, runtime), new UpdateEventSourceResponse({}));
  }

  /**
   * Describes the specified rule
   */
  async getRule(request: GetRuleRequest): Promise<GetRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.getRuleWithOptions(request, runtime);
  }

  /**
   * Describes the specified rule
   */
  async getRuleWithOptions(request: GetRuleRequest, runtime: $Util.RuntimeOptions): Promise<GetRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<GetRuleResponse>(await this.doRequest("getRule", "HTTP", "POST", `/openapi/getRule`, null, $tea.toMap(request), null, runtime), new GetRuleResponse({}));
  }

  /**
   * List all the rules which meet the search criteria
   */
  async listRules(request: ListRulesRequest): Promise<ListRulesResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listRulesWithOptions(request, runtime);
  }

  /**
   * List all the rules which meet the search criteria
   */
  async listRulesWithOptions(request: ListRulesRequest, runtime: $Util.RuntimeOptions): Promise<ListRulesResponse> {
    Util.validateModel(request);
    return $tea.cast<ListRulesResponse>(await this.doRequest("listRules", "HTTP", "POST", `/openapi/listRules`, null, $tea.toMap(request), null, runtime), new ListRulesResponse({}));
  }

  /**
   * update the specified rule.
   */
  async updateRule(request: UpdateRuleRequest): Promise<UpdateRuleResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.updateRuleWithOptions(request, runtime);
  }

  /**
   * update the specified rule.
   */
  async updateRuleWithOptions(request: UpdateRuleRequest, runtime: $Util.RuntimeOptions): Promise<UpdateRuleResponse> {
    Util.validateModel(request);
    return $tea.cast<UpdateRuleResponse>(await this.doRequest("updateRule", "HTTP", "POST", `/openapi/updateRule`, null, $tea.toMap(request), null, runtime), new UpdateRuleResponse({}));
  }

  /**
   * Adds the specified targets to the specified rule
   */
  async createTargets(request: CreateTargetsRequest): Promise<CreateTargetsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.createTargetsWithOptions(request, runtime);
  }

  /**
   * Adds the specified targets to the specified rule
   */
  async createTargetsWithOptions(request: CreateTargetsRequest, runtime: $Util.RuntimeOptions): Promise<CreateTargetsResponse> {
    Util.validateModel(request);
    return $tea.cast<CreateTargetsResponse>(await this.doRequest("createTargets", "HTTP", "POST", `/openapi/createTargets`, null, $tea.toMap(request), null, runtime), new CreateTargetsResponse({}));
  }

  /**
   * Delete the specified targets from the specified rule
   */
  async deleteTargets(request: DeleteTargetsRequest): Promise<DeleteTargetsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.deleteTargetsWithOptions(request, runtime);
  }

  /**
   * Delete the specified targets from the specified rule
   */
  async deleteTargetsWithOptions(request: DeleteTargetsRequest, runtime: $Util.RuntimeOptions): Promise<DeleteTargetsResponse> {
    Util.validateModel(request);
    return $tea.cast<DeleteTargetsResponse>(await this.doRequest("deleteTargets", "HTTP", "POST", `/openapi/deleteTargets`, null, $tea.toMap(request), null, runtime), new DeleteTargetsResponse({}));
  }

  /**
   * List all the Targets which meet the search criteria
   */
  async listTargets(request: ListTargetsRequest): Promise<ListTargetsResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.listTargetsWithOptions(request, runtime);
  }

  /**
   * List all the Targets which meet the search criteria
   */
  async listTargetsWithOptions(request: ListTargetsRequest, runtime: $Util.RuntimeOptions): Promise<ListTargetsResponse> {
    Util.validateModel(request);
    return $tea.cast<ListTargetsResponse>(await this.doRequest("listTargets", "HTTP", "POST", `/openapi/listTargets`, null, $tea.toMap(request), null, runtime), new ListTargetsResponse({}));
  }

  /**
   * Tests whether the specified event pattern matches the provided event
   */
  async testEventPattern(request: TestEventPatternRequest): Promise<TestEventPatternResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.testEventPatternWithOptions(request, runtime);
  }

  /**
   * Tests whether the specified event pattern matches the provided event
   */
  async testEventPatternWithOptions(request: TestEventPatternRequest, runtime: $Util.RuntimeOptions): Promise<TestEventPatternResponse> {
    Util.validateModel(request);
    return $tea.cast<TestEventPatternResponse>(await this.doRequest("testEventPattern", "HTTP", "POST", `/openapi/testEventPattern`, null, $tea.toMap(request), null, runtime), new TestEventPatternResponse({}));
  }

  /**
   * Check the activation status of EventBridge service for a given user
   */
  async queryEventBridgeStatus(request: QueryEventBridgeStatusRequest): Promise<QueryEventBridgeStatusResponse> {
    let runtime = new $Util.RuntimeOptions({ });
    return await this.queryEventBridgeStatusWithOptions(request, runtime);
  }

  /**
   * Check the activation status of EventBridge service for a given user
   */
  async queryEventBridgeStatusWithOptions(request: QueryEventBridgeStatusRequest, runtime: $Util.RuntimeOptions): Promise<QueryEventBridgeStatusResponse> {
    Util.validateModel(request);
    return $tea.cast<QueryEventBridgeStatusResponse>(await this.doRequest("queryEventBridgeStatus", "HTTP", "POST", `/openapi/queryEventBridgeStatus`, null, $tea.toMap(request), null, runtime), new QueryEventBridgeStatusResponse({}));
  }

}
