// This file is auto-generated, don't edit it. Thanks.
package client

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
	// 您的AccessKey ID
	config.AccessKeyId = tea.String("<accessKeyId>")
	// 您的AccessKey Secret
	config.AccessKeySecret = tea.String("<accessKeySecret>")
	// 您的可用区ID
	config.Endpoint = tea.String("<endpoint>")
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
		createEventBusRequest.EventBusName = tea.String("demo-bus")
		response, _err := client.CreateEventBus(createEventBusRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------Create bus success --------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
		deleteEventBusRequest.EventBusName = tea.String("demo-bus")
		_, _err = client.DeleteEventBus(deleteEventBusRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------Delete bus success --------------------"))

		return nil
	}()

	_err = tryErr
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
		describeEventBusRequest := &eventbridge.GetEventBusRequest{}
		describeEventBusRequest.EventBusName = tea.String("demo-bus")
		deScribeResponse, _err := client.GetEventBus(describeEventBusRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------describe bus success --------------------"))
		console.Log(util.ToJSONString(tea.ToMap(deScribeResponse)))

		return nil
	}()

	_err = tryErr
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

func ListEventBusSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		listEventBusesRequest := &eventbridge.ListEventBusesRequest{}
		listEventBusesRequest.Limit = tea.Int(100)
		response, _err := client.ListEventBuses(listEventBusesRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------list bus success --------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
		targetEntry.Id = tea.String("1234")
		targetEntry.Endpoint = tea.String("http://www.baidu.com")
		targetEntryList := []*eventbridge.TargetEntry{targetEntry}
		//targetEntryList[0] =targetEntry;
		createEventRuleRequest.RuleName = tea.String("myRule3")
		createEventRuleRequest.EventBusName = tea.String("demo-bus")
		createEventRuleRequest.FilterPattern = tea.String("{\"source\":[\"acs.oss\"],\"type\":[\"oss:ObjectCreated:UploadPart\"]}")
		createEventRuleRequest.Status = tea.String("enable")
		createEventRuleRequest.Targets = targetEntryList
		response, _err := client.CreateRule(createEventRuleRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------create rule success--------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
		deleteRuleRequest.RuleName = tea.String("myRule3")
		deleteRuleRequest.EventBusName = tea.String("demo-bus")
		_, _err = client.DeleteRule(deleteRuleRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------delete rule success--------------------"))

		return nil
	}()

	_err = tryErr
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
		enableEventRuleRequest.RuleName = tea.String("myRule3")
		enableEventRuleRequest.EventBusName = tea.String("demo-bus")
		_, _err = client.EnableRule(enableEventRuleRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------enable rule success--------------------"))

		return nil
	}()

	_err = tryErr
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
		disableEventRuleRequest.RuleName = tea.String("myRule3")
		disableEventRuleRequest.EventBusName = tea.String("demo-bus")
		_, _err = client.DisableRule(disableEventRuleRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------disable rule success--------------------"))

		return nil
	}()

	_err = tryErr
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

func DescribeEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		describeEventRuleRequest := &eventbridge.GetRuleRequest{}
		describeEventRuleRequest.RuleName = tea.String("myRule3")
		describeEventRuleRequest.EventBusName = tea.String("demo-bus")
		_, _err = client.GetRule(describeEventRuleRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------describe rule success--------------------"))

		return nil
	}()

	_err = tryErr
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

func ListEventRuleSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		listEventRulesRequest := &eventbridge.ListRulesRequest{}
		listEventRulesRequest.EventBusName = tea.String("demo-bus")
		client.ListRules(listEventRulesRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------listRules rule success--------------------"))

		return nil
	}()

	_err = tryErr
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
		updateEventRuleRequest.EventBusName = tea.String("demo-bus")
		updateEventRuleRequest.RuleName = tea.String("myRule3")
		updateEventRuleRequest.FilterPattern = tea.String("{\"source\":[\"acs.oss\"],\"type\":[\"oss:BucketQueried:GetBucketStat\"]}")
		_, _err = client.UpdateRule(updateEventRuleRequest)
		if _err != nil {
			return _err
		}
		console.Log(tea.String("--------------------update rule success--------------------"))

		return nil
	}()

	_err = tryErr
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
		pattern := tea.String("{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [1]\n" + "    }\n" + "}")
		jsonData := tea.String("{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
			"        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n" +
			"        \"dataschema\":\"http://taobao.com/test.json\",\n" +
			"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
			"        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
			"            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}")
		request.Event = jsonData
		request.EventPattern = pattern
		testEventPatternResponse, _err := client.TestEventPattern(request)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------test event pattern --------------------"))
		console.Log(util.ToJSONString(tea.ToMap(testEventPatternResponse)))

		return nil
	}()

	_err = tryErr
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
		pattern := tea.String("{\n" + "    \"source\": [\"acs.oss\"],\n" + "    \"data\": {\n" + "      \"b\": [2]\n" + "    }\n" + "}")
		jsonData := tea.String("{\n" + "        \"id\":\"51efe8e2-841f-4900-8ff5-3c6dfae1060e\",\n" +
			"        \"source\":\"acs.oss\",\n" + "        \"type\":\"oss:ObjectCreated:PostObject\",\n" +
			"        \"dataschema\":\"http://taobao.com/test.json\",\n" +
			"        \"subject\":\"acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg\",\n" +
			"        \"aliyuneventbusname\":\"demo-bus\",\n" + "        \"data\":{\n" +
			"            \"a\":\"test\",\n" + "            \"b\":1\n" + "        }\n" + "}")
		request.Event = jsonData
		request.EventPattern = pattern
		testEventPatternResponse, _err := client.TestEventPattern(request)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------test event pattern --------------------"))
		console.Log(util.ToJSONString(tea.ToMap(testEventPatternResponse)))

		return nil
	}()

	_err = tryErr
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

