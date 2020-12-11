// This file is auto-generated, don't edit it
import EventBridge, * as $EventBridge from '@alicloud/eventbridge';
import Util from '@alicloud/tea-util';
import Console from '@alicloud/tea-console';
import * as $tea from '@alicloud/tea-typescript';


export default class Client {

  /**
  * Create client  初始化公共请求参数
  */
  static async createClient(): Promise<EventBridge> {
    let config = new $EventBridge.Config({ });
    // AccessKey ID
    config.accessKeyId = "<accessKeyId>";
    // AccessKey Secret
    config.accessKeySecret = "<accessKeySecret>";
    // 接入点
    config.endpoint = "<endpoint>";
    return new EventBridge(config);
  }

  static async createEventBusSample(client: EventBridge): Promise<void> {
    try {
      let createEventBusRequest = new $EventBridge.CreateEventBusRequest({ });
      createEventBusRequest.eventBusName = "demo-bus";
      let resp = await client.createEventBus(createEventBusRequest);
      Console.log("--------------------Create bus success --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async deleteEventBusSample(client: EventBridge): Promise<void> {
    try {
      //delete
      let deleteEventBusRequest = new $EventBridge.DeleteEventBusRequest({ });
      deleteEventBusRequest.eventBusName = "demo-bus";
      let resp = await client.deleteEventBus(deleteEventBusRequest);
      Console.log("--------------------Delete bus success --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async getEventBusSample(client: EventBridge): Promise<void> {
    try {
      let getEventBusRequest = new $EventBridge.GetEventBusRequest({ });
      getEventBusRequest.eventBusName = "demo-bus";
      let resp = await client.getEventBus(getEventBusRequest);
      Console.log("--------------------get event bus success --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async listEventBusesSample(client: EventBridge): Promise<void> {
    try {
      let listEventBusesRequest = new $EventBridge.ListEventBusesRequest({ });
      listEventBusesRequest.limit = 100;
      let resp = await client.listEventBuses(listEventBusesRequest);
      Console.log("--------------------list bus success --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async createEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let createEventRuleRequest = new $EventBridge.CreateRuleRequest({ });
      let targetEntry = new $EventBridge.TargetEntry({ });
      targetEntry.id = "dingtalk.target";
      targetEntry.endpoint = "https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460";
      targetEntry.type = "acs.dingtalk";
      let param1 = new $EventBridge.EBTargetParam({ });
      param1.resourceKey = "URL";
      param1.form = "CONSTANT";
      param1.value = "https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460";
      let param2 = new $EventBridge.EBTargetParam({ });
      param2.resourceKey = "SecretKey";
      param2.form = "CONSTANT";
      param2.value = "SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234";
      let param3 = new $EventBridge.EBTargetParam({ });
      param3.resourceKey = "Body";
      param3.form = "TEMPLATE";
      param3.value = `{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}`;
      param3.template = "{\"msgtype\": \"text\",\"text\": {\"content\": \"Hello：${key}\"}}";
      let paramList = [
        param1,
        param2,
        param3
      ];
      targetEntry.paramList = paramList;
      let targetEntryList = [
        targetEntry
      ];
      createEventRuleRequest.targets = targetEntryList;
      createEventRuleRequest.ruleName = "myRule";
      createEventRuleRequest.eventBusName = "demo-bus";
      createEventRuleRequest.filterPattern = `{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}`;
      createEventRuleRequest.status = "enable";
      let resp = await client.createRule(createEventRuleRequest);
      Console.log("--------------------create rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async deleteEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let deleteRuleRequest = new $EventBridge.DeleteRuleRequest({ });
      deleteRuleRequest.ruleName = "myRule";
      deleteRuleRequest.eventBusName = "demo-bus";
      let resp = await client.deleteRule(deleteRuleRequest);
      Console.log("--------------------delete rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async enableEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let enableEventRuleRequest = new $EventBridge.EnableRuleRequest({ });
      enableEventRuleRequest.ruleName = "myRule";
      enableEventRuleRequest.eventBusName = "demo-bus";
      let resp = await client.enableRule(enableEventRuleRequest);
      Console.log("--------------------enable rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async disableEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let disableEventRuleRequest = new $EventBridge.DisableRuleRequest({ });
      disableEventRuleRequest.ruleName = "myRule";
      disableEventRuleRequest.eventBusName = "demo-bus";
      let resp = await client.disableRule(disableEventRuleRequest);
      Console.log("--------------------disable rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async getEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let getEventRuleRequest = new $EventBridge.GetRuleRequest({ });
      getEventRuleRequest.ruleName = "myRule";
      getEventRuleRequest.eventBusName = "demo-bus";
      let resp = await client.getRule(getEventRuleRequest);
      Console.log("--------------------get rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async listEventRulesSample(client: EventBridge): Promise<void> {
    try {
      let listEventRulesRequest = new $EventBridge.ListRulesRequest({ });
      listEventRulesRequest.eventBusName = "demo-bus";
      let resp = await client.listRules(listEventRulesRequest);
      Console.log("--------------------listRules rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async updateEventRuleSample(client: EventBridge): Promise<void> {
    try {
      let updateEventRuleRequest = new $EventBridge.UpdateRuleRequest({ });
      updateEventRuleRequest.eventBusName = "demo-bus";
      updateEventRuleRequest.ruleName = "myRule";
      updateEventRuleRequest.filterPattern = `{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}`;
      let resp = await client.updateRule(updateEventRuleRequest);
      Console.log("--------------------update rule success--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async testEventPattern_False(client: EventBridge): Promise<void> {
    try {
      let request = new $EventBridge.TestEventPatternRequest({ });
      let pattern = `{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [1]\n    }\n}`;
      let jsonData = `{
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
}`;
      request.event = jsonData;
      request.eventPattern = pattern;
      let resp = await client.testEventPattern(request);
      Console.log("--------------------test event pattern --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async testEventPattern_True(client: EventBridge): Promise<void> {
    try {
      let request = new $EventBridge.TestEventPatternRequest({ });
      let pattern = `{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [2]\n    }\n}`;
      let jsonData = `{
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
}`;
      request.event = jsonData;
      request.eventPattern = pattern;
      let resp = await client.testEventPattern(request);
      Console.log("--------------------test event pattern --------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async createTargetsSample(client: EventBridge): Promise<void> {
    try {
      let createTargetsRequest = new $EventBridge.CreateTargetsRequest({ });
      createTargetsRequest.eventBusName = "demo-bus";
      createTargetsRequest.ruleName = "myRule";
      let targetEntry = new $EventBridge.TargetEntry({ });
      targetEntry.id = "1234";
      targetEntry.endpoint = "http://www.baidu.com";
      let list : $EventBridge.TargetEntry[] = [
        targetEntry
      ];
      createTargetsRequest.targets = list;
      let response = await client.createTargets(createTargetsRequest);
      Console.log("--------------------Create targets success--------------------");
      Console.log(Util.toJSONString($tea.toMap(response)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async removeTargetsSample(client: EventBridge): Promise<void> {
    try {
      let removeTargetsRequest = new $EventBridge.DeleteTargetsRequest({ });
      removeTargetsRequest.eventBusName = "demo-bus";
      removeTargetsRequest.ruleName = "myRule";
      let list = [
        "dingtalk.target"
      ];
      removeTargetsRequest.targetIds = list;
      let response = await client.deleteTargets(removeTargetsRequest);
      Console.log("--------------------remove targets success--------------------");
      Console.log(Util.toJSONString($tea.toMap(response)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async listTargetsSample(client: EventBridge): Promise<void> {
    try {
      let listTargetsRequest = new $EventBridge.ListTargetsRequest({ });
      listTargetsRequest.eventBusName = "demo-bus";
      listTargetsRequest.ruleName = "myRule";
      let response = await client.listTargets(listTargetsRequest);
      Console.log("--------------------list targets success--------------------");
      Console.log(Util.toJSONString($tea.toMap(response)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  /**
  * PutEvents
  */
  static async PutEvents(client: EventBridge): Promise<void> {
    let event = new $EventBridge.CloudEvent({ });
    event.datacontenttype = "application/json";
    event.data = Util.toBytes("test");
    event.id = "a5074581-7e74-4e4c-868f-47e7afdf8445";
    event.source = "acs.oss";
    event.specversion = "1.0";
    event.type = "oss:ObjectCreated:PostObject";
    event.time = "2020-08-24T13:54:05.965Asia/Shanghai";
    event.subject = "1.0";
    event.type = "acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg";
    event.extensions = {
      aliyuneventbusname: "demo-bus",
    };
    try {
      let resp = await client.putEvents([
        event
      ]);
      Console.log("--------------------Publish event to the aliyun EventBus--------------------");
      Console.log(Util.toJSONString($tea.toMap(resp)));
    } catch (error) {
      Console.log(error.message);
    }    
  }

  static async main(args: string[]): Promise<void> {
    let client = await Client.createClient();
    await Client.createEventBusSample(client);
    await Client.PutEvents(client);
    await Client.getEventBusSample(client);
    await Client.listEventBusesSample(client);
    await Client.createEventRuleSample(client);
    await Client.enableEventRuleSample(client);
    await Client.disableEventRuleSample(client);
    await Client.getEventRuleSample(client);
    await Client.listEventRulesSample(client);
    await Client.updateEventRuleSample(client);
    await Client.testEventPattern_False(client);
    await Client.testEventPattern_True(client);
    await Client.createTargetsSample(client);
    await Client.listTargetsSample(client);
    await Client.removeTargetsSample(client);
    await Client.deleteEventRuleSample(client);
    await Client.deleteEventBusSample(client);
  }

}

Client.main(process.argv.slice(2));