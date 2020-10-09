package client

import (
	"encoding/json"
	"testing"

	"github.com/alibabacloud-go/tea/tea"
	"github.com/alibabacloud-go/tea/utils"
)

func Test_GetSignature(t *testing.T) {
	request := tea.NewRequest()
	sign := GetStringToSign(request)
	signature := GetSignature(sign, tea.String("secret"))
	utils.AssertEqual(t, 28, len(tea.StringValue(signature)))
}

func Test_Sorter(t *testing.T) {
	tmp := map[string]string{
		"key":   "eventbridge",
		"value": "ok",
	}
	sort := newSorter(tmp)
	sort.Sort()

	len := sort.Len()
	utils.AssertEqual(t, len, 2)

	isLess := sort.Less(0, 1)
	utils.AssertEqual(t, isLess, true)

	sort.Swap(0, 1)
	isLess = sort.Less(0, 1)
	utils.AssertEqual(t, isLess, false)
}

func Test_getStringToSign(t *testing.T) {
	request := tea.NewRequest()
	request.Query = map[string]*string{
		"eventbridge": tea.String("ok"),
		"null":        tea.String(""),
	}
	request.Headers = map[string]*string{
		"x-acs-meta": tea.String("user"),
	}
	str := getStringToSign(request)
	utils.AssertEqual(t, 41, len(str))
}

type TestEvent struct {
	Datacontenttype *string                `json:"datacontenttype,omitempty" xml:"datacontenttype,omitempty"`
	Extensions      map[string]interface{} `json:"extensions,omitempty" xml:"extensions,omitempty"`
	Data            []byte                 `json:"data,omitempty" xml:"data,omitempty"`
}

func Test_Serialize(t *testing.T) {
	in := []*TestEvent{
		&TestEvent{
			Datacontenttype: tea.String("text/plain"),
			Data:            []byte(`{"test":"ok"}`),
			Extensions: map[string]interface{}{
				"key": "ok",
			},
		},
		&TestEvent{
			Datacontenttype: tea.String("text/json"),
			Data:            []byte(`{"test":"ok"}`),
		},
		&TestEvent{
			Datacontenttype: tea.String("text/json"),
			Data:            []byte(`[{"test":"ok"}]`),
		},
		&TestEvent{
			Datacontenttype: tea.String("text/json"),
			Data:            []byte("test"),
		},
		&TestEvent{
			Datacontenttype: tea.String("text/json"),
			Data:            []byte("\"{\"bus\":\"demo\"}\""),
		},
	}
	out := make([]map[string]interface{}, 0)
	res := Serialize(in)
	byt, _ := json.Marshal(res)
	json.Unmarshal(byt, &out)
	utils.AssertEqual(t, "ok", out[0]["key"].(string))
	byt, _ = json.Marshal(out[0])
	utils.AssertEqual(t, `{"data_base64":"eyJ0ZXN0Ijoib2sifQ==","datacontenttype":"text/plain","key":"ok"}`, string(byt))
	utils.AssertNil(t, out[0]["data"])
	byt, _ = json.Marshal(out[1])
	utils.AssertEqual(t, `{"data":{"test":"ok"},"datacontenttype":"text/json"}`, string(byt))
	byt, _ = json.Marshal(out[2])
	utils.AssertEqual(t, `{"data":[{"test":"ok"}],"datacontenttype":"text/json"}`, string(byt))
	byt, _ = json.Marshal(out[3])
	utils.AssertEqual(t, `{"data":"test","datacontenttype":"text/json"}`, string(byt))
	byt, _ = json.Marshal(out[4])
	utils.AssertEqual(t, `{"data":"\"{\"bus\":\"demo\"}\"","datacontenttype":"text/json"}`, string(byt))

	res = Serialize(nil)
	utils.AssertNil(t, res)

	res = Serialize("string")
	utils.AssertEqual(t, "string", res)
}

func Test_StartWith(t *testing.T) {
	res := StartWith(tea.String("eventbridge"), tea.String("event"))
	utils.AssertEqual(t, true, tea.BoolValue(res))

	res = StartWith(tea.String("eventbridge"), tea.String("evenc"))
	utils.AssertEqual(t, false, tea.BoolValue(res))
}
