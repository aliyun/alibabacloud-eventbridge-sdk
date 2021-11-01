package client

import (
	"encoding/json"
	"fmt"
	"testing"

	"github.com/alibabacloud-go/tea/tea"
)

type CloudEvent struct {
	Id                  *string                `json:"id,omitempty" xml:"id,omitempty"`
	Source              *string                `json:"source,omitempty" xml:"source,omitempty"`
	Specversion         *string                `json:"specversion,omitempty" xml:"specversion,omitempty"`
	Type                *string                `json:"type,omitempty" xml:"type,omitempty"`
	Datacontenttype     *string                `json:"datacontenttype,omitempty" xml:"datacontenttype,omitempty"`
	Datacontentencoding *string                `json:"datacontentencoding,omitempty" xml:"datacontentencoding,omitempty"`
	Schemaurl           *string                `json:"schemaurl,omitempty" xml:"schemaurl,omitempty"`
	Subject             *string                `json:"subject,omitempty" xml:"subject,omitempty"`
	Time                *string                `json:"time,omitempty" xml:"time,omitempty"`
	Extensions          map[string]interface{} `json:"extensions,omitempty" xml:"extensions,omitempty"`
	Data                []byte                 `json:"data,omitempty" xml:"data,omitempty"`
}

func (s CloudEvent) String() string {
	return tea.Prettify(s)
}

func (s CloudEvent) GoString() string {
	return s.String()
}

func Test_Serialize(t *testing.T) {
	in := []*CloudEvent{
		&CloudEvent{
			Datacontenttype: tea.String("text/plain"),
			Data:            []byte("test"),
		},
		&CloudEvent{
			Datacontenttype: tea.String("text/json"),
			Data:            []byte("test"),
		},
	}
	var tmp []*CloudEvent
	res := Serialize(in)
	fmt.Printf("%s", res)
	byt, _ := json.Marshal(res)
	json.Unmarshal(byt, &tmp)
	fmt.Println(string(tmp[1].Data))
}
