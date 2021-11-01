package eventbridge

import (
	"fmt"
	"testing"

	"github.com/alibabacloud-go/tea/tea"
	kvcache "gitlab.alibaba-inc.com/alicloud-sdk/EventBridge-helper/golang/util"
)

func CreateClient() (_result *Client, _err error) {
	config := &Config{}
	// AccessKey ID
	config.AccessKeyId = tea.String(`LTAI4G3Qaw8Mqso8tRav5L4r`)
	// AccessKey Secret
	config.AccessKeySecret = tea.String(`p70NUtvf7BzCl1Q4PNXVP7P4w3BU6B`)
	// 接入点
	config.Endpoint = tea.String(`eventbridge.cn-hangzhou.aliyuncs.com`)
	_result, _err = NewClient(config)
	return _result, _err
}

func Test_api(t *testing.T) {
	client, err := CreateClient()
	fmt.Println(err)

	event1 := new(CloudEvent).
		SetId("a5074581-7e74-4e4c-868f-47e7afdf8445").
		SetSource("acs.aliyuncvc").
		SetTime("2020-11-13T17:37:05.965Asia/Shanghai").
		SetSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg").
		SetType("aliyuncvc:MeetingEvent:MeetingStateEvent").
		SetExtensions(map[string]interface{}{
			"aliyuneventbusname": "default",
		})

	resp, err := client.PutEventsToAccountIfEnable(tea.String("1186095474286448"), []*CloudEvent{event1})
	fmt.Println(resp)
	fmt.Println(err)

	fmt.Println(kvcache.HitCount())
	fmt.Println("cache-start")
	fmt.Println(kvcache.GetIfPresent(tea.String("1186095474286448")))
	fmt.Println("cache-end")
	fmt.Println(kvcache.HitCount())

	event1 = new(CloudEvent).
		SetId("a5074581-7e74-4e4c-868f-47e7afdf8445").
		SetSource("acs.aliyuncvc").
		SetTime("2020-11-13T17:37:05.965Asia/Shanghai").
		SetSubject("acs:aliyuncvc:cn-hangzhou:1234567:xls-papk/game_apk/123.jpg").
		SetType("aliyuncvc:MeetingEvent:MeetingStateEvent").
		SetExtensions(map[string]interface{}{
			"aliyuneventbusname": "default",
		})

	resp, err = client.PutEventsToAccountIfEnable(tea.String("1186095474286448"), []*CloudEvent{event1})
	fmt.Println(resp)
	fmt.Println(err)
}
