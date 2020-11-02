// This file is auto-generated, don't edit it. Thanks.
package main

import (
	eventbridge "github.com/alibabacloud-go/eventbridge-sdk/eventbridge"
	console "github.com/alibabacloud-go/tea-console/client"
	util "github.com/alibabacloud-go/tea-utils/service"
	"github.com/alibabacloud-go/tea/tea"
)

/**
* Create client  初始化公共请求参数
 */
func CreateClient() (_result *eventbridge.Client, _err error) {
	config := &eventbridge.Config{}
	// AccessKey ID
	config.AccessKeyId = tea.String(`<accessKeyId>`)
	// AccessKey Secret
	config.AccessKeySecret = tea.String(`<accessKeySecret>`)
	// 接入点
	config.Endpoint = tea.String(`<endpoint>`)
	_result = &eventbridge.Client{}
	_result, _err = eventbridge.NewClient(config)
	return _result, _err
}

func CreateEventBusSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		createEventBusRequest := &eventbridge.CreateEventBusRequest{}
		createEventBusRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.CreateEventBus(createEventBusRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------Create bus success --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func DeleteEventBusSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		//delete
		deleteEventBusRequest := &eventbridge.DeleteEventBusRequest{}
		deleteEventBusRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.DeleteEventBus(deleteEventBusRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------Delete bus success --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func GetEventBusSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		getEventBusRequest := &eventbridge.GetEventBusRequest{}
		getEventBusRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.GetEventBus(getEventBusRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------get event bus success --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func ListEventBusesSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		listEventBusesRequest := &eventbridge.ListEventBusesRequest{}
		listEventBusesRequest.Limit = tea.Int(100)
		resp, _err := client.ListEventBuses(listEventBusesRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------list bus success --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func CreateEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		createEventRuleRequest := &eventbridge.CreateRuleRequest{}
		targetEntry := &eventbridge.TargetEntry{}
		targetEntry.Id = tea.String(`dingtalk.target`)
		targetEntry.Endpoint = tea.String(`https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460`)
		targetEntry.Type = tea.String(`acs.dingtalk`)
		param1 := &eventbridge.EBTargetParam{}
		param1.ResourceKey = tea.String(`URL`)
		param1.Form = tea.String(`CONSTANT`)
		param1.Value = tea.String(`https://oapi.dingtalk.com/robot/send?access_token=1019d4a19e2ef6b2f***********396fc5e94814ed8460`)
		param2 := &eventbridge.EBTargetParam{}
		param2.ResourceKey = tea.String(`SecretKey`)
		param2.Form = tea.String(`CONSTANT`)
		param2.Value = tea.String(`SEC121a71ff304a65b4f7c**************1f4d9f6c1ca514300d15234`)
		param3 := &eventbridge.EBTargetParam{}
		param3.ResourceKey = tea.String(`Body`)
		param3.Form = tea.String(`TEMPLATE`)
		param3.Value = tea.String("{\n    \"key\":\"$.source\",\n    \"value\":\"$.data\"\n}")
		param3.Template = tea.String(`{"msgtype": "text","text": {"content": "Hello：${key}"}}`)
		paramList := []*eventbridge.EBTargetParam{param1, param2, param3}
		targetEntry.ParamList = paramList
		targetEntryList := []*eventbridge.TargetEntry{targetEntry}
		createEventRuleRequest.Targets = targetEntryList
		createEventRuleRequest.RuleName = tea.String(`myRule`)
		createEventRuleRequest.EventBusName = tea.String(`demo-bus`)
		createEventRuleRequest.FilterPattern = tea.String("{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}")
		createEventRuleRequest.Status = tea.String(`enable`)
		resp, _err := client.CreateRule(createEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------create rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func DeleteEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		deleteRuleRequest := &eventbridge.DeleteRuleRequest{}
		deleteRuleRequest.RuleName = tea.String(`myRule`)
		deleteRuleRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.DeleteRule(deleteRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------delete rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func EnableEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		enableEventRuleRequest := &eventbridge.EnableRuleRequest{}
		enableEventRuleRequest.RuleName = tea.String(`myRule`)
		enableEventRuleRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.EnableRule(enableEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------enable rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func DisableEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		disableEventRuleRequest := &eventbridge.DisableRuleRequest{}
		disableEventRuleRequest.RuleName = tea.String(`myRule`)
		disableEventRuleRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.DisableRule(disableEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------disable rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func GetEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		getEventRuleRequest := &eventbridge.GetRuleRequest{}
		getEventRuleRequest.RuleName = tea.String(`myRule`)
		getEventRuleRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.GetRule(getEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------get rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func ListEventRulesSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		listEventRulesRequest := &eventbridge.ListRulesRequest{}
		listEventRulesRequest.EventBusName = tea.String(`demo-bus`)
		resp, _err := client.ListRules(listEventRulesRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------listRules rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func UpdateEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		updateEventRuleRequest := &eventbridge.UpdateRuleRequest{}
		updateEventRuleRequest.EventBusName = tea.String(`demo-bus`)
		updateEventRuleRequest.RuleName = tea.String(`myRule`)
		updateEventRuleRequest.FilterPattern = tea.String("{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}")
		resp, _err := client.UpdateRule(updateEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------update rule success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func TestEventPattern_False(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		request := &eventbridge.TestEventPatternRequest{}
		pattern := tea.String("{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [1]\n    }\n}")
		jsonData := tea.String("{" +
			"        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\"," +
			"        \"source\":\"acs.oss\"," +
			"        \"type\":\"oss:ObjectCreated:PostObject\"," +
			"        \"dataschema\":\"http://taobao.com/test.json\"," +
			"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\"," +
			"        \"aliyuneventbusname\":\"demo-bus\"," +
			"        \"data\":{" +
			"            \"a\":\"test\"," +
			"            \"b\":1" +
			"        }" +
			"}")
		request.Event = jsonData
		request.EventPattern = pattern
		resp, _err := client.TestEventPattern(request)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------test event pattern --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func TestEventPattern_True(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		request := &eventbridge.TestEventPatternRequest{}
		pattern := tea.String("{\n    \"source\": [\"acs.oss\"],\n    \"data\": {\n      \"b\": [2]\n" + "    }\n}")
		jsonData := tea.String("{" +
			"        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\"," +
			"        \"source\":\"acs.oss\",        " +
			"        \"type\":\"oss:ObjectCreated:PostObject\"," +
			"        \"dataschema\":\"http://taobao.com/test.json\"," +
			"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\"," +
			"        \"aliyuneventbusname\":\"demo-bus\"," +
			"        \"data\":{" +
			"            \"a\":\"test\"," +
			"            \"b\":1" +
			"        }" +
			"}")
		request.Event = jsonData
		request.EventPattern = pattern
		resp, _err := client.TestEventPattern(request)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------test event pattern --------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func CreateTargetsSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		createTargetsRequest := &eventbridge.CreateTargetsRequest{}
		createTargetsRequest.EventBusName = tea.String(`demo-bus`)
		createTargetsRequest.RuleName = tea.String(`myRule`)
		targetEntry := &eventbridge.TargetEntry{}
		targetEntry.Id = tea.String(`1234`)
		targetEntry.Endpoint = tea.String(`http://www.baidu.com`)
		list := []*eventbridge.TargetEntry{targetEntry}
		createTargetsRequest.Targets = list
		response, _err := client.CreateTargets(createTargetsRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------Create targets success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func RemoveTargetsSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		removeTargetsRequest := &eventbridge.DeleteTargetsRequest{}
		removeTargetsRequest.EventBusName = tea.String(`demo-bus`)
		removeTargetsRequest.RuleName = tea.String(`myRule`)
		list := []*string{tea.String(`dingtalk.target`)}
		removeTargetsRequest.TargetIds = list
		response, _err := client.DeleteTargets(removeTargetsRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------remove targets success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func ListTargetsSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		listTargetsRequest := &eventbridge.ListTargetsRequest{}
		listTargetsRequest.EventBusName = tea.String(`demo-bus`)
		listTargetsRequest.RuleName = tea.String(`myRule`)
		response, _err := client.ListTargets(listTargetsRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------list targets success--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

/**
* PutEvents
 */
func PutEvents(client *eventbridge.Client) (_err error) {
	event := &eventbridge.CloudEvent{}
	event.Datacontenttype = tea.String(`application/json`)
	event.Data = util.ToBytes(tea.String(`test`))
	event.Id = tea.String(`a5074581-7e74-4e4c-868f-47e7afdf8445`)
	event.Source = tea.String(`acs.oss`)
	event.Specversion = tea.String(`1.0`)
	event.Type = tea.String(`oss:ObjectCreated:PostObject`)
	event.Time = tea.String(`2020-08-24T13:54:05.965Asia/Shanghai`)
	event.Subject = tea.String(`1.0`)
	event.Type = tea.String(`acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg`)
	event.Extensions = map[string]interface{}{
		"aliyuneventbusname": `demo-bus`,
	}
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		resp, _err := client.PutEvents([]*eventbridge.CloudEvent{event})
		if _err != nil {
			return _err
		}

		console.Log(tea.String(`--------------------Publish event to the aliyun EventBus--------------------`))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	if tryErr != nil {
		var error = &tea.SDKError{}
		if _t, ok := tryErr.(*tea.SDKError); ok {
			error = _t
		} else {
			error.SetErrMsg(tryErr.Error())
		}
		console.Log(error.Message)
	}
	return _err
}

func main() {
	client, _err := CreateClient()
	if _err != nil {
		panic(_err)
	}

	_err = CreateEventBusSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = PutEvents(client)
	if _err != nil {
		panic(_err)
	}
	_err = GetEventBusSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = ListEventBusesSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = CreateEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = EnableEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = DisableEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = GetEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = ListEventRulesSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = UpdateEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = TestEventPattern_False(client)
	if _err != nil {
		panic(_err)
	}
	_err = TestEventPattern_True(client)
	if _err != nil {
		panic(_err)
	}
	_err = CreateTargetsSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = ListTargetsSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = RemoveTargetsSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = DeleteEventRuleSample(client)
	if _err != nil {
		panic(_err)
	}
	_err = DeleteEventBusSample(client)
	if _err != nil {
		panic(_err)
	}
}