func AddTargetsSample(client *eventbridge.Client) (_err error) {
	tryErr := func() (_e error) {
		defer func() {
			if r := tea.Recover(recover()); r != nil {
				_e = r
			}
		}()
		addTargetsRequest := &eventbridge.CreateTargetsRequest{}
		addTargetsRequest.EventBusName = tea.String("demo-bus")
		addTargetsRequest.RuleName = tea.String("myRule3")
		targetEntry := &eventbridge.TargetEntry{}
		targetEntry.Id = tea.String("1234")
		targetEntry.Endpoint = tea.String("http://www.baidu.com")
		list := []*eventbridge.TargetEntry{targetEntry}
		addTargetsRequest.Targets = list
		response, _err := client.CreateTargets(addTargetsRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------Add targets success--------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
		removeTargetsResponse := &eventbridge.DeleteTargetsRequest{}
		removeTargetsResponse.EventBusName = tea.String("demo-bus")
		removeTargetsResponse.RuleName = tea.String("myRule3")
		list := []*string{tea.String("1234")}
		removeTargetsResponse.TargetIds = list
		response, _err := client.DeleteTargets(removeTargetsResponse)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------remove targets success--------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
		listTargetsRequest.EventBusName = tea.String("demo-bus")
		listTargetsRequest.RuleName = tea.String("myRule3")
		response, _err := client.ListTargets(listTargetsRequest)
		if _err != nil {
			return _err
		}

		console.Log(tea.String("--------------------list targets success--------------------"))
		console.Log(util.ToJSONString(tea.ToMap(response)))

		return nil
	}()

	_err = tryErr
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
	event.Datacontenttype = tea.String("application/json")
	event.Data = util.ToBytes(tea.String("test"))
	event.Id = tea.String("a5074581-7e74-4e4c-868f-47e7afdf8445")
	event.Source = tea.String("acs.oss")
	event.Specversion = tea.String("1.0")
	event.Type = tea.String("oss:ObjectCreated:PostObject")
	event.Time = tea.String("2020-08-24T13:54:05.965Asia/Shanghai")
	event.Subject = tea.String("1.0")
	event.Type = tea.String("acs:oss:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg")
	event.Extensions = map[string]interface{}{
		"aliyuneventbusname": "demo-bus",
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

		console.Log(tea.String("--------------------Publish event to the aliyun EventBus--------------------"))
		console.Log(util.ToJSONString(tea.ToMap(resp)))

		return nil
	}()

	_err = tryErr
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

func Main(args []*string) (_err error) {
	client, _err := CreateClient()
	if _err != nil {
		return _err
	}

	_err = CreateEventBusSample(client)
	if _err != nil {
		return _err
	}
	_err = PutEvents(client)
	if _err != nil {
		return _err
	}
	_err = GetEventBusSample(client)
	if _err != nil {
		return _err
	}
	_err = ListEventBusSample(client)
	if _err != nil {
		return _err
	}
	_err = CreateEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = EnableEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = DisableEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = DescribeEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = ListEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = UpdateEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = TestEventPattern_False(client)
	if _err != nil {
		return _err
	}
	_err = TestEventPattern_True(client)
	if _err != nil {
		return _err
	}
	_err = AddTargetsSample(client)
	if _err != nil {
		return _err
	}
	_err = ListTargetsSample(client)
	if _err != nil {
		return _err
	}
	_err = RemoveTargetsSample(client)
	if _err != nil {
		return _err
	}
	_err = DeleteEventRuleSample(client)
	if _err != nil {
		return _err
	}
	_err = DeleteEventBusSample(client)
	if _err != nil {
		return _err
	}
	return _err
}
