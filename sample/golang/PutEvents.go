package main

import (
	"fmt"

	eventbridge "github.com/alibabacloud-go/eventbridge-sdk/eventbridge"
)

func main() {

	config := new(eventbridge.Config).
		SetAccessKeyId("{accessKeyId}").
		SetAccessKeySecret("{accessKeySecret}").
		SetEndpoint("{endpoint}")

	client, err := eventbridge.NewClient(config)
	if err != nil {
		panic(err)
	}

	event := new(eventbridge.CloudEvent).
		SetDatacontenttype("application/json").
		SetData([]byte("test")).
		SetId("id").
		SetSource("source").
		SetTime("2020-08-24T13:54:05.965Asia/Shanghai").
		SetSubject("1.0").
		SetType("type").
		SetExtensions(map[string]interface{}{
			"aliyuneventbusname": "BusName",
		})

	resp, err := client.PutEvents([]*eventbridge.CloudEvent{event})
	if err != nil {
		panic(err)
	}
	fmt.Println(resp)
}