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
  tags?: { [key: string]: string };
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      description: 'Description',
      tags: 'Tags',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      description: 'string',
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
  static names(): { [key: string]: string } {
    return {
      requestId: 'RequestId',
      resourceOwnerAccountId: 'ResourceOwnerAccountId',
      eventBusARN: 'EventBusARN',
      eventBusName: 'EventBusName',
      description: 'Description',
      createTimestamp: 'CreateTimestamp',
      tags: 'Tags',
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
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      eventBusARN: 'EventBusARN',
      description: 'Description',
      createTimestamp: 'CreateTimestamp',
      tags: 'Tags',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      eventBusARN: 'string',
      description: 'string',
      createTimestamp: 'number',
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      description: 'Description',
      ruleName: 'RuleName',
      status: 'Status',
      filterPattern: 'FilterPattern',
      targets: 'Targets',
      tags: 'Tags',
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
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
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
      tags: 'Tags',
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
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
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
      tags: 'Tags',
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
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  tags?: { [key: string]: string };
  static names(): { [key: string]: string } {
    return {
      eventBusName: 'EventBusName',
      ruleName: 'RuleName',
      description: 'Description',
      status: 'Status',
      filterPattern: 'FilterPattern',
      tags: 'Tags',
    };
  }

  static types(): { [key: string]: any } {
    return {
      eventBusName: 'string',
      ruleName: 'string',
      description: 'string',
      status: 'string',
      filterPattern: 'string',
      tags: { 'type': 'map', 'keyType': 'string', 'valueType': 'string' },
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
  async doRequest(action: string, protocol: string, method: string, pathname: string, query: {[key: string ]: string}, body: any, runtime: $Util.RuntimeOptions): Promise<{[key: string]: any}> {
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
          'user-agent': Util.getUserAgent(" aliyun-eventbridge-sdk/1.2.0"),
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
            message: `[EventBridgeError-${tmp["requestId"]}] ${tmp["message"]}`,
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
    return $tea.cast<PutEventsResponse>(await this.doRequest("putEvents", "HTTP", "POST", `/openapi/putEvents`, null, body, runtime), new PutEventsResponse({}));
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
    return $tea.cast<CreateEventBusResponse>(await this.doRequest("createEventBus", "HTTP", "POST", `/openapi/createEventBus`, null, $tea.toMap(request), runtime), new CreateEventBusResponse({}));
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
    return $tea.cast<DeleteEventBusResponse>(await this.doRequest("deleteEventBus", "HTTP", "POST", `/openapi/deleteEventBus`, null, $tea.toMap(request), runtime), new DeleteEventBusResponse({}));
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
    return $tea.cast<GetEventBusResponse>(await this.doRequest("getEventBus", "HTTP", "POST", `/openapi/getEventBus`, null, $tea.toMap(request), runtime), new GetEventBusResponse({}));
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
    return $tea.cast<ListEventBusesResponse>(await this.doRequest("listEventBuses", "HTTP", "POST", `/openapi/listEventBuses`, null, $tea.toMap(request), runtime), new ListEventBusesResponse({}));
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
    return $tea.cast<CreateRuleResponse>(await this.doRequest("createRule", "HTTP", "POST", `/openapi/createRule`, null, $tea.toMap(request), runtime), new CreateRuleResponse({}));
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
    return $tea.cast<DeleteRuleResponse>(await this.doRequest("deleteRule", "HTTP", "POST", `/openapi/deleteRule`, null, $tea.toMap(request), runtime), new DeleteRuleResponse({}));
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
    return $tea.cast<DisableRuleResponse>(await this.doRequest("disableRule", "HTTP", "POST", `/openapi/disableRule`, null, $tea.toMap(request), runtime), new DisableRuleResponse({}));
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
    return $tea.cast<EnableRuleResponse>(await this.doRequest("enableRule", "HTTP", "POST", `/openapi/enableRule`, null, $tea.toMap(request), runtime), new EnableRuleResponse({}));
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
    return $tea.cast<GetRuleResponse>(await this.doRequest("getRule", "HTTP", "POST", `/openapi/getRule`, null, $tea.toMap(request), runtime), new GetRuleResponse({}));
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
    return $tea.cast<ListRulesResponse>(await this.doRequest("listRules", "HTTP", "POST", `/openapi/listRules`, null, $tea.toMap(request), runtime), new ListRulesResponse({}));
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
    return $tea.cast<UpdateRuleResponse>(await this.doRequest("updateRule", "HTTP", "POST", `/openapi/updateRule`, null, $tea.toMap(request), runtime), new UpdateRuleResponse({}));
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
    return $tea.cast<CreateTargetsResponse>(await this.doRequest("createTargets", "HTTP", "POST", `/openapi/createTargets`, null, $tea.toMap(request), runtime), new CreateTargetsResponse({}));
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
    return $tea.cast<DeleteTargetsResponse>(await this.doRequest("deleteTargets", "HTTP", "POST", `/openapi/deleteTargets`, null, $tea.toMap(request), runtime), new DeleteTargetsResponse({}));
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
    return $tea.cast<ListTargetsResponse>(await this.doRequest("listTargets", "HTTP", "POST", `/openapi/listTargets`, null, $tea.toMap(request), runtime), new ListTargetsResponse({}));
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
    return $tea.cast<TestEventPatternResponse>(await this.doRequest("testEventPattern", "HTTP", "POST", `/openapi/testEventPattern`, null, $tea.toMap(request), runtime), new TestEventPatternResponse({}));
  }

}
