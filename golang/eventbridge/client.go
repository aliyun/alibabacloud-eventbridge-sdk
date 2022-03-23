// This file is auto-generated, don't edit it. Thanks.
/**
 *
 */
package eventbridge

import (
	eventbridgeutil "github.com/alibabacloud-go/eventbridge-util/client"
	util "github.com/alibabacloud-go/tea-utils/service"
	"github.com/alibabacloud-go/tea/tea"
	credential "github.com/aliyun/credentials-go/credentials"
)

/**
 * Model for initing client
 */
type Config struct {
	// accesskey id
	AccessKeyId *string `json:"accessKeyId,omitempty" xml:"accessKeyId,omitempty"`
	// accesskey secret
	AccessKeySecret *string `json:"accessKeySecret,omitempty" xml:"accessKeySecret,omitempty"`
	// security token
	SecurityToken *string `json:"securityToken,omitempty" xml:"securityToken,omitempty"`
	// http protocol
	Protocol *string `json:"protocol,omitempty" xml:"protocol,omitempty"`
	// region id
	RegionId *string `json:"regionId,omitempty" xml:"regionId,omitempty" pattern:"^[a-zA-Z0-9_-]+$"`
	// read timeout
	ReadTimeout *int `json:"readTimeout,omitempty" xml:"readTimeout,omitempty"`
	// connect timeout
	ConnectTimeout *int `json:"connectTimeout,omitempty" xml:"connectTimeout,omitempty"`
	// http proxy
	HttpProxy *string `json:"httpProxy,omitempty" xml:"httpProxy,omitempty"`
	// https proxy
	HttpsProxy *string `json:"httpsProxy,omitempty" xml:"httpsProxy,omitempty"`
	// credential
	Credential credential.Credential `json:"credential,omitempty" xml:"credential,omitempty"`
	// endpoint
	Endpoint *string `json:"endpoint,omitempty" xml:"endpoint,omitempty"`
	// proxy white list
	NoProxy *string `json:"noProxy,omitempty" xml:"noProxy,omitempty"`
	// max idle conns
	MaxIdleConns *int `json:"maxIdleConns,omitempty" xml:"maxIdleConns,omitempty"`
}

func (s Config) String() string {
	return tea.Prettify(s)
}

func (s Config) GoString() string {
	return s.String()
}

func (s *Config) SetAccessKeyId(v string) *Config {
	s.AccessKeyId = &v
	return s
}

func (s *Config) SetAccessKeySecret(v string) *Config {
	s.AccessKeySecret = &v
	return s
}

func (s *Config) SetSecurityToken(v string) *Config {
	s.SecurityToken = &v
	return s
}

func (s *Config) SetProtocol(v string) *Config {
	s.Protocol = &v
	return s
}

func (s *Config) SetRegionId(v string) *Config {
	s.RegionId = &v
	return s
}

func (s *Config) SetReadTimeout(v int) *Config {
	s.ReadTimeout = &v
	return s
}

func (s *Config) SetConnectTimeout(v int) *Config {
	s.ConnectTimeout = &v
	return s
}

func (s *Config) SetHttpProxy(v string) *Config {
	s.HttpProxy = &v
	return s
}

func (s *Config) SetHttpsProxy(v string) *Config {
	s.HttpsProxy = &v
	return s
}

func (s *Config) SetCredential(v credential.Credential) *Config {
	s.Credential = v
	return s
}

func (s *Config) SetEndpoint(v string) *Config {
	s.Endpoint = &v
	return s
}

func (s *Config) SetNoProxy(v string) *Config {
	s.NoProxy = &v
	return s
}

func (s *Config) SetMaxIdleConns(v int) *Config {
	s.MaxIdleConns = &v
	return s
}

/**
 * The detail of put event result
 */
type PutEventsResponseEntry struct {
	EventId      *string `json:"EventId,omitempty" xml:"EventId,omitempty"`
	TraceId      *string `json:"TraceId,omitempty" xml:"TraceId,omitempty"`
	ErrorCode    *string `json:"ErrorCode,omitempty" xml:"ErrorCode,omitempty"`
	ErrorMessage *string `json:"ErrorMessage,omitempty" xml:"ErrorMessage,omitempty"`
}

func (s PutEventsResponseEntry) String() string {
	return tea.Prettify(s)
}

func (s PutEventsResponseEntry) GoString() string {
	return s.String()
}

func (s *PutEventsResponseEntry) SetEventId(v string) *PutEventsResponseEntry {
	s.EventId = &v
	return s
}

func (s *PutEventsResponseEntry) SetTraceId(v string) *PutEventsResponseEntry {
	s.TraceId = &v
	return s
}

func (s *PutEventsResponseEntry) SetErrorCode(v string) *PutEventsResponseEntry {
	s.ErrorCode = &v
	return s
}

func (s *PutEventsResponseEntry) SetErrorMessage(v string) *PutEventsResponseEntry {
	s.ErrorMessage = &v
	return s
}

/**
 * Cloud Event Stanard Froamt
 */
type CloudEvent struct {
	Id              *string                `json:"id,omitempty" xml:"id,omitempty" require:"true"`
	Source          *string                `json:"source,omitempty" xml:"source,omitempty" require:"true" maxLength:"128"`
	Specversion     *string                `json:"specversion,omitempty" xml:"specversion,omitempty"`
	Type            *string                `json:"type,omitempty" xml:"type,omitempty" require:"true" maxLength:"64"`
	Datacontenttype *string                `json:"datacontenttype,omitempty" xml:"datacontenttype,omitempty"`
	Dataschema      *string                `json:"dataschema,omitempty" xml:"dataschema,omitempty"`
	Subject         *string                `json:"subject,omitempty" xml:"subject,omitempty"`
	Time            *string                `json:"time,omitempty" xml:"time,omitempty" maxLength:"64"`
	Extensions      map[string]interface{} `json:"extensions,omitempty" xml:"extensions,omitempty" require:"true"`
	Data            []byte                 `json:"data,omitempty" xml:"data,omitempty"`
}

func (s CloudEvent) String() string {
	return tea.Prettify(s)
}

func (s CloudEvent) GoString() string {
	return s.String()
}

func (s *CloudEvent) SetId(v string) *CloudEvent {
	s.Id = &v
	return s
}

func (s *CloudEvent) SetSource(v string) *CloudEvent {
	s.Source = &v
	return s
}

func (s *CloudEvent) SetSpecversion(v string) *CloudEvent {
	s.Specversion = &v
	return s
}

func (s *CloudEvent) SetType(v string) *CloudEvent {
	s.Type = &v
	return s
}

func (s *CloudEvent) SetDatacontenttype(v string) *CloudEvent {
	s.Datacontenttype = &v
	return s
}

func (s *CloudEvent) SetDataschema(v string) *CloudEvent {
	s.Dataschema = &v
	return s
}

func (s *CloudEvent) SetSubject(v string) *CloudEvent {
	s.Subject = &v
	return s
}

func (s *CloudEvent) SetTime(v string) *CloudEvent {
	s.Time = &v
	return s
}

func (s *CloudEvent) SetExtensions(v map[string]interface{}) *CloudEvent {
	s.Extensions = v
	return s
}

func (s *CloudEvent) SetData(v []byte) *CloudEvent {
	s.Data = v
	return s
}

/**
 * put event response
 */
type PutEventsResponse struct {
	RequestId              *string                   `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string                   `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	FailedEntryCount       *int                      `json:"FailedEntryCount,omitempty" xml:"FailedEntryCount,omitempty"`
	EntryList              []*PutEventsResponseEntry `json:"EntryList,omitempty" xml:"EntryList,omitempty" type:"Repeated"`
}

func (s PutEventsResponse) String() string {
	return tea.Prettify(s)
}

func (s PutEventsResponse) GoString() string {
	return s.String()
}

func (s *PutEventsResponse) SetRequestId(v string) *PutEventsResponse {
	s.RequestId = &v
	return s
}

func (s *PutEventsResponse) SetResourceOwnerAccountId(v string) *PutEventsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *PutEventsResponse) SetFailedEntryCount(v int) *PutEventsResponse {
	s.FailedEntryCount = &v
	return s
}

func (s *PutEventsResponse) SetEntryList(v []*PutEventsResponseEntry) *PutEventsResponse {
	s.EntryList = v
	return s
}

/**
 * The request of create EventBus
 */
type CreateEventBusRequest struct {
	EventBusName *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true" maxLength:"127" minLength:"1"`
	Description  *string            `json:"Description,omitempty" xml:"Description,omitempty"`
	Tags         map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s CreateEventBusRequest) String() string {
	return tea.Prettify(s)
}

func (s CreateEventBusRequest) GoString() string {
	return s.String()
}

func (s *CreateEventBusRequest) SetEventBusName(v string) *CreateEventBusRequest {
	s.EventBusName = &v
	return s
}

func (s *CreateEventBusRequest) SetDescription(v string) *CreateEventBusRequest {
	s.Description = &v
	return s
}

func (s *CreateEventBusRequest) SetTags(v map[string]*string) *CreateEventBusRequest {
	s.Tags = v
	return s
}

/**
 * The response of create EventBus
 */
type CreateEventBusResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventBusARN            *string `json:"EventBusARN,omitempty" xml:"EventBusARN,omitempty"`
}

func (s CreateEventBusResponse) String() string {
	return tea.Prettify(s)
}

func (s CreateEventBusResponse) GoString() string {
	return s.String()
}

func (s *CreateEventBusResponse) SetRequestId(v string) *CreateEventBusResponse {
	s.RequestId = &v
	return s
}

func (s *CreateEventBusResponse) SetResourceOwnerAccountId(v string) *CreateEventBusResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *CreateEventBusResponse) SetEventBusARN(v string) *CreateEventBusResponse {
	s.EventBusARN = &v
	return s
}

/**
 * The request of delete the EventBus
 */
type DeleteEventBusRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
}

func (s DeleteEventBusRequest) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventBusRequest) GoString() string {
	return s.String()
}

func (s *DeleteEventBusRequest) SetEventBusName(v string) *DeleteEventBusRequest {
	s.EventBusName = &v
	return s
}

/**
 * The response of delete the EventBus
 */
type DeleteEventBusResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s DeleteEventBusResponse) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventBusResponse) GoString() string {
	return s.String()
}

func (s *DeleteEventBusResponse) SetRequestId(v string) *DeleteEventBusResponse {
	s.RequestId = &v
	return s
}

func (s *DeleteEventBusResponse) SetResourceOwnerAccountId(v string) *DeleteEventBusResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of get the detail of EventBus
 */
type GetEventBusRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
}

func (s GetEventBusRequest) String() string {
	return tea.Prettify(s)
}

func (s GetEventBusRequest) GoString() string {
	return s.String()
}

func (s *GetEventBusRequest) SetEventBusName(v string) *GetEventBusRequest {
	s.EventBusName = &v
	return s
}

/**
 * The response of get the detail of EventBus
 */
type GetEventBusResponse struct {
	RequestId              *string            `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string            `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventBusARN            *string            `json:"EventBusARN,omitempty" xml:"EventBusARN,omitempty" require:"true"`
	EventBusName           *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	Description            *string            `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	CreateTimestamp        *int64             `json:"CreateTimestamp,omitempty" xml:"CreateTimestamp,omitempty" require:"true"`
	Tags                   map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s GetEventBusResponse) String() string {
	return tea.Prettify(s)
}

func (s GetEventBusResponse) GoString() string {
	return s.String()
}

func (s *GetEventBusResponse) SetRequestId(v string) *GetEventBusResponse {
	s.RequestId = &v
	return s
}

func (s *GetEventBusResponse) SetResourceOwnerAccountId(v string) *GetEventBusResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *GetEventBusResponse) SetEventBusARN(v string) *GetEventBusResponse {
	s.EventBusARN = &v
	return s
}

func (s *GetEventBusResponse) SetEventBusName(v string) *GetEventBusResponse {
	s.EventBusName = &v
	return s
}

func (s *GetEventBusResponse) SetDescription(v string) *GetEventBusResponse {
	s.Description = &v
	return s
}

func (s *GetEventBusResponse) SetCreateTimestamp(v int64) *GetEventBusResponse {
	s.CreateTimestamp = &v
	return s
}

func (s *GetEventBusResponse) SetTags(v map[string]*string) *GetEventBusResponse {
	s.Tags = v
	return s
}

/**
 * The request of list all the EventBus which meet the search criteria
 */
type ListEventBusesRequest struct {
	NamePrefix *string `json:"NamePrefix,omitempty" xml:"NamePrefix,omitempty"`
	Limit      *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
	NextToken  *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
}

func (s ListEventBusesRequest) String() string {
	return tea.Prettify(s)
}

func (s ListEventBusesRequest) GoString() string {
	return s.String()
}

func (s *ListEventBusesRequest) SetNamePrefix(v string) *ListEventBusesRequest {
	s.NamePrefix = &v
	return s
}

func (s *ListEventBusesRequest) SetLimit(v int) *ListEventBusesRequest {
	s.Limit = &v
	return s
}

func (s *ListEventBusesRequest) SetNextToken(v string) *ListEventBusesRequest {
	s.NextToken = &v
	return s
}

/**
 * The detail of EventBuses
 */
type EventBusEntry struct {
	EventBusName    *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	EventBusARN     *string            `json:"EventBusARN,omitempty" xml:"EventBusARN,omitempty" require:"true"`
	Description     *string            `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	CreateTimestamp *int64             `json:"CreateTimestamp,omitempty" xml:"CreateTimestamp,omitempty" require:"true"`
	Tags            map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s EventBusEntry) String() string {
	return tea.Prettify(s)
}

func (s EventBusEntry) GoString() string {
	return s.String()
}

func (s *EventBusEntry) SetEventBusName(v string) *EventBusEntry {
	s.EventBusName = &v
	return s
}

func (s *EventBusEntry) SetEventBusARN(v string) *EventBusEntry {
	s.EventBusARN = &v
	return s
}

func (s *EventBusEntry) SetDescription(v string) *EventBusEntry {
	s.Description = &v
	return s
}

func (s *EventBusEntry) SetCreateTimestamp(v int64) *EventBusEntry {
	s.CreateTimestamp = &v
	return s
}

func (s *EventBusEntry) SetTags(v map[string]*string) *EventBusEntry {
	s.Tags = v
	return s
}

/**
 * The response of search EventBus
 */
type ListEventBusesResponse struct {
	RequestId              *string          `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string          `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventBuses             []*EventBusEntry `json:"EventBuses,omitempty" xml:"EventBuses,omitempty" require:"true" type:"Repeated"`
	NextToken              *string          `json:"NextToken,omitempty" xml:"NextToken,omitempty" require:"true"`
	Total                  *int             `json:"Total,omitempty" xml:"Total,omitempty" require:"true"`
}

func (s ListEventBusesResponse) String() string {
	return tea.Prettify(s)
}

func (s ListEventBusesResponse) GoString() string {
	return s.String()
}

func (s *ListEventBusesResponse) SetRequestId(v string) *ListEventBusesResponse {
	s.RequestId = &v
	return s
}

func (s *ListEventBusesResponse) SetResourceOwnerAccountId(v string) *ListEventBusesResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListEventBusesResponse) SetEventBuses(v []*EventBusEntry) *ListEventBusesResponse {
	s.EventBuses = v
	return s
}

func (s *ListEventBusesResponse) SetNextToken(v string) *ListEventBusesResponse {
	s.NextToken = &v
	return s
}

func (s *ListEventBusesResponse) SetTotal(v int) *ListEventBusesResponse {
	s.Total = &v
	return s
}

/**
 * The request of create an EventBus rule on Aliyun
 */
type CreateRuleRequest struct {
	EventBusName  *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true" maxLength:"127" minLength:"1"`
	Description   *string            `json:"Description,omitempty" xml:"Description,omitempty"`
	RuleName      *string            `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Status        *string            `json:"Status,omitempty" xml:"Status,omitempty"`
	FilterPattern *string            `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty"`
	Targets       []*TargetEntry     `json:"Targets,omitempty" xml:"Targets,omitempty" require:"true" type:"Repeated"`
	Tags          map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s CreateRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s CreateRuleRequest) GoString() string {
	return s.String()
}

func (s *CreateRuleRequest) SetEventBusName(v string) *CreateRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *CreateRuleRequest) SetDescription(v string) *CreateRuleRequest {
	s.Description = &v
	return s
}

func (s *CreateRuleRequest) SetRuleName(v string) *CreateRuleRequest {
	s.RuleName = &v
	return s
}

func (s *CreateRuleRequest) SetStatus(v string) *CreateRuleRequest {
	s.Status = &v
	return s
}

func (s *CreateRuleRequest) SetFilterPattern(v string) *CreateRuleRequest {
	s.FilterPattern = &v
	return s
}

func (s *CreateRuleRequest) SetTargets(v []*TargetEntry) *CreateRuleRequest {
	s.Targets = v
	return s
}

func (s *CreateRuleRequest) SetTags(v map[string]*string) *CreateRuleRequest {
	s.Tags = v
	return s
}

/**
 * The detail of TargetEntry
 */
type TargetEntry struct {
	Id                *string           `json:"Id,omitempty" xml:"Id,omitempty" require:"true"`
	Type              *string           `json:"Type,omitempty" xml:"Type,omitempty" require:"true"`
	Endpoint          *string           `json:"Endpoint,omitempty" xml:"Endpoint,omitempty" require:"true"`
	PushRetryStrategy *string           `json:"PushRetryStrategy,omitempty" xml:"PushRetryStrategy,omitempty"`
	ParamList         []*EBTargetParam  `json:"ParamList,omitempty" xml:"ParamList,omitempty" type:"Repeated"`
	ConcurrentConfig  *ConcurrentConfig `json:"ConcurrentConfig,omitempty" xml:"ConcurrentConfig,omitempty"`
}

func (s TargetEntry) String() string {
	return tea.Prettify(s)
}

func (s TargetEntry) GoString() string {
	return s.String()
}

func (s *TargetEntry) SetId(v string) *TargetEntry {
	s.Id = &v
	return s
}

func (s *TargetEntry) SetType(v string) *TargetEntry {
	s.Type = &v
	return s
}

func (s *TargetEntry) SetEndpoint(v string) *TargetEntry {
	s.Endpoint = &v
	return s
}

func (s *TargetEntry) SetPushRetryStrategy(v string) *TargetEntry {
	s.PushRetryStrategy = &v
	return s
}

func (s *TargetEntry) SetParamList(v []*EBTargetParam) *TargetEntry {
	s.ParamList = v
	return s
}

func (s *TargetEntry) SetConcurrentConfig(v *ConcurrentConfig) *TargetEntry {
	s.ConcurrentConfig = v
	return s
}

/**
 * The param of EBTargetParam
 */
type EBTargetParam struct {
	ResourceKey *string `json:"ResourceKey,omitempty" xml:"ResourceKey,omitempty" require:"true"`
	Form        *string `json:"Form,omitempty" xml:"Form,omitempty" require:"true"`
	Value       *string `json:"Value,omitempty" xml:"Value,omitempty"`
	Template    *string `json:"Template,omitempty" xml:"Template,omitempty"`
}

func (s EBTargetParam) String() string {
	return tea.Prettify(s)
}

func (s EBTargetParam) GoString() string {
	return s.String()
}

func (s *EBTargetParam) SetResourceKey(v string) *EBTargetParam {
	s.ResourceKey = &v
	return s
}

func (s *EBTargetParam) SetForm(v string) *EBTargetParam {
	s.Form = &v
	return s
}

func (s *EBTargetParam) SetValue(v string) *EBTargetParam {
	s.Value = &v
	return s
}

func (s *EBTargetParam) SetTemplate(v string) *EBTargetParam {
	s.Template = &v
	return s
}

/**
 * The response of create EventBus Rule
 */
type CreateRuleResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	RuleARN                *string `json:"RuleARN,omitempty" xml:"RuleARN,omitempty" require:"true"`
}

func (s CreateRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s CreateRuleResponse) GoString() string {
	return s.String()
}

func (s *CreateRuleResponse) SetRequestId(v string) *CreateRuleResponse {
	s.RequestId = &v
	return s
}

func (s *CreateRuleResponse) SetResourceOwnerAccountId(v string) *CreateRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *CreateRuleResponse) SetRuleARN(v string) *CreateRuleResponse {
	s.RuleARN = &v
	return s
}

/**
 * The request of delete the rule
 */
type DeleteRuleRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
}

func (s DeleteRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s DeleteRuleRequest) GoString() string {
	return s.String()
}

func (s *DeleteRuleRequest) SetEventBusName(v string) *DeleteRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *DeleteRuleRequest) SetRuleName(v string) *DeleteRuleRequest {
	s.RuleName = &v
	return s
}

/**
 * The response of delete the rule
 */
type DeleteRuleResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s DeleteRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s DeleteRuleResponse) GoString() string {
	return s.String()
}

func (s *DeleteRuleResponse) SetRequestId(v string) *DeleteRuleResponse {
	s.RequestId = &v
	return s
}

func (s *DeleteRuleResponse) SetResourceOwnerAccountId(v string) *DeleteRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of disable the EventBus rule
 */
type DisableRuleRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
}

func (s DisableRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s DisableRuleRequest) GoString() string {
	return s.String()
}

func (s *DisableRuleRequest) SetEventBusName(v string) *DisableRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *DisableRuleRequest) SetRuleName(v string) *DisableRuleRequest {
	s.RuleName = &v
	return s
}

/**
 * The response of disable the EventBus rule
 */
type DisableRuleResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s DisableRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s DisableRuleResponse) GoString() string {
	return s.String()
}

func (s *DisableRuleResponse) SetRequestId(v string) *DisableRuleResponse {
	s.RequestId = &v
	return s
}

func (s *DisableRuleResponse) SetResourceOwnerAccountId(v string) *DisableRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of enable the EventBus rule
 */
type EnableRuleRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
}

func (s EnableRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s EnableRuleRequest) GoString() string {
	return s.String()
}

func (s *EnableRuleRequest) SetEventBusName(v string) *EnableRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *EnableRuleRequest) SetRuleName(v string) *EnableRuleRequest {
	s.RuleName = &v
	return s
}

/**
 * The response of enable the EventBus rule
 */
type EnableRuleResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s EnableRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s EnableRuleResponse) GoString() string {
	return s.String()
}

func (s *EnableRuleResponse) SetRequestId(v string) *EnableRuleResponse {
	s.RequestId = &v
	return s
}

func (s *EnableRuleResponse) SetResourceOwnerAccountId(v string) *EnableRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of Get EventBus
 */
type GetRuleRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
}

func (s GetRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s GetRuleRequest) GoString() string {
	return s.String()
}

func (s *GetRuleRequest) SetEventBusName(v string) *GetRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *GetRuleRequest) SetRuleName(v string) *GetRuleRequest {
	s.RuleName = &v
	return s
}

/**
 * The response of Get EventBus
 */
type GetRuleResponse struct {
	RequestId              *string            `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string            `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventBusName           *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleARN                *string            `json:"RuleARN,omitempty" xml:"RuleARN,omitempty" require:"true"`
	RuleName               *string            `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Description            *string            `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	Status                 *string            `json:"Status,omitempty" xml:"Status,omitempty" require:"true"`
	FilterPattern          *string            `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty" require:"true"`
	Targets                []*TargetEntry     `json:"Targets,omitempty" xml:"Targets,omitempty" require:"true" type:"Repeated"`
	Ctime                  *int64             `json:"Ctime,omitempty" xml:"Ctime,omitempty" require:"true"`
	Mtime                  *int64             `json:"Mtime,omitempty" xml:"Mtime,omitempty" require:"true"`
	Tags                   map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s GetRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s GetRuleResponse) GoString() string {
	return s.String()
}

func (s *GetRuleResponse) SetRequestId(v string) *GetRuleResponse {
	s.RequestId = &v
	return s
}

func (s *GetRuleResponse) SetResourceOwnerAccountId(v string) *GetRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *GetRuleResponse) SetEventBusName(v string) *GetRuleResponse {
	s.EventBusName = &v
	return s
}

func (s *GetRuleResponse) SetRuleARN(v string) *GetRuleResponse {
	s.RuleARN = &v
	return s
}

func (s *GetRuleResponse) SetRuleName(v string) *GetRuleResponse {
	s.RuleName = &v
	return s
}

func (s *GetRuleResponse) SetDescription(v string) *GetRuleResponse {
	s.Description = &v
	return s
}

func (s *GetRuleResponse) SetStatus(v string) *GetRuleResponse {
	s.Status = &v
	return s
}

func (s *GetRuleResponse) SetFilterPattern(v string) *GetRuleResponse {
	s.FilterPattern = &v
	return s
}

func (s *GetRuleResponse) SetTargets(v []*TargetEntry) *GetRuleResponse {
	s.Targets = v
	return s
}

func (s *GetRuleResponse) SetCtime(v int64) *GetRuleResponse {
	s.Ctime = &v
	return s
}

func (s *GetRuleResponse) SetMtime(v int64) *GetRuleResponse {
	s.Mtime = &v
	return s
}

func (s *GetRuleResponse) SetTags(v map[string]*string) *GetRuleResponse {
	s.Tags = v
	return s
}

/**
 * The request of search EventBus
 */
type ListRulesRequest struct {
	EventBusName   *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleNamePrefix *string `json:"RuleNamePrefix,omitempty" xml:"RuleNamePrefix,omitempty"`
	Limit          *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
	NextToken      *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
}

func (s ListRulesRequest) String() string {
	return tea.Prettify(s)
}

func (s ListRulesRequest) GoString() string {
	return s.String()
}

func (s *ListRulesRequest) SetEventBusName(v string) *ListRulesRequest {
	s.EventBusName = &v
	return s
}

func (s *ListRulesRequest) SetRuleNamePrefix(v string) *ListRulesRequest {
	s.RuleNamePrefix = &v
	return s
}

func (s *ListRulesRequest) SetLimit(v int) *ListRulesRequest {
	s.Limit = &v
	return s
}

func (s *ListRulesRequest) SetNextToken(v string) *ListRulesRequest {
	s.NextToken = &v
	return s
}

/**
 * The response of search EventBus
 */
type ListRulesResponse struct {
	RequestId              *string         `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string         `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	NextToken              *string         `json:"NextToken,omitempty" xml:"NextToken,omitempty" require:"true"`
	Rules                  []*EventRuleDTO `json:"Rules,omitempty" xml:"Rules,omitempty" require:"true" type:"Repeated"`
	Total                  *int            `json:"Total,omitempty" xml:"Total,omitempty" require:"true"`
}

func (s ListRulesResponse) String() string {
	return tea.Prettify(s)
}

func (s ListRulesResponse) GoString() string {
	return s.String()
}

func (s *ListRulesResponse) SetRequestId(v string) *ListRulesResponse {
	s.RequestId = &v
	return s
}

func (s *ListRulesResponse) SetResourceOwnerAccountId(v string) *ListRulesResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListRulesResponse) SetNextToken(v string) *ListRulesResponse {
	s.NextToken = &v
	return s
}

func (s *ListRulesResponse) SetRules(v []*EventRuleDTO) *ListRulesResponse {
	s.Rules = v
	return s
}

func (s *ListRulesResponse) SetTotal(v int) *ListRulesResponse {
	s.Total = &v
	return s
}

/**
 * The detail of EventBuses rule
 */
type EventRuleDTO struct {
	RuleARN       *string            `json:"RuleARN,omitempty" xml:"RuleARN,omitempty" require:"true"`
	EventBusName  *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName      *string            `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Description   *string            `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	Status        *string            `json:"Status,omitempty" xml:"Status,omitempty" require:"true"`
	FilterPattern *string            `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty" require:"true"`
	Targets       []*TargetEntry     `json:"Targets,omitempty" xml:"Targets,omitempty" require:"true" type:"Repeated"`
	Ctime         *int64             `json:"Ctime,omitempty" xml:"Ctime,omitempty" require:"true"`
	Mtime         *int64             `json:"Mtime,omitempty" xml:"Mtime,omitempty" require:"true"`
	Tags          map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s EventRuleDTO) String() string {
	return tea.Prettify(s)
}

func (s EventRuleDTO) GoString() string {
	return s.String()
}

func (s *EventRuleDTO) SetRuleARN(v string) *EventRuleDTO {
	s.RuleARN = &v
	return s
}

func (s *EventRuleDTO) SetEventBusName(v string) *EventRuleDTO {
	s.EventBusName = &v
	return s
}

func (s *EventRuleDTO) SetRuleName(v string) *EventRuleDTO {
	s.RuleName = &v
	return s
}

func (s *EventRuleDTO) SetDescription(v string) *EventRuleDTO {
	s.Description = &v
	return s
}

func (s *EventRuleDTO) SetStatus(v string) *EventRuleDTO {
	s.Status = &v
	return s
}

func (s *EventRuleDTO) SetFilterPattern(v string) *EventRuleDTO {
	s.FilterPattern = &v
	return s
}

func (s *EventRuleDTO) SetTargets(v []*TargetEntry) *EventRuleDTO {
	s.Targets = v
	return s
}

func (s *EventRuleDTO) SetCtime(v int64) *EventRuleDTO {
	s.Ctime = &v
	return s
}

func (s *EventRuleDTO) SetMtime(v int64) *EventRuleDTO {
	s.Mtime = &v
	return s
}

func (s *EventRuleDTO) SetTags(v map[string]*string) *EventRuleDTO {
	s.Tags = v
	return s
}

/**
 * The request of update the EventBus rule
 */
type UpdateRuleRequest struct {
	EventBusName  *string            `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName      *string            `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Description   *string            `json:"Description,omitempty" xml:"Description,omitempty"`
	Status        *string            `json:"Status,omitempty" xml:"Status,omitempty"`
	FilterPattern *string            `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty"`
	Tags          map[string]*string `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s UpdateRuleRequest) String() string {
	return tea.Prettify(s)
}

func (s UpdateRuleRequest) GoString() string {
	return s.String()
}

func (s *UpdateRuleRequest) SetEventBusName(v string) *UpdateRuleRequest {
	s.EventBusName = &v
	return s
}

func (s *UpdateRuleRequest) SetRuleName(v string) *UpdateRuleRequest {
	s.RuleName = &v
	return s
}

func (s *UpdateRuleRequest) SetDescription(v string) *UpdateRuleRequest {
	s.Description = &v
	return s
}

func (s *UpdateRuleRequest) SetStatus(v string) *UpdateRuleRequest {
	s.Status = &v
	return s
}

func (s *UpdateRuleRequest) SetFilterPattern(v string) *UpdateRuleRequest {
	s.FilterPattern = &v
	return s
}

func (s *UpdateRuleRequest) SetTags(v map[string]*string) *UpdateRuleRequest {
	s.Tags = v
	return s
}

/**
 * The response of update the EventBus rule
 */
type UpdateRuleResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s UpdateRuleResponse) String() string {
	return tea.Prettify(s)
}

func (s UpdateRuleResponse) GoString() string {
	return s.String()
}

func (s *UpdateRuleResponse) SetRequestId(v string) *UpdateRuleResponse {
	s.RequestId = &v
	return s
}

func (s *UpdateRuleResponse) SetResourceOwnerAccountId(v string) *UpdateRuleResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of create Targets
 */
type CreateTargetsRequest struct {
	EventBusName *string        `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string        `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Targets      []*TargetEntry `json:"Targets,omitempty" xml:"Targets,omitempty" require:"true" type:"Repeated"`
}

func (s CreateTargetsRequest) String() string {
	return tea.Prettify(s)
}

func (s CreateTargetsRequest) GoString() string {
	return s.String()
}

func (s *CreateTargetsRequest) SetEventBusName(v string) *CreateTargetsRequest {
	s.EventBusName = &v
	return s
}

func (s *CreateTargetsRequest) SetRuleName(v string) *CreateTargetsRequest {
	s.RuleName = &v
	return s
}

func (s *CreateTargetsRequest) SetTargets(v []*TargetEntry) *CreateTargetsRequest {
	s.Targets = v
	return s
}

/**
 * The response of create Targets
 */
type CreateTargetsResponse struct {
	RequestId              *string              `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string              `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	ErrorEntriesCount      *int                 `json:"ErrorEntriesCount,omitempty" xml:"ErrorEntriesCount,omitempty" require:"true"`
	ErrorEntries           []*TargetResultEntry `json:"ErrorEntries,omitempty" xml:"ErrorEntries,omitempty" require:"true" type:"Repeated"`
}

func (s CreateTargetsResponse) String() string {
	return tea.Prettify(s)
}

func (s CreateTargetsResponse) GoString() string {
	return s.String()
}

func (s *CreateTargetsResponse) SetRequestId(v string) *CreateTargetsResponse {
	s.RequestId = &v
	return s
}

func (s *CreateTargetsResponse) SetResourceOwnerAccountId(v string) *CreateTargetsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *CreateTargetsResponse) SetErrorEntriesCount(v int) *CreateTargetsResponse {
	s.ErrorEntriesCount = &v
	return s
}

func (s *CreateTargetsResponse) SetErrorEntries(v []*TargetResultEntry) *CreateTargetsResponse {
	s.ErrorEntries = v
	return s
}

/**
 * The request of delete Targets
 */
type DeleteTargetsRequest struct {
	EventBusName *string   `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string   `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	TargetIds    []*string `json:"TargetIds,omitempty" xml:"TargetIds,omitempty" require:"true" type:"Repeated"`
}

func (s DeleteTargetsRequest) String() string {
	return tea.Prettify(s)
}

func (s DeleteTargetsRequest) GoString() string {
	return s.String()
}

func (s *DeleteTargetsRequest) SetEventBusName(v string) *DeleteTargetsRequest {
	s.EventBusName = &v
	return s
}

func (s *DeleteTargetsRequest) SetRuleName(v string) *DeleteTargetsRequest {
	s.RuleName = &v
	return s
}

func (s *DeleteTargetsRequest) SetTargetIds(v []*string) *DeleteTargetsRequest {
	s.TargetIds = v
	return s
}

/**
 * The response of delete Targets
 */
type DeleteTargetsResponse struct {
	RequestId              *string              `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string              `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	ErrorEntriesCount      *int                 `json:"ErrorEntriesCount,omitempty" xml:"ErrorEntriesCount,omitempty" require:"true"`
	ErrorEntries           []*TargetResultEntry `json:"ErrorEntries,omitempty" xml:"ErrorEntries,omitempty" require:"true" type:"Repeated"`
}

func (s DeleteTargetsResponse) String() string {
	return tea.Prettify(s)
}

func (s DeleteTargetsResponse) GoString() string {
	return s.String()
}

func (s *DeleteTargetsResponse) SetRequestId(v string) *DeleteTargetsResponse {
	s.RequestId = &v
	return s
}

func (s *DeleteTargetsResponse) SetResourceOwnerAccountId(v string) *DeleteTargetsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *DeleteTargetsResponse) SetErrorEntriesCount(v int) *DeleteTargetsResponse {
	s.ErrorEntriesCount = &v
	return s
}

func (s *DeleteTargetsResponse) SetErrorEntries(v []*TargetResultEntry) *DeleteTargetsResponse {
	s.ErrorEntries = v
	return s
}

/**
 * The result detail of target operation
 */
type TargetResultEntry struct {
	ErrorCode    *string `json:"ErrorCode,omitempty" xml:"ErrorCode,omitempty" require:"true"`
	ErrorMessage *string `json:"ErrorMessage,omitempty" xml:"ErrorMessage,omitempty" require:"true"`
	EntryId      *string `json:"EntryId,omitempty" xml:"EntryId,omitempty" require:"true"`
}

func (s TargetResultEntry) String() string {
	return tea.Prettify(s)
}

func (s TargetResultEntry) GoString() string {
	return s.String()
}

func (s *TargetResultEntry) SetErrorCode(v string) *TargetResultEntry {
	s.ErrorCode = &v
	return s
}

func (s *TargetResultEntry) SetErrorMessage(v string) *TargetResultEntry {
	s.ErrorMessage = &v
	return s
}

func (s *TargetResultEntry) SetEntryId(v string) *TargetResultEntry {
	s.EntryId = &v
	return s
}

/**
 * The request of search Targets
 */
type ListTargetsRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	RuleName     *string `json:"RuleName,omitempty" xml:"RuleName,omitempty" require:"true"`
	Limit        *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
}

func (s ListTargetsRequest) String() string {
	return tea.Prettify(s)
}

func (s ListTargetsRequest) GoString() string {
	return s.String()
}

func (s *ListTargetsRequest) SetEventBusName(v string) *ListTargetsRequest {
	s.EventBusName = &v
	return s
}

func (s *ListTargetsRequest) SetRuleName(v string) *ListTargetsRequest {
	s.RuleName = &v
	return s
}

func (s *ListTargetsRequest) SetLimit(v int) *ListTargetsRequest {
	s.Limit = &v
	return s
}

/**
 * The response of search Targets
 */
type ListTargetsResponse struct {
	RequestId              *string        `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string        `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	Targets                []*TargetEntry `json:"Targets,omitempty" xml:"Targets,omitempty" require:"true" type:"Repeated"`
}

func (s ListTargetsResponse) String() string {
	return tea.Prettify(s)
}

func (s ListTargetsResponse) GoString() string {
	return s.String()
}

func (s *ListTargetsResponse) SetRequestId(v string) *ListTargetsResponse {
	s.RequestId = &v
	return s
}

func (s *ListTargetsResponse) SetResourceOwnerAccountId(v string) *ListTargetsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListTargetsResponse) SetTargets(v []*TargetEntry) *ListTargetsResponse {
	s.Targets = v
	return s
}

/**
 * The request of testEventPattern
 */
type TestEventPatternRequest struct {
	Event        *string `json:"Event,omitempty" xml:"Event,omitempty" require:"true" maxLength:"2048"`
	EventPattern *string `json:"EventPattern,omitempty" xml:"EventPattern,omitempty" require:"true" maxLength:"2048"`
}

func (s TestEventPatternRequest) String() string {
	return tea.Prettify(s)
}

func (s TestEventPatternRequest) GoString() string {
	return s.String()
}

func (s *TestEventPatternRequest) SetEvent(v string) *TestEventPatternRequest {
	s.Event = &v
	return s
}

func (s *TestEventPatternRequest) SetEventPattern(v string) *TestEventPatternRequest {
	s.EventPattern = &v
	return s
}

/**
 * The response of testEventPattern
 */
type TestEventPatternResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	Result                 *bool   `json:"Result,omitempty" xml:"Result,omitempty" require:"true"`
}

func (s TestEventPatternResponse) String() string {
	return tea.Prettify(s)
}

func (s TestEventPatternResponse) GoString() string {
	return s.String()
}

func (s *TestEventPatternResponse) SetRequestId(v string) *TestEventPatternResponse {
	s.RequestId = &v
	return s
}

func (s *TestEventPatternResponse) SetResourceOwnerAccountId(v string) *TestEventPatternResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *TestEventPatternResponse) SetResult(v bool) *TestEventPatternResponse {
	s.Result = &v
	return s
}

type QueryEventTracesRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	EventId      *string `json:"EventId,omitempty" xml:"EventId,omitempty" require:"true"`
}

func (s QueryEventTracesRequest) String() string {
	return tea.Prettify(s)
}

func (s QueryEventTracesRequest) GoString() string {
	return s.String()
}

func (s *QueryEventTracesRequest) SetEventBusName(v string) *QueryEventTracesRequest {
	s.EventBusName = &v
	return s
}

func (s *QueryEventTracesRequest) SetEventId(v string) *QueryEventTracesRequest {
	s.EventId = &v
	return s
}

type EventTrace struct {
	ResourceOwnerId *string `json:"ResourceOwnerId,omitempty" xml:"ResourceOwnerId,omitempty" require:"true"`
	Action          *string `json:"Action,omitempty" xml:"Action,omitempty" require:"true"`
	EventId         *string `json:"EventId,omitempty" xml:"EventId,omitempty" require:"true"`
	EventBusName    *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	ActionTime      *string `json:"ActionTime,omitempty" xml:"ActionTime,omitempty" require:"true"`
}

func (s EventTrace) String() string {
	return tea.Prettify(s)
}

func (s EventTrace) GoString() string {
	return s.String()
}

func (s *EventTrace) SetResourceOwnerId(v string) *EventTrace {
	s.ResourceOwnerId = &v
	return s
}

func (s *EventTrace) SetAction(v string) *EventTrace {
	s.Action = &v
	return s
}

func (s *EventTrace) SetEventId(v string) *EventTrace {
	s.EventId = &v
	return s
}

func (s *EventTrace) SetEventBusName(v string) *EventTrace {
	s.EventBusName = &v
	return s
}

func (s *EventTrace) SetActionTime(v string) *EventTrace {
	s.ActionTime = &v
	return s
}

type QueryEventTracesResponse struct {
	EventTraceList []*EventTrace `json:"EventTraceList,omitempty" xml:"EventTraceList,omitempty" require:"true" type:"Repeated"`
}

func (s QueryEventTracesResponse) String() string {
	return tea.Prettify(s)
}

func (s QueryEventTracesResponse) GoString() string {
	return s.String()
}

func (s *QueryEventTracesResponse) SetEventTraceList(v []*EventTrace) *QueryEventTracesResponse {
	s.EventTraceList = v
	return s
}

type QueryEventByEventIdRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	EventSource  *string `json:"EventSource,omitempty" xml:"EventSource,omitempty"`
	EventId      *string `json:"EventId,omitempty" xml:"EventId,omitempty" require:"true"`
}

func (s QueryEventByEventIdRequest) String() string {
	return tea.Prettify(s)
}

func (s QueryEventByEventIdRequest) GoString() string {
	return s.String()
}

func (s *QueryEventByEventIdRequest) SetEventBusName(v string) *QueryEventByEventIdRequest {
	s.EventBusName = &v
	return s
}

func (s *QueryEventByEventIdRequest) SetEventSource(v string) *QueryEventByEventIdRequest {
	s.EventSource = &v
	return s
}

func (s *QueryEventByEventIdRequest) SetEventId(v string) *QueryEventByEventIdRequest {
	s.EventId = &v
	return s
}

type TracedEvent struct {
	EventReceivedTime *string `json:"eventReceivedTime,omitempty" xml:"eventReceivedTime,omitempty" require:"true"`
	EventSource       *string `json:"EventSource,omitempty" xml:"EventSource,omitempty" require:"true"`
	EventId           *string `json:"EventId,omitempty" xml:"EventId,omitempty" require:"true"`
	EventBusName      *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
}

func (s TracedEvent) String() string {
	return tea.Prettify(s)
}

func (s TracedEvent) GoString() string {
	return s.String()
}

func (s *TracedEvent) SetEventReceivedTime(v string) *TracedEvent {
	s.EventReceivedTime = &v
	return s
}

func (s *TracedEvent) SetEventSource(v string) *TracedEvent {
	s.EventSource = &v
	return s
}

func (s *TracedEvent) SetEventId(v string) *TracedEvent {
	s.EventId = &v
	return s
}

func (s *TracedEvent) SetEventBusName(v string) *TracedEvent {
	s.EventBusName = &v
	return s
}

type QueryEventByEventIdResponse struct {
	TracedEvents []*EventTrace `json:"TracedEvents,omitempty" xml:"TracedEvents,omitempty" require:"true" type:"Repeated"`
	NextToken    *string       `json:"NextToken,omitempty" xml:"NextToken,omitempty" require:"true"`
	Total        *int          `json:"Total,omitempty" xml:"Total,omitempty" require:"true"`
}

func (s QueryEventByEventIdResponse) String() string {
	return tea.Prettify(s)
}

func (s QueryEventByEventIdResponse) GoString() string {
	return s.String()
}

func (s *QueryEventByEventIdResponse) SetTracedEvents(v []*EventTrace) *QueryEventByEventIdResponse {
	s.TracedEvents = v
	return s
}

func (s *QueryEventByEventIdResponse) SetNextToken(v string) *QueryEventByEventIdResponse {
	s.NextToken = &v
	return s
}

func (s *QueryEventByEventIdResponse) SetTotal(v int) *QueryEventByEventIdResponse {
	s.Total = &v
	return s
}

type QueryEventsByPeriodRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	EventSource  *string `json:"EventSource,omitempty" xml:"EventSource,omitempty"`
	StartTime    *int64  `json:"StartTime,omitempty" xml:"StartTime,omitempty" require:"true"`
	EndTime      *int64  `json:"EndTime,omitempty" xml:"EndTime,omitempty" require:"true"`
	Limit        *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
	NextToken    *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
}

func (s QueryEventsByPeriodRequest) String() string {
	return tea.Prettify(s)
}

func (s QueryEventsByPeriodRequest) GoString() string {
	return s.String()
}

func (s *QueryEventsByPeriodRequest) SetEventBusName(v string) *QueryEventsByPeriodRequest {
	s.EventBusName = &v
	return s
}

func (s *QueryEventsByPeriodRequest) SetEventSource(v string) *QueryEventsByPeriodRequest {
	s.EventSource = &v
	return s
}

func (s *QueryEventsByPeriodRequest) SetStartTime(v int64) *QueryEventsByPeriodRequest {
	s.StartTime = &v
	return s
}

func (s *QueryEventsByPeriodRequest) SetEndTime(v int64) *QueryEventsByPeriodRequest {
	s.EndTime = &v
	return s
}

func (s *QueryEventsByPeriodRequest) SetLimit(v int) *QueryEventsByPeriodRequest {
	s.Limit = &v
	return s
}

func (s *QueryEventsByPeriodRequest) SetNextToken(v string) *QueryEventsByPeriodRequest {
	s.NextToken = &v
	return s
}

type QueryEventsByPeriodResponse struct {
	TracedEvents []*EventTrace `json:"TracedEvents,omitempty" xml:"TracedEvents,omitempty" require:"true" type:"Repeated"`
	NextToken    *string       `json:"NextToken,omitempty" xml:"NextToken,omitempty" require:"true"`
	Total        *int          `json:"Total,omitempty" xml:"Total,omitempty" require:"true"`
}

func (s QueryEventsByPeriodResponse) String() string {
	return tea.Prettify(s)
}

func (s QueryEventsByPeriodResponse) GoString() string {
	return s.String()
}

func (s *QueryEventsByPeriodResponse) SetTracedEvents(v []*EventTrace) *QueryEventsByPeriodResponse {
	s.TracedEvents = v
	return s
}

func (s *QueryEventsByPeriodResponse) SetNextToken(v string) *QueryEventsByPeriodResponse {
	s.NextToken = &v
	return s
}

func (s *QueryEventsByPeriodResponse) SetTotal(v int) *QueryEventsByPeriodResponse {
	s.Total = &v
	return s
}

/**
 * The detail of SourceRabbitMQParameters
 */
type SourceRabbitMQParameters struct {
	RegionId        *string `json:"RegionId,omitempty" xml:"RegionId,omitempty"`
	InstanceId      *string `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	VirtualHostName *string `json:"VirtualHostName,omitempty" xml:"VirtualHostName,omitempty" require:"true"`
	QueueName       *string `json:"QueueName,omitempty" xml:"QueueName,omitempty" require:"true"`
}

func (s SourceRabbitMQParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceRabbitMQParameters) GoString() string {
	return s.String()
}

func (s *SourceRabbitMQParameters) SetRegionId(v string) *SourceRabbitMQParameters {
	s.RegionId = &v
	return s
}

func (s *SourceRabbitMQParameters) SetInstanceId(v string) *SourceRabbitMQParameters {
	s.InstanceId = &v
	return s
}

func (s *SourceRabbitMQParameters) SetVirtualHostName(v string) *SourceRabbitMQParameters {
	s.VirtualHostName = &v
	return s
}

func (s *SourceRabbitMQParameters) SetQueueName(v string) *SourceRabbitMQParameters {
	s.QueueName = &v
	return s
}

/**
 * The detail of SourceMNSParameters
 */
type SourceMNSParameters struct {
	RegionId       *string `json:"RegionId,omitempty" xml:"RegionId,omitempty"`
	QueueName      *string `json:"QueueName,omitempty" xml:"QueueName,omitempty"`
	IsBase64Decode *bool   `json:"IsBase64Decode,omitempty" xml:"IsBase64Decode,omitempty"`
}

func (s SourceMNSParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceMNSParameters) GoString() string {
	return s.String()
}

func (s *SourceMNSParameters) SetRegionId(v string) *SourceMNSParameters {
	s.RegionId = &v
	return s
}

func (s *SourceMNSParameters) SetQueueName(v string) *SourceMNSParameters {
	s.QueueName = &v
	return s
}

func (s *SourceMNSParameters) SetIsBase64Decode(v bool) *SourceMNSParameters {
	s.IsBase64Decode = &v
	return s
}

/**
 * The detail of SourceRocketMQParameters
 */
type SourceRocketMQParameters struct {
	RegionId   *string `json:"RegionId,omitempty" xml:"RegionId,omitempty"`
	InstanceId *string `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	Topic      *string `json:"Topic,omitempty" xml:"Topic,omitempty"`
	Tag        *string `json:"Tag,omitempty" xml:"Tag,omitempty"`
	Offset     *string `json:"Offset,omitempty" xml:"Offset,omitempty"`
	GroupID    *string `json:"GroupID,omitempty" xml:"GroupID,omitempty" require:"true"`
	Timestamp  *int    `json:"Timestamp,omitempty" xml:"Timestamp,omitempty" require:"true"`
}

func (s SourceRocketMQParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceRocketMQParameters) GoString() string {
	return s.String()
}

func (s *SourceRocketMQParameters) SetRegionId(v string) *SourceRocketMQParameters {
	s.RegionId = &v
	return s
}

func (s *SourceRocketMQParameters) SetInstanceId(v string) *SourceRocketMQParameters {
	s.InstanceId = &v
	return s
}

func (s *SourceRocketMQParameters) SetTopic(v string) *SourceRocketMQParameters {
	s.Topic = &v
	return s
}

func (s *SourceRocketMQParameters) SetTag(v string) *SourceRocketMQParameters {
	s.Tag = &v
	return s
}

func (s *SourceRocketMQParameters) SetOffset(v string) *SourceRocketMQParameters {
	s.Offset = &v
	return s
}

func (s *SourceRocketMQParameters) SetGroupID(v string) *SourceRocketMQParameters {
	s.GroupID = &v
	return s
}

func (s *SourceRocketMQParameters) SetTimestamp(v int) *SourceRocketMQParameters {
	s.Timestamp = &v
	return s
}

/**
 * The detail of SourceScheduledEventParameters
 */
type SourceScheduledEventParameters struct {
	Schedule *string            `json:"Schedule,omitempty" xml:"Schedule,omitempty" require:"true"`
	TimeZone *string            `json:"TimeZone,omitempty" xml:"TimeZone,omitempty" require:"true"`
	UserData map[string]*string `json:"UserData,omitempty" xml:"UserData,omitempty"`
}

func (s SourceScheduledEventParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceScheduledEventParameters) GoString() string {
	return s.String()
}

func (s *SourceScheduledEventParameters) SetSchedule(v string) *SourceScheduledEventParameters {
	s.Schedule = &v
	return s
}

func (s *SourceScheduledEventParameters) SetTimeZone(v string) *SourceScheduledEventParameters {
	s.TimeZone = &v
	return s
}

func (s *SourceScheduledEventParameters) SetUserData(v map[string]*string) *SourceScheduledEventParameters {
	s.UserData = v
	return s
}

/**
 * The request of createEventSource
 */
type CreateEventSourceRequest struct {
	EventSourceName                *string                         `json:"EventSourceName,omitempty" xml:"EventSourceName,omitempty" require:"true" maxLength:"127" minLength:"1"`
	Description                    *string                         `json:"Description,omitempty" xml:"Description,omitempty"`
	EventBusName                   *string                         `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	SourceRabbitMQParameters       *SourceRabbitMQParameters       `json:"SourceRabbitMQParameters,omitempty" xml:"SourceRabbitMQParameters,omitempty"`
	SourceMNSParameters            *SourceMNSParameters            `json:"SourceMNSParameters,omitempty" xml:"SourceMNSParameters,omitempty"`
	SourceRocketMQParameters       *SourceRocketMQParameters       `json:"SourceRocketMQParameters,omitempty" xml:"SourceRocketMQParameters,omitempty"`
	SourceScheduledEventParameters *SourceScheduledEventParameters `json:"SourceScheduledEventParameters,omitempty" xml:"SourceScheduledEventParameters,omitempty"`
	SourceHttpEventParameters      *SourceHttpEventParameters      `json:"SourceHttpEventParameters,omitempty" xml:"SourceHttpEventParameters,omitempty"`
}

func (s CreateEventSourceRequest) String() string {
	return tea.Prettify(s)
}

func (s CreateEventSourceRequest) GoString() string {
	return s.String()
}

func (s *CreateEventSourceRequest) SetEventSourceName(v string) *CreateEventSourceRequest {
	s.EventSourceName = &v
	return s
}

func (s *CreateEventSourceRequest) SetDescription(v string) *CreateEventSourceRequest {
	s.Description = &v
	return s
}

func (s *CreateEventSourceRequest) SetEventBusName(v string) *CreateEventSourceRequest {
	s.EventBusName = &v
	return s
}

func (s *CreateEventSourceRequest) SetSourceRabbitMQParameters(v *SourceRabbitMQParameters) *CreateEventSourceRequest {
	s.SourceRabbitMQParameters = v
	return s
}

func (s *CreateEventSourceRequest) SetSourceMNSParameters(v *SourceMNSParameters) *CreateEventSourceRequest {
	s.SourceMNSParameters = v
	return s
}

func (s *CreateEventSourceRequest) SetSourceRocketMQParameters(v *SourceRocketMQParameters) *CreateEventSourceRequest {
	s.SourceRocketMQParameters = v
	return s
}

func (s *CreateEventSourceRequest) SetSourceScheduledEventParameters(v *SourceScheduledEventParameters) *CreateEventSourceRequest {
	s.SourceScheduledEventParameters = v
	return s
}

func (s *CreateEventSourceRequest) SetSourceHttpEventParameters(v *SourceHttpEventParameters) *CreateEventSourceRequest {
	s.SourceHttpEventParameters = v
	return s
}

/**
 * The detail of SourceKafkaParameters
 */
type SourceKafkaParameters struct {
	RegionId      *string                `json:"RegionId,omitempty" xml:"RegionId,omitempty"`
	InstanceId    *string                `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	Topic         *string                `json:"Topic,omitempty" xml:"Topic,omitempty"`
	ConsumerGroup *string                `json:"ConsumerGroup,omitempty" xml:"ConsumerGroup,omitempty" require:"true"`
	OffsetReset   *string                `json:"OffsetReset,omitempty" xml:"OffsetReset,omitempty"`
	ExtendConfig  map[string]interface{} `json:"ExtendConfig,omitempty" xml:"ExtendConfig,omitempty"`
}

func (s SourceKafkaParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceKafkaParameters) GoString() string {
	return s.String()
}

func (s *SourceKafkaParameters) SetRegionId(v string) *SourceKafkaParameters {
	s.RegionId = &v
	return s
}

func (s *SourceKafkaParameters) SetInstanceId(v string) *SourceKafkaParameters {
	s.InstanceId = &v
	return s
}

func (s *SourceKafkaParameters) SetTopic(v string) *SourceKafkaParameters {
	s.Topic = &v
	return s
}

func (s *SourceKafkaParameters) SetConsumerGroup(v string) *SourceKafkaParameters {
	s.ConsumerGroup = &v
	return s
}

func (s *SourceKafkaParameters) SetOffsetReset(v string) *SourceKafkaParameters {
	s.OffsetReset = &v
	return s
}

func (s *SourceKafkaParameters) SetExtendConfig(v map[string]interface{}) *SourceKafkaParameters {
	s.ExtendConfig = v
	return s
}

/**
 * The event source entry
 */
type EventTypeEntry struct {
	Name            *string `json:"Name,omitempty" xml:"Name,omitempty" require:"true"`
	EventSourceName *string `json:"EventSourceName,omitempty" xml:"EventSourceName,omitempty" require:"true"`
	ShortName       *string `json:"ShortName,omitempty" xml:"ShortName,omitempty" require:"true"`
	GroupName       *string `json:"GroupName,omitempty" xml:"GroupName,omitempty" require:"true"`
}

func (s EventTypeEntry) String() string {
	return tea.Prettify(s)
}

func (s EventTypeEntry) GoString() string {
	return s.String()
}

func (s *EventTypeEntry) SetName(v string) *EventTypeEntry {
	s.Name = &v
	return s
}

func (s *EventTypeEntry) SetEventSourceName(v string) *EventTypeEntry {
	s.EventSourceName = &v
	return s
}

func (s *EventTypeEntry) SetShortName(v string) *EventTypeEntry {
	s.ShortName = &v
	return s
}

func (s *EventTypeEntry) SetGroupName(v string) *EventTypeEntry {
	s.GroupName = &v
	return s
}

/**
 * The config of Source
 */
type Source struct {
	SourceMNSParameters      *SourceMNSParameters      `json:"SourceMNSParameters,omitempty" xml:"SourceMNSParameters,omitempty"`
	SourceRabbitMQParameters *SourceRabbitMQParameters `json:"SourceRabbitMQParameters,omitempty" xml:"SourceRabbitMQParameters,omitempty"`
	SourceRocketMQParameters *SourceRocketMQParameters `json:"SourceRocketMQParameters,omitempty" xml:"SourceRocketMQParameters,omitempty"`
	SourceKafkaParameters    *SourceKafkaParameters    `json:"SourceKafkaParameters,omitempty" xml:"SourceKafkaParameters,omitempty"`
}

func (s Source) String() string {
	return tea.Prettify(s)
}

func (s Source) GoString() string {
	return s.String()
}

func (s *Source) SetSourceMNSParameters(v *SourceMNSParameters) *Source {
	s.SourceMNSParameters = v
	return s
}

func (s *Source) SetSourceRabbitMQParameters(v *SourceRabbitMQParameters) *Source {
	s.SourceRabbitMQParameters = v
	return s
}

func (s *Source) SetSourceRocketMQParameters(v *SourceRocketMQParameters) *Source {
	s.SourceRocketMQParameters = v
	return s
}

func (s *Source) SetSourceKafkaParameters(v *SourceKafkaParameters) *Source {
	s.SourceKafkaParameters = v
	return s
}

/**
 * The config of Sink
 */
type Sink struct {
	SinkMNSParameters      *SinkMNSParameters      `json:"SinkMNSParameters,omitempty" xml:"SinkMNSParameters,omitempty"`
	SinkRabbitMQParameters *SinkRabbitMQParameters `json:"SinkRabbitMQParameters,omitempty" xml:"SinkRabbitMQParameters,omitempty"`
	SinkKafkaParameters    *SinkKafkaParameters    `json:"SinkKafkaParameters,omitempty" xml:"SinkKafkaParameters,omitempty"`
	SinkRocketMQParameters *SinkRocketMQParameters `json:"SinkRocketMQParameters,omitempty" xml:"SinkRocketMQParameters,omitempty"`
	SinkFcParameters       *SinkFcParameters       `json:"SinkFcParameters,omitempty" xml:"SinkFcParameters,omitempty"`
	SinkOdpsParameters     *SinkOdpsParameters     `json:"SinkOdpsParameters,omitempty" xml:"SinkOdpsParameters,omitempty"`
}

func (s Sink) String() string {
	return tea.Prettify(s)
}

func (s Sink) GoString() string {
	return s.String()
}

func (s *Sink) SetSinkMNSParameters(v *SinkMNSParameters) *Sink {
	s.SinkMNSParameters = v
	return s
}

func (s *Sink) SetSinkRabbitMQParameters(v *SinkRabbitMQParameters) *Sink {
	s.SinkRabbitMQParameters = v
	return s
}

func (s *Sink) SetSinkKafkaParameters(v *SinkKafkaParameters) *Sink {
	s.SinkKafkaParameters = v
	return s
}

func (s *Sink) SetSinkRocketMQParameters(v *SinkRocketMQParameters) *Sink {
	s.SinkRocketMQParameters = v
	return s
}

func (s *Sink) SetSinkFcParameters(v *SinkFcParameters) *Sink {
	s.SinkFcParameters = v
	return s
}

func (s *Sink) SetSinkOdpsParameters(v *SinkOdpsParameters) *Sink {
	s.SinkOdpsParameters = v
	return s
}

/**
 * The config of SinkOdpsParameters
 */
type SinkOdpsParameters struct {
	Project             *TargetParameter       `json:"Project,omitempty" xml:"Project,omitempty"`
	Table               *TargetParameter       `json:"Table,omitempty" xml:"Table,omitempty"`
	RoleName            *TargetParameter       `json:"RoleName,omitempty" xml:"RoleName,omitempty"`
	Format              *TargetParameter       `json:"Format,omitempty" xml:"Format,omitempty"`
	Mode                *TargetParameter       `json:"Mode,omitempty" xml:"Mode,omitempty"`
	PartitionWindowType *TargetParameter       `json:"PartitionWindowType,omitempty" xml:"PartitionWindowType,omitempty"`
	TimeZone            *TargetParameter       `json:"TimeZone,omitempty" xml:"TimeZone,omitempty"`
	UseStreaming        *TargetParameter       `json:"UseStreaming,omitempty" xml:"UseStreaming,omitempty"`
	ExtendConfig        map[string]interface{} `json:"ExtendConfig,omitempty" xml:"ExtendConfig,omitempty"`
}

func (s SinkOdpsParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkOdpsParameters) GoString() string {
	return s.String()
}

func (s *SinkOdpsParameters) SetProject(v *TargetParameter) *SinkOdpsParameters {
	s.Project = v
	return s
}

func (s *SinkOdpsParameters) SetTable(v *TargetParameter) *SinkOdpsParameters {
	s.Table = v
	return s
}

func (s *SinkOdpsParameters) SetRoleName(v *TargetParameter) *SinkOdpsParameters {
	s.RoleName = v
	return s
}

func (s *SinkOdpsParameters) SetFormat(v *TargetParameter) *SinkOdpsParameters {
	s.Format = v
	return s
}

func (s *SinkOdpsParameters) SetMode(v *TargetParameter) *SinkOdpsParameters {
	s.Mode = v
	return s
}

func (s *SinkOdpsParameters) SetPartitionWindowType(v *TargetParameter) *SinkOdpsParameters {
	s.PartitionWindowType = v
	return s
}

func (s *SinkOdpsParameters) SetTimeZone(v *TargetParameter) *SinkOdpsParameters {
	s.TimeZone = v
	return s
}

func (s *SinkOdpsParameters) SetUseStreaming(v *TargetParameter) *SinkOdpsParameters {
	s.UseStreaming = v
	return s
}

func (s *SinkOdpsParameters) SetExtendConfig(v map[string]interface{}) *SinkOdpsParameters {
	s.ExtendConfig = v
	return s
}

/**
 * The config of SinkFcParameters
 */
type SinkFcParameters struct {
	ServiceName    *TargetParameter       `json:"ServiceName,omitempty" xml:"ServiceName,omitempty"`
	FunctionName   *TargetParameter       `json:"FunctionName,omitempty" xml:"FunctionName,omitempty"`
	Body           *TargetParameter       `json:"Body,omitempty" xml:"Body,omitempty"`
	Qualifier      *TargetParameter       `json:"Qualifier,omitempty" xml:"Qualifier,omitempty"`
	InvocationType *TargetParameter       `json:"InvocationType,omitempty" xml:"InvocationType,omitempty"`
	BatchSize      *TargetParameter       `json:"BatchSize,omitempty" xml:"BatchSize,omitempty"`
	ExtendConfig   map[string]interface{} `json:"ExtendConfig,omitempty" xml:"ExtendConfig,omitempty"`
}

func (s SinkFcParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkFcParameters) GoString() string {
	return s.String()
}

func (s *SinkFcParameters) SetServiceName(v *TargetParameter) *SinkFcParameters {
	s.ServiceName = v
	return s
}

func (s *SinkFcParameters) SetFunctionName(v *TargetParameter) *SinkFcParameters {
	s.FunctionName = v
	return s
}

func (s *SinkFcParameters) SetBody(v *TargetParameter) *SinkFcParameters {
	s.Body = v
	return s
}

func (s *SinkFcParameters) SetQualifier(v *TargetParameter) *SinkFcParameters {
	s.Qualifier = v
	return s
}

func (s *SinkFcParameters) SetInvocationType(v *TargetParameter) *SinkFcParameters {
	s.InvocationType = v
	return s
}

func (s *SinkFcParameters) SetBatchSize(v *TargetParameter) *SinkFcParameters {
	s.BatchSize = v
	return s
}

func (s *SinkFcParameters) SetExtendConfig(v map[string]interface{}) *SinkFcParameters {
	s.ExtendConfig = v
	return s
}

/**
 * The config of SinkRocketMQParameters
 */
type SinkRocketMQParameters struct {
	InstanceId *TargetParameter `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	Topic      *TargetParameter `json:"Topic,omitempty" xml:"Topic,omitempty"`
	Body       *TargetParameter `json:"Body,omitempty" xml:"Body,omitempty"`
	Properties *TargetParameter `json:"Properties,omitempty" xml:"Properties,omitempty"`
	Keys       *TargetParameter `json:"Keys,omitempty" xml:"Keys,omitempty"`
	Tags       *TargetParameter `json:"Tags,omitempty" xml:"Tags,omitempty"`
}

func (s SinkRocketMQParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkRocketMQParameters) GoString() string {
	return s.String()
}

func (s *SinkRocketMQParameters) SetInstanceId(v *TargetParameter) *SinkRocketMQParameters {
	s.InstanceId = v
	return s
}

func (s *SinkRocketMQParameters) SetTopic(v *TargetParameter) *SinkRocketMQParameters {
	s.Topic = v
	return s
}

func (s *SinkRocketMQParameters) SetBody(v *TargetParameter) *SinkRocketMQParameters {
	s.Body = v
	return s
}

func (s *SinkRocketMQParameters) SetProperties(v *TargetParameter) *SinkRocketMQParameters {
	s.Properties = v
	return s
}

func (s *SinkRocketMQParameters) SetKeys(v *TargetParameter) *SinkRocketMQParameters {
	s.Keys = v
	return s
}

func (s *SinkRocketMQParameters) SetTags(v *TargetParameter) *SinkRocketMQParameters {
	s.Tags = v
	return s
}

/**
 * The config of SinkKafkaParameters
 */
type SinkKafkaParameters struct {
	InstanceId   *TargetParameter       `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	Topic        *TargetParameter       `json:"Topic,omitempty" xml:"Topic,omitempty"`
	Acks         *TargetParameter       `json:"Acks,omitempty" xml:"Acks,omitempty"`
	Key          *TargetParameter       `json:"Key,omitempty" xml:"Key,omitempty"`
	Value        *TargetParameter       `json:"Value,omitempty" xml:"Value,omitempty"`
	ExtendConfig map[string]interface{} `json:"ExtendConfig,omitempty" xml:"ExtendConfig,omitempty"`
}

func (s SinkKafkaParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkKafkaParameters) GoString() string {
	return s.String()
}

func (s *SinkKafkaParameters) SetInstanceId(v *TargetParameter) *SinkKafkaParameters {
	s.InstanceId = v
	return s
}

func (s *SinkKafkaParameters) SetTopic(v *TargetParameter) *SinkKafkaParameters {
	s.Topic = v
	return s
}

func (s *SinkKafkaParameters) SetAcks(v *TargetParameter) *SinkKafkaParameters {
	s.Acks = v
	return s
}

func (s *SinkKafkaParameters) SetKey(v *TargetParameter) *SinkKafkaParameters {
	s.Key = v
	return s
}

func (s *SinkKafkaParameters) SetValue(v *TargetParameter) *SinkKafkaParameters {
	s.Value = v
	return s
}

func (s *SinkKafkaParameters) SetExtendConfig(v map[string]interface{}) *SinkKafkaParameters {
	s.ExtendConfig = v
	return s
}

/**
 * The config of SinkRabbitMQParameters
 */
type SinkRabbitMQParameters struct {
	InstanceId      *TargetParameter `json:"InstanceId,omitempty" xml:"InstanceId,omitempty"`
	VirtualHostName *TargetParameter `json:"VirtualHostName,omitempty" xml:"VirtualHostName,omitempty"`
	TargetType      *TargetParameter `json:"TargetType,omitempty" xml:"TargetType,omitempty"`
	Exchange        *TargetParameter `json:"Exchange,omitempty" xml:"Exchange,omitempty"`
	RoutingKey      *TargetParameter `json:"RoutingKey,omitempty" xml:"RoutingKey,omitempty"`
	QueueName       *TargetParameter `json:"QueueName,omitempty" xml:"QueueName,omitempty"`
	Body            *TargetParameter `json:"Body,omitempty" xml:"Body,omitempty"`
	MessageId       *TargetParameter `json:"MessageId,omitempty" xml:"MessageId,omitempty"`
	Properties      *TargetParameter `json:"Properties,omitempty" xml:"Properties,omitempty"`
}

func (s SinkRabbitMQParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkRabbitMQParameters) GoString() string {
	return s.String()
}

func (s *SinkRabbitMQParameters) SetInstanceId(v *TargetParameter) *SinkRabbitMQParameters {
	s.InstanceId = v
	return s
}

func (s *SinkRabbitMQParameters) SetVirtualHostName(v *TargetParameter) *SinkRabbitMQParameters {
	s.VirtualHostName = v
	return s
}

func (s *SinkRabbitMQParameters) SetTargetType(v *TargetParameter) *SinkRabbitMQParameters {
	s.TargetType = v
	return s
}

func (s *SinkRabbitMQParameters) SetExchange(v *TargetParameter) *SinkRabbitMQParameters {
	s.Exchange = v
	return s
}

func (s *SinkRabbitMQParameters) SetRoutingKey(v *TargetParameter) *SinkRabbitMQParameters {
	s.RoutingKey = v
	return s
}

func (s *SinkRabbitMQParameters) SetQueueName(v *TargetParameter) *SinkRabbitMQParameters {
	s.QueueName = v
	return s
}

func (s *SinkRabbitMQParameters) SetBody(v *TargetParameter) *SinkRabbitMQParameters {
	s.Body = v
	return s
}

func (s *SinkRabbitMQParameters) SetMessageId(v *TargetParameter) *SinkRabbitMQParameters {
	s.MessageId = v
	return s
}

func (s *SinkRabbitMQParameters) SetProperties(v *TargetParameter) *SinkRabbitMQParameters {
	s.Properties = v
	return s
}

/**
 * The config of SinkMNSParameters
 */
type SinkMNSParameters struct {
	QueueName *TargetParameter `json:"QueueName,omitempty" xml:"QueueName,omitempty"`
	Body      *TargetParameter `json:"Body,omitempty" xml:"Body,omitempty"`
}

func (s SinkMNSParameters) String() string {
	return tea.Prettify(s)
}

func (s SinkMNSParameters) GoString() string {
	return s.String()
}

func (s *SinkMNSParameters) SetQueueName(v *TargetParameter) *SinkMNSParameters {
	s.QueueName = v
	return s
}

func (s *SinkMNSParameters) SetBody(v *TargetParameter) *SinkMNSParameters {
	s.Body = v
	return s
}

/**
 * The config of TargetParameter
 */
type TargetParameter struct {
	Value    *string `json:"Value,omitempty" xml:"Value,omitempty"`
	Form     *string `json:"Form,omitempty" xml:"Form,omitempty"`
	Template *string `json:"Template,omitempty" xml:"Template,omitempty"`
}

func (s TargetParameter) String() string {
	return tea.Prettify(s)
}

func (s TargetParameter) GoString() string {
	return s.String()
}

func (s *TargetParameter) SetValue(v string) *TargetParameter {
	s.Value = &v
	return s
}

func (s *TargetParameter) SetForm(v string) *TargetParameter {
	s.Form = &v
	return s
}

func (s *TargetParameter) SetTemplate(v string) *TargetParameter {
	s.Template = &v
	return s
}

/**
 * The config of RunOptions
 */
type RunOptions struct {
	MaximumTasks    *int             `json:"MaximumTasks,omitempty" xml:"MaximumTasks,omitempty"`
	RetryStrategy   *RetryStrategy   `json:"RetryStrategy,omitempty" xml:"RetryStrategy,omitempty"`
	ErrorsTolerance *string          `json:"ErrorsTolerance,omitempty" xml:"ErrorsTolerance,omitempty"`
	DeadLetterQueue *DeadLetterQueue `json:"DeadLetterQueue,omitempty" xml:"DeadLetterQueue,omitempty"`
}

func (s RunOptions) String() string {
	return tea.Prettify(s)
}

func (s RunOptions) GoString() string {
	return s.String()
}

func (s *RunOptions) SetMaximumTasks(v int) *RunOptions {
	s.MaximumTasks = &v
	return s
}

func (s *RunOptions) SetRetryStrategy(v *RetryStrategy) *RunOptions {
	s.RetryStrategy = v
	return s
}

func (s *RunOptions) SetErrorsTolerance(v string) *RunOptions {
	s.ErrorsTolerance = &v
	return s
}

func (s *RunOptions) SetDeadLetterQueue(v *DeadLetterQueue) *RunOptions {
	s.DeadLetterQueue = v
	return s
}

/**
 * The config of RetryStrategy
 */
type RetryStrategy struct {
	PushRetryStrategy        *string `json:"PushRetryStrategy,omitempty" xml:"PushRetryStrategy,omitempty"`
	MaximumEventAgeInSeconds *int    `json:"MaximumEventAgeInSeconds,omitempty" xml:"MaximumEventAgeInSeconds,omitempty"`
	MaximumRetryAttempts     *int    `json:"MaximumRetryAttempts,omitempty" xml:"MaximumRetryAttempts,omitempty"`
}

func (s RetryStrategy) String() string {
	return tea.Prettify(s)
}

func (s RetryStrategy) GoString() string {
	return s.String()
}

func (s *RetryStrategy) SetPushRetryStrategy(v string) *RetryStrategy {
	s.PushRetryStrategy = &v
	return s
}

func (s *RetryStrategy) SetMaximumEventAgeInSeconds(v int) *RetryStrategy {
	s.MaximumEventAgeInSeconds = &v
	return s
}

func (s *RetryStrategy) SetMaximumRetryAttempts(v int) *RetryStrategy {
	s.MaximumRetryAttempts = &v
	return s
}

/**
 * The detail of DeadLetterQueue
 */
type DeadLetterQueue struct {
	Arn *string `json:"Arn,omitempty" xml:"Arn,omitempty"`
}

func (s DeadLetterQueue) String() string {
	return tea.Prettify(s)
}

func (s DeadLetterQueue) GoString() string {
	return s.String()
}

func (s *DeadLetterQueue) SetArn(v string) *DeadLetterQueue {
	s.Arn = &v
	return s
}

/**
 * The metrics of event streaming
 */
type EventStreamingMetric struct {
	Name             *string  `json:"Name,omitempty" xml:"Name,omitempty"`
	Tps              *float64 `json:"TPS,omitempty" xml:"TPS,omitempty"`
	DelayTime        *int64   `json:"DelayTime,omitempty" xml:"DelayTime,omitempty"`
	DiffOffset       *int64   `json:"DiffOffset,omitempty" xml:"DiffOffset,omitempty"`
	LastDateSyncTime *int64   `json:"LastDateSyncTime,omitempty" xml:"LastDateSyncTime,omitempty"`
	LastHeartBeat    *int64   `json:"LastHeartBeat,omitempty" xml:"LastHeartBeat,omitempty"`
	Status           *string  `json:"Status,omitempty" xml:"Status,omitempty"`
}

func (s EventStreamingMetric) String() string {
	return tea.Prettify(s)
}

func (s EventStreamingMetric) GoString() string {
	return s.String()
}

func (s *EventStreamingMetric) SetName(v string) *EventStreamingMetric {
	s.Name = &v
	return s
}

func (s *EventStreamingMetric) SetTps(v float64) *EventStreamingMetric {
	s.Tps = &v
	return s
}

func (s *EventStreamingMetric) SetDelayTime(v int64) *EventStreamingMetric {
	s.DelayTime = &v
	return s
}

func (s *EventStreamingMetric) SetDiffOffset(v int64) *EventStreamingMetric {
	s.DiffOffset = &v
	return s
}

func (s *EventStreamingMetric) SetLastDateSyncTime(v int64) *EventStreamingMetric {
	s.LastDateSyncTime = &v
	return s
}

func (s *EventStreamingMetric) SetLastHeartBeat(v int64) *EventStreamingMetric {
	s.LastHeartBeat = &v
	return s
}

func (s *EventStreamingMetric) SetStatus(v string) *EventStreamingMetric {
	s.Status = &v
	return s
}

/**
 * The detail of EBEventStreamingEntry
 */
type EBEventStreamingEntry struct {
	EventStreamingName *string     `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty"`
	Description        *string     `json:"Description,omitempty" xml:"Description,omitempty"`
	Source             *Source     `json:"Source,omitempty" xml:"Source,omitempty"`
	FilterPattern      *string     `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty"`
	Sink               *Sink       `json:"Sink,omitempty" xml:"Sink,omitempty"`
	RunOptions         *RunOptions `json:"RunOptions,omitempty" xml:"RunOptions,omitempty"`
	Tag                *string     `json:"Tag,omitempty" xml:"Tag,omitempty"`
	Status             *string     `json:"Status,omitempty" xml:"Status,omitempty"`
}

func (s EBEventStreamingEntry) String() string {
	return tea.Prettify(s)
}

func (s EBEventStreamingEntry) GoString() string {
	return s.String()
}

func (s *EBEventStreamingEntry) SetEventStreamingName(v string) *EBEventStreamingEntry {
	s.EventStreamingName = &v
	return s
}

func (s *EBEventStreamingEntry) SetDescription(v string) *EBEventStreamingEntry {
	s.Description = &v
	return s
}

func (s *EBEventStreamingEntry) SetSource(v *Source) *EBEventStreamingEntry {
	s.Source = v
	return s
}

func (s *EBEventStreamingEntry) SetFilterPattern(v string) *EBEventStreamingEntry {
	s.FilterPattern = &v
	return s
}

func (s *EBEventStreamingEntry) SetSink(v *Sink) *EBEventStreamingEntry {
	s.Sink = v
	return s
}

func (s *EBEventStreamingEntry) SetRunOptions(v *RunOptions) *EBEventStreamingEntry {
	s.RunOptions = v
	return s
}

func (s *EBEventStreamingEntry) SetTag(v string) *EBEventStreamingEntry {
	s.Tag = &v
	return s
}

func (s *EBEventStreamingEntry) SetStatus(v string) *EBEventStreamingEntry {
	s.Status = &v
	return s
}

/**
 * The response of createEventSource
 */
type CreateEventSourceResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventSourceARN         *string `json:"EventSourceARN,omitempty" xml:"EventSourceARN,omitempty"`
}

func (s CreateEventSourceResponse) String() string {
	return tea.Prettify(s)
}

func (s CreateEventSourceResponse) GoString() string {
	return s.String()
}

func (s *CreateEventSourceResponse) SetRequestId(v string) *CreateEventSourceResponse {
	s.RequestId = &v
	return s
}

func (s *CreateEventSourceResponse) SetResourceOwnerAccountId(v string) *CreateEventSourceResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *CreateEventSourceResponse) SetEventSourceARN(v string) *CreateEventSourceResponse {
	s.EventSourceARN = &v
	return s
}

/**
 * The event source entry
 */
type EBUserDefinedEventSourceEntry struct {
	Name                      *string                    `json:"Name,omitempty" xml:"Name,omitempty"`
	Description               *string                    `json:"Description,omitempty" xml:"Description,omitempty"`
	Arn                       *string                    `json:"ARN,omitempty" xml:"ARN,omitempty"`
	Status                    *string                    `json:"Status,omitempty" xml:"Status,omitempty"`
	Ctime                     *int64                     `json:"Ctime,omitempty" xml:"Ctime,omitempty"`
	EventBusName              *string                    `json:"EventBusName,omitempty" xml:"EventBusName,omitempty"`
	SourceRabbitMQParameters  *SourceRabbitMQParameters  `json:"SourceRabbitMQParameters,omitempty" xml:"SourceRabbitMQParameters,omitempty"`
	SourceMNSParameters       *SourceMNSParameters       `json:"SourceMNSParameters,omitempty" xml:"SourceMNSParameters,omitempty"`
	SourceRocketMQParameters  *SourceRocketMQParameters  `json:"SourceRocketMQParameters,omitempty" xml:"SourceRocketMQParameters,omitempty" require:"true"`
	SourceKafkaParameters     *SourceKafkaParameters     `json:"SourceKafkaParameters,omitempty" xml:"SourceKafkaParameters,omitempty" require:"true"`
	SourceHttpEventParameters *SourceHttpEventParameters `json:"SourceHttpEventParameters,omitempty" xml:"SourceHttpEventParameters,omitempty" require:"true"`
}

func (s EBUserDefinedEventSourceEntry) String() string {
	return tea.Prettify(s)
}

func (s EBUserDefinedEventSourceEntry) GoString() string {
	return s.String()
}

func (s *EBUserDefinedEventSourceEntry) SetName(v string) *EBUserDefinedEventSourceEntry {
	s.Name = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetDescription(v string) *EBUserDefinedEventSourceEntry {
	s.Description = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetArn(v string) *EBUserDefinedEventSourceEntry {
	s.Arn = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetStatus(v string) *EBUserDefinedEventSourceEntry {
	s.Status = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetCtime(v int64) *EBUserDefinedEventSourceEntry {
	s.Ctime = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetEventBusName(v string) *EBUserDefinedEventSourceEntry {
	s.EventBusName = &v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetSourceRabbitMQParameters(v *SourceRabbitMQParameters) *EBUserDefinedEventSourceEntry {
	s.SourceRabbitMQParameters = v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetSourceMNSParameters(v *SourceMNSParameters) *EBUserDefinedEventSourceEntry {
	s.SourceMNSParameters = v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetSourceRocketMQParameters(v *SourceRocketMQParameters) *EBUserDefinedEventSourceEntry {
	s.SourceRocketMQParameters = v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetSourceKafkaParameters(v *SourceKafkaParameters) *EBUserDefinedEventSourceEntry {
	s.SourceKafkaParameters = v
	return s
}

func (s *EBUserDefinedEventSourceEntry) SetSourceHttpEventParameters(v *SourceHttpEventParameters) *EBUserDefinedEventSourceEntry {
	s.SourceHttpEventParameters = v
	return s
}

/**
 * The event source entry
 */
type EBAliyunOfficialEventSourceEntry struct {
	Name         *string           `json:"Name,omitempty" xml:"Name,omitempty" require:"true"`
	Description  *string           `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	Arn          *string           `json:"ARN,omitempty" xml:"ARN,omitempty" require:"true"`
	Status       *string           `json:"Status,omitempty" xml:"Status,omitempty" require:"true"`
	Ctime        *int64            `json:"Ctime,omitempty" xml:"Ctime,omitempty" require:"true"`
	EventBusName *string           `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	EventTypes   []*EventTypeEntry `json:"EventTypes,omitempty" xml:"EventTypes,omitempty" require:"true" type:"Repeated"`
}

func (s EBAliyunOfficialEventSourceEntry) String() string {
	return tea.Prettify(s)
}

func (s EBAliyunOfficialEventSourceEntry) GoString() string {
	return s.String()
}

func (s *EBAliyunOfficialEventSourceEntry) SetName(v string) *EBAliyunOfficialEventSourceEntry {
	s.Name = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetDescription(v string) *EBAliyunOfficialEventSourceEntry {
	s.Description = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetArn(v string) *EBAliyunOfficialEventSourceEntry {
	s.Arn = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetStatus(v string) *EBAliyunOfficialEventSourceEntry {
	s.Status = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetCtime(v int64) *EBAliyunOfficialEventSourceEntry {
	s.Ctime = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetEventBusName(v string) *EBAliyunOfficialEventSourceEntry {
	s.EventBusName = &v
	return s
}

func (s *EBAliyunOfficialEventSourceEntry) SetEventTypes(v []*EventTypeEntry) *EBAliyunOfficialEventSourceEntry {
	s.EventTypes = v
	return s
}

/**
 * The request of deleteEventSource
 */
type DeleteEventSourceRequest struct {
	EventBusName    *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty"`
	EventSourceName *string `json:"EventSourceName,omitempty" xml:"EventSourceName,omitempty" require:"true"`
}

func (s DeleteEventSourceRequest) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventSourceRequest) GoString() string {
	return s.String()
}

func (s *DeleteEventSourceRequest) SetEventBusName(v string) *DeleteEventSourceRequest {
	s.EventBusName = &v
	return s
}

func (s *DeleteEventSourceRequest) SetEventSourceName(v string) *DeleteEventSourceRequest {
	s.EventSourceName = &v
	return s
}

/**
 * The response of deleteEventSource
 */
type DeleteEventSourceResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s DeleteEventSourceResponse) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventSourceResponse) GoString() string {
	return s.String()
}

func (s *DeleteEventSourceResponse) SetRequestId(v string) *DeleteEventSourceResponse {
	s.RequestId = &v
	return s
}

func (s *DeleteEventSourceResponse) SetResourceOwnerAccountId(v string) *DeleteEventSourceResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of update the event source
 */
type UpdateEventSourceRequest struct {
	EventSourceName                *string                         `json:"EventSourceName,omitempty" xml:"EventSourceName,omitempty" require:"true" maxLength:"127" minLength:"1"`
	Description                    *string                         `json:"Description,omitempty" xml:"Description,omitempty"`
	EventBusName                   *string                         `json:"EventBusName,omitempty" xml:"EventBusName,omitempty" require:"true"`
	SourceRabbitMQParameters       *SourceRabbitMQParameters       `json:"SourceRabbitMQParameters,omitempty" xml:"SourceRabbitMQParameters,omitempty"`
	SourceMNSParameters            *SourceMNSParameters            `json:"SourceMNSParameters,omitempty" xml:"SourceMNSParameters,omitempty"`
	SourceRocketMQParameters       *SourceRocketMQParameters       `json:"SourceRocketMQParameters,omitempty" xml:"SourceRocketMQParameters,omitempty"`
	SourceScheduledEventParameters *SourceScheduledEventParameters `json:"SourceScheduledEventParameters,omitempty" xml:"SourceScheduledEventParameters,omitempty"`
	SourceHttpEventParameters      *SourceHttpEventParameters      `json:"SourceHttpEventParameters,omitempty" xml:"SourceHttpEventParameters,omitempty"`
}

func (s UpdateEventSourceRequest) String() string {
	return tea.Prettify(s)
}

func (s UpdateEventSourceRequest) GoString() string {
	return s.String()
}

func (s *UpdateEventSourceRequest) SetEventSourceName(v string) *UpdateEventSourceRequest {
	s.EventSourceName = &v
	return s
}

func (s *UpdateEventSourceRequest) SetDescription(v string) *UpdateEventSourceRequest {
	s.Description = &v
	return s
}

func (s *UpdateEventSourceRequest) SetEventBusName(v string) *UpdateEventSourceRequest {
	s.EventBusName = &v
	return s
}

func (s *UpdateEventSourceRequest) SetSourceRabbitMQParameters(v *SourceRabbitMQParameters) *UpdateEventSourceRequest {
	s.SourceRabbitMQParameters = v
	return s
}

func (s *UpdateEventSourceRequest) SetSourceMNSParameters(v *SourceMNSParameters) *UpdateEventSourceRequest {
	s.SourceMNSParameters = v
	return s
}

func (s *UpdateEventSourceRequest) SetSourceRocketMQParameters(v *SourceRocketMQParameters) *UpdateEventSourceRequest {
	s.SourceRocketMQParameters = v
	return s
}

func (s *UpdateEventSourceRequest) SetSourceScheduledEventParameters(v *SourceScheduledEventParameters) *UpdateEventSourceRequest {
	s.SourceScheduledEventParameters = v
	return s
}

func (s *UpdateEventSourceRequest) SetSourceHttpEventParameters(v *SourceHttpEventParameters) *UpdateEventSourceRequest {
	s.SourceHttpEventParameters = v
	return s
}

/**
 * The response of update the event source
 */
type UpdateEventSourceResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s UpdateEventSourceResponse) String() string {
	return tea.Prettify(s)
}

func (s UpdateEventSourceResponse) GoString() string {
	return s.String()
}

func (s *UpdateEventSourceResponse) SetRequestId(v string) *UpdateEventSourceResponse {
	s.RequestId = &v
	return s
}

func (s *UpdateEventSourceResponse) SetResourceOwnerAccountId(v string) *UpdateEventSourceResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of listUserDefinedEventSources
 */
type ListUserDefinedRequest struct {
	EventBusName *string `json:"EventBusName,omitempty" xml:"EventBusName,omitempty"`
	NextToken    *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
	Limit        *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
}

func (s ListUserDefinedRequest) String() string {
	return tea.Prettify(s)
}

func (s ListUserDefinedRequest) GoString() string {
	return s.String()
}

func (s *ListUserDefinedRequest) SetEventBusName(v string) *ListUserDefinedRequest {
	s.EventBusName = &v
	return s
}

func (s *ListUserDefinedRequest) SetNextToken(v string) *ListUserDefinedRequest {
	s.NextToken = &v
	return s
}

func (s *ListUserDefinedRequest) SetLimit(v int) *ListUserDefinedRequest {
	s.Limit = &v
	return s
}

/**
 * The response of listUserDefinedEventSources
 */
type ListUserDefinedResponse struct {
	RequestId              *string                          `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string                          `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventSources           []*EBUserDefinedEventSourceEntry `json:"EventSources,omitempty" xml:"EventSources,omitempty" type:"Repeated"`
	NextToken              *string                          `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
	Total                  *int                             `json:"Total,omitempty" xml:"Total,omitempty"`
}

func (s ListUserDefinedResponse) String() string {
	return tea.Prettify(s)
}

func (s ListUserDefinedResponse) GoString() string {
	return s.String()
}

func (s *ListUserDefinedResponse) SetRequestId(v string) *ListUserDefinedResponse {
	s.RequestId = &v
	return s
}

func (s *ListUserDefinedResponse) SetResourceOwnerAccountId(v string) *ListUserDefinedResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListUserDefinedResponse) SetEventSources(v []*EBUserDefinedEventSourceEntry) *ListUserDefinedResponse {
	s.EventSources = v
	return s
}

func (s *ListUserDefinedResponse) SetNextToken(v string) *ListUserDefinedResponse {
	s.NextToken = &v
	return s
}

func (s *ListUserDefinedResponse) SetTotal(v int) *ListUserDefinedResponse {
	s.Total = &v
	return s
}

/**
 * The request of listAliyunOfficialEventSources
 */
type ListAliyunOfficialRequest struct {
	NextToken *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
	Limit     *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
}

func (s ListAliyunOfficialRequest) String() string {
	return tea.Prettify(s)
}

func (s ListAliyunOfficialRequest) GoString() string {
	return s.String()
}

func (s *ListAliyunOfficialRequest) SetNextToken(v string) *ListAliyunOfficialRequest {
	s.NextToken = &v
	return s
}

func (s *ListAliyunOfficialRequest) SetLimit(v int) *ListAliyunOfficialRequest {
	s.Limit = &v
	return s
}

/**
 * The response of listAliyunOfficialEventSources
 */
type ListAliyunOfficialResponse struct {
	RequestId              *string                             `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string                             `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventSourceList        []*EBAliyunOfficialEventSourceEntry `json:"EventSourceList,omitempty" xml:"EventSourceList,omitempty" require:"true" type:"Repeated"`
	NextToken              *string                             `json:"NextToken,omitempty" xml:"NextToken,omitempty" require:"true"`
	Total                  *int                                `json:"Total,omitempty" xml:"Total,omitempty" require:"true"`
}

func (s ListAliyunOfficialResponse) String() string {
	return tea.Prettify(s)
}

func (s ListAliyunOfficialResponse) GoString() string {
	return s.String()
}

func (s *ListAliyunOfficialResponse) SetRequestId(v string) *ListAliyunOfficialResponse {
	s.RequestId = &v
	return s
}

func (s *ListAliyunOfficialResponse) SetResourceOwnerAccountId(v string) *ListAliyunOfficialResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListAliyunOfficialResponse) SetEventSourceList(v []*EBAliyunOfficialEventSourceEntry) *ListAliyunOfficialResponse {
	s.EventSourceList = v
	return s
}

func (s *ListAliyunOfficialResponse) SetNextToken(v string) *ListAliyunOfficialResponse {
	s.NextToken = &v
	return s
}

func (s *ListAliyunOfficialResponse) SetTotal(v int) *ListAliyunOfficialResponse {
	s.Total = &v
	return s
}

/**
 * The request of createEventStreaming
 */
type CreateEventStreamingRequest struct {
	EventStreamingName *string     `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty"`
	Description        *string     `json:"Description,omitempty" xml:"Description,omitempty"`
	Source             *Source     `json:"Source,omitempty" xml:"Source,omitempty"`
	FilterPattern      *string     `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty"`
	Sink               *Sink       `json:"Sink,omitempty" xml:"Sink,omitempty"`
	RunOptions         *RunOptions `json:"RunOptions,omitempty" xml:"RunOptions,omitempty"`
	Tag                *string     `json:"Tag,omitempty" xml:"Tag,omitempty"`
}

func (s CreateEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s CreateEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *CreateEventStreamingRequest) SetEventStreamingName(v string) *CreateEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

func (s *CreateEventStreamingRequest) SetDescription(v string) *CreateEventStreamingRequest {
	s.Description = &v
	return s
}

func (s *CreateEventStreamingRequest) SetSource(v *Source) *CreateEventStreamingRequest {
	s.Source = v
	return s
}

func (s *CreateEventStreamingRequest) SetFilterPattern(v string) *CreateEventStreamingRequest {
	s.FilterPattern = &v
	return s
}

func (s *CreateEventStreamingRequest) SetSink(v *Sink) *CreateEventStreamingRequest {
	s.Sink = v
	return s
}

func (s *CreateEventStreamingRequest) SetRunOptions(v *RunOptions) *CreateEventStreamingRequest {
	s.RunOptions = v
	return s
}

func (s *CreateEventStreamingRequest) SetTag(v string) *CreateEventStreamingRequest {
	s.Tag = &v
	return s
}

/**
 * The response of createEventStreaming
 */
type CreateEventStreamingResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventStreamingARN      *string `json:"EventStreamingARN,omitempty" xml:"EventStreamingARN,omitempty"`
}

func (s CreateEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s CreateEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *CreateEventStreamingResponse) SetRequestId(v string) *CreateEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *CreateEventStreamingResponse) SetResourceOwnerAccountId(v string) *CreateEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *CreateEventStreamingResponse) SetEventStreamingARN(v string) *CreateEventStreamingResponse {
	s.EventStreamingARN = &v
	return s
}

/**
 * The request of delete event streaming
 */
type DeleteEventStreamingRequest struct {
	EventStreamingName *string `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
}

func (s DeleteEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *DeleteEventStreamingRequest) SetEventStreamingName(v string) *DeleteEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

/**
 * The response of delete event streaming
 */
type DeleteEventStreamingResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s DeleteEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s DeleteEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *DeleteEventStreamingResponse) SetRequestId(v string) *DeleteEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *DeleteEventStreamingResponse) SetResourceOwnerAccountId(v string) *DeleteEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of create event streaming
 */
type GetEventStreamingRequest struct {
	EventStreamingName *string `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
}

func (s GetEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s GetEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *GetEventStreamingRequest) SetEventStreamingName(v string) *GetEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

/**
 * The response of create event streaming
 */
type GetEventStreamingResponse struct {
	RequestId              *string     `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string     `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventStreamingName     *string     `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
	Description            *string     `json:"Description,omitempty" xml:"Description,omitempty" require:"true"`
	Source                 *Source     `json:"Source,omitempty" xml:"Source,omitempty" require:"true"`
	FilterPattern          *string     `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty" require:"true"`
	Sink                   *Sink       `json:"Sink,omitempty" xml:"Sink,omitempty" require:"true"`
	RunOptions             *RunOptions `json:"RunOptions,omitempty" xml:"RunOptions,omitempty" require:"true"`
	Tag                    *string     `json:"Tag,omitempty" xml:"Tag,omitempty" require:"true"`
	Status                 *string     `json:"Status,omitempty" xml:"Status,omitempty" require:"true"`
}

func (s GetEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s GetEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *GetEventStreamingResponse) SetRequestId(v string) *GetEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *GetEventStreamingResponse) SetResourceOwnerAccountId(v string) *GetEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *GetEventStreamingResponse) SetEventStreamingName(v string) *GetEventStreamingResponse {
	s.EventStreamingName = &v
	return s
}

func (s *GetEventStreamingResponse) SetDescription(v string) *GetEventStreamingResponse {
	s.Description = &v
	return s
}

func (s *GetEventStreamingResponse) SetSource(v *Source) *GetEventStreamingResponse {
	s.Source = v
	return s
}

func (s *GetEventStreamingResponse) SetFilterPattern(v string) *GetEventStreamingResponse {
	s.FilterPattern = &v
	return s
}

func (s *GetEventStreamingResponse) SetSink(v *Sink) *GetEventStreamingResponse {
	s.Sink = v
	return s
}

func (s *GetEventStreamingResponse) SetRunOptions(v *RunOptions) *GetEventStreamingResponse {
	s.RunOptions = v
	return s
}

func (s *GetEventStreamingResponse) SetTag(v string) *GetEventStreamingResponse {
	s.Tag = &v
	return s
}

func (s *GetEventStreamingResponse) SetStatus(v string) *GetEventStreamingResponse {
	s.Status = &v
	return s
}

/**
 * The request of listEventStreamingMetrics
 */
type ListEventStreamingMetricsRequest struct {
	EventStreamingNames []*string `json:"EventStreamingNames,omitempty" xml:"EventStreamingNames,omitempty" type:"Repeated"`
}

func (s ListEventStreamingMetricsRequest) String() string {
	return tea.Prettify(s)
}

func (s ListEventStreamingMetricsRequest) GoString() string {
	return s.String()
}

func (s *ListEventStreamingMetricsRequest) SetEventStreamingNames(v []*string) *ListEventStreamingMetricsRequest {
	s.EventStreamingNames = v
	return s
}

/**
 * The response of listEventStreamingMetrics
 */
type ListEventStreamingMetricsResponse struct {
	RequestId              *string                 `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string                 `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventStreamingMetrics  []*EventStreamingMetric `json:"EventStreamingMetrics,omitempty" xml:"EventStreamingMetrics,omitempty" require:"true" type:"Repeated"`
}

func (s ListEventStreamingMetricsResponse) String() string {
	return tea.Prettify(s)
}

func (s ListEventStreamingMetricsResponse) GoString() string {
	return s.String()
}

func (s *ListEventStreamingMetricsResponse) SetRequestId(v string) *ListEventStreamingMetricsResponse {
	s.RequestId = &v
	return s
}

func (s *ListEventStreamingMetricsResponse) SetResourceOwnerAccountId(v string) *ListEventStreamingMetricsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListEventStreamingMetricsResponse) SetEventStreamingMetrics(v []*EventStreamingMetric) *ListEventStreamingMetricsResponse {
	s.EventStreamingMetrics = v
	return s
}

/**
 * The request of search EventStreaming
 */
type ListEventStreamingsRequest struct {
	NamePrefix *string `json:"NamePrefix,omitempty" xml:"NamePrefix,omitempty"`
	SourceType *string `json:"SourceType,omitempty" xml:"SourceType,omitempty"`
	SinkType   *string `json:"SinkType,omitempty" xml:"SinkType,omitempty"`
	Limit      *int    `json:"Limit,omitempty" xml:"Limit,omitempty"`
	NextToken  *string `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
	Tag        *string `json:"Tag,omitempty" xml:"Tag,omitempty"`
}

func (s ListEventStreamingsRequest) String() string {
	return tea.Prettify(s)
}

func (s ListEventStreamingsRequest) GoString() string {
	return s.String()
}

func (s *ListEventStreamingsRequest) SetNamePrefix(v string) *ListEventStreamingsRequest {
	s.NamePrefix = &v
	return s
}

func (s *ListEventStreamingsRequest) SetSourceType(v string) *ListEventStreamingsRequest {
	s.SourceType = &v
	return s
}

func (s *ListEventStreamingsRequest) SetSinkType(v string) *ListEventStreamingsRequest {
	s.SinkType = &v
	return s
}

func (s *ListEventStreamingsRequest) SetLimit(v int) *ListEventStreamingsRequest {
	s.Limit = &v
	return s
}

func (s *ListEventStreamingsRequest) SetNextToken(v string) *ListEventStreamingsRequest {
	s.NextToken = &v
	return s
}

func (s *ListEventStreamingsRequest) SetTag(v string) *ListEventStreamingsRequest {
	s.Tag = &v
	return s
}

/**
 * The response of search EventStreaming
 */
type ListEventStreamingsResponse struct {
	RequestId              *string                  `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string                  `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
	EventStreamings        []*EBEventStreamingEntry `json:"EventStreamings,omitempty" xml:"EventStreamings,omitempty" type:"Repeated"`
	NextToken              *string                  `json:"NextToken,omitempty" xml:"NextToken,omitempty"`
	Total                  *int                     `json:"Total,omitempty" xml:"Total,omitempty"`
}

func (s ListEventStreamingsResponse) String() string {
	return tea.Prettify(s)
}

func (s ListEventStreamingsResponse) GoString() string {
	return s.String()
}

func (s *ListEventStreamingsResponse) SetRequestId(v string) *ListEventStreamingsResponse {
	s.RequestId = &v
	return s
}

func (s *ListEventStreamingsResponse) SetResourceOwnerAccountId(v string) *ListEventStreamingsResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

func (s *ListEventStreamingsResponse) SetEventStreamings(v []*EBEventStreamingEntry) *ListEventStreamingsResponse {
	s.EventStreamings = v
	return s
}

func (s *ListEventStreamingsResponse) SetNextToken(v string) *ListEventStreamingsResponse {
	s.NextToken = &v
	return s
}

func (s *ListEventStreamingsResponse) SetTotal(v int) *ListEventStreamingsResponse {
	s.Total = &v
	return s
}

/**
 * The request of PauseEventStreaming
 */
type PauseEventStreamingRequest struct {
	EventStreamingName *string `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
}

func (s PauseEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s PauseEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *PauseEventStreamingRequest) SetEventStreamingName(v string) *PauseEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

/**
 * The response of PauseEventStreaming
 */
type PauseEventStreamingResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s PauseEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s PauseEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *PauseEventStreamingResponse) SetRequestId(v string) *PauseEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *PauseEventStreamingResponse) SetResourceOwnerAccountId(v string) *PauseEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of StartEventStreaming
 */
type StartEventStreamingRequest struct {
	EventStreamingName *string `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
}

func (s StartEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s StartEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *StartEventStreamingRequest) SetEventStreamingName(v string) *StartEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

/**
 * The response of StartEventStreaming
 */
type StartEventStreamingResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s StartEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s StartEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *StartEventStreamingResponse) SetRequestId(v string) *StartEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *StartEventStreamingResponse) SetResourceOwnerAccountId(v string) *StartEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The request of UpdateEventStreaming
 */
type UpdateEventStreamingRequest struct {
	EventStreamingName *string     `json:"EventStreamingName,omitempty" xml:"EventStreamingName,omitempty" require:"true"`
	Description        *string     `json:"Description,omitempty" xml:"Description,omitempty"`
	Source             *Source     `json:"Source,omitempty" xml:"Source,omitempty"`
	FilterPattern      *string     `json:"FilterPattern,omitempty" xml:"FilterPattern,omitempty"`
	Sink               *Sink       `json:"Sink,omitempty" xml:"Sink,omitempty"`
	RunOptions         *RunOptions `json:"RunOptions,omitempty" xml:"RunOptions,omitempty"`
	Tag                *string     `json:"Tag,omitempty" xml:"Tag,omitempty"`
}

func (s UpdateEventStreamingRequest) String() string {
	return tea.Prettify(s)
}

func (s UpdateEventStreamingRequest) GoString() string {
	return s.String()
}

func (s *UpdateEventStreamingRequest) SetEventStreamingName(v string) *UpdateEventStreamingRequest {
	s.EventStreamingName = &v
	return s
}

func (s *UpdateEventStreamingRequest) SetDescription(v string) *UpdateEventStreamingRequest {
	s.Description = &v
	return s
}

func (s *UpdateEventStreamingRequest) SetSource(v *Source) *UpdateEventStreamingRequest {
	s.Source = v
	return s
}

func (s *UpdateEventStreamingRequest) SetFilterPattern(v string) *UpdateEventStreamingRequest {
	s.FilterPattern = &v
	return s
}

func (s *UpdateEventStreamingRequest) SetSink(v *Sink) *UpdateEventStreamingRequest {
	s.Sink = v
	return s
}

func (s *UpdateEventStreamingRequest) SetRunOptions(v *RunOptions) *UpdateEventStreamingRequest {
	s.RunOptions = v
	return s
}

func (s *UpdateEventStreamingRequest) SetTag(v string) *UpdateEventStreamingRequest {
	s.Tag = &v
	return s
}

/**
 * The response of UpdateEventStreaming
 */
type UpdateEventStreamingResponse struct {
	RequestId              *string `json:"RequestId,omitempty" xml:"RequestId,omitempty" require:"true"`
	ResourceOwnerAccountId *string `json:"ResourceOwnerAccountId,omitempty" xml:"ResourceOwnerAccountId,omitempty" require:"true"`
}

func (s UpdateEventStreamingResponse) String() string {
	return tea.Prettify(s)
}

func (s UpdateEventStreamingResponse) GoString() string {
	return s.String()
}

func (s *UpdateEventStreamingResponse) SetRequestId(v string) *UpdateEventStreamingResponse {
	s.RequestId = &v
	return s
}

func (s *UpdateEventStreamingResponse) SetResourceOwnerAccountId(v string) *UpdateEventStreamingResponse {
	s.ResourceOwnerAccountId = &v
	return s
}

/**
 * The detail of SourceHttpEventParameters
 */
type SourceHttpEventParameters struct {
	Type           *string   `json:"Type,omitempty" xml:"Type,omitempty" require:"true"`
	Method         []*string `json:"Method,omitempty" xml:"Method,omitempty" require:"true" type:"Repeated"`
	SecurityConfig *string   `json:"SecurityConfig,omitempty" xml:"SecurityConfig,omitempty" require:"true"`
	Ip             []*string `json:"Ip,omitempty" xml:"Ip,omitempty" type:"Repeated"`
	Referer        []*string `json:"Referer,omitempty" xml:"Referer,omitempty" type:"Repeated"`
}

func (s SourceHttpEventParameters) String() string {
	return tea.Prettify(s)
}

func (s SourceHttpEventParameters) GoString() string {
	return s.String()
}

func (s *SourceHttpEventParameters) SetType(v string) *SourceHttpEventParameters {
	s.Type = &v
	return s
}

func (s *SourceHttpEventParameters) SetMethod(v []*string) *SourceHttpEventParameters {
	s.Method = v
	return s
}

func (s *SourceHttpEventParameters) SetSecurityConfig(v string) *SourceHttpEventParameters {
	s.SecurityConfig = &v
	return s
}

func (s *SourceHttpEventParameters) SetIp(v []*string) *SourceHttpEventParameters {
	s.Ip = v
	return s
}

func (s *SourceHttpEventParameters) SetReferer(v []*string) *SourceHttpEventParameters {
	s.Referer = v
	return s
}

/**
 * The detail of ConcurrentConfig
 */
type ConcurrentConfig struct {
	Concurrency *int32 `json:"ResourceKey,omitempty" xml:"ResourceKey,omitempty" require:"true"`
}

func (s ConcurrentConfig) String() string {
	return tea.Prettify(s)
}

func (s ConcurrentConfig) GoString() string {
	return s.String()
}

func (s *ConcurrentConfig) SetConcurrency(v int32) *ConcurrentConfig {
	s.Concurrency = &v
	return s
}

type Client struct {
	Protocol       *string
	ReadTimeout    *int
	ConnectTimeout *int
	HttpProxy      *string
	HttpsProxy     *string
	NoProxy        *string
	MaxIdleConns   *int
	Endpoint       *string
	RegionId       *string
	Credential     credential.Credential
}

/**
 * Init client with Config
 * @param config config contains the necessary information to create a client
 */
func NewClient(config *Config) (*Client, error) {
	client := new(Client)
	err := client.Init(config)
	return client, err
}

func (client *Client) Init(config *Config) (_err error) {
	if tea.BoolValue(util.IsUnset(tea.ToMap(config))) {
		_err = tea.NewSDKError(map[string]interface{}{
			"code":    "ParameterMissing",
			"message": "'config' can not be unset",
		})
		return _err
	}

	_err = util.ValidateModel(config)
	if _err != nil {
		return _err
	}
	if !tea.BoolValue(util.Empty(config.AccessKeyId)) && !tea.BoolValue(util.Empty(config.AccessKeySecret)) {
		credentialType := tea.String("access_key")
		if !tea.BoolValue(util.Empty(config.SecurityToken)) {
			credentialType = tea.String("sts")
		}

		credentialConfig := &credential.Config{
			AccessKeyId:     config.AccessKeyId,
			Type:            credentialType,
			AccessKeySecret: config.AccessKeySecret,
			SecurityToken:   config.SecurityToken,
		}
		client.Credential, _err = credential.NewCredential(credentialConfig)
		if _err != nil {
			return _err
		}

	} else if !tea.BoolValue(util.IsUnset(config.Credential)) {
		client.Credential = config.Credential
	} else {
		_err = tea.NewSDKError(map[string]interface{}{
			"code":    "ParameterMissing",
			"message": "'accessKeyId' and 'accessKeySecret' or 'credential' can not be unset",
		})
		return _err
	}

	if tea.BoolValue(util.Empty(config.Endpoint)) {
		_err = tea.NewSDKError(map[string]interface{}{
			"code":    "ParameterMissing",
			"message": "'endpoint' can not be unset",
		})
		return _err
	}

	if tea.BoolValue(eventbridgeutil.StartWith(config.Endpoint, tea.String("http"))) || tea.BoolValue(eventbridgeutil.StartWith(config.Endpoint, tea.String("https"))) {
		_err = tea.NewSDKError(map[string]interface{}{
			"code":    "ParameterError",
			"message": "'endpoint' shouldn't start with 'http' or 'https'",
		})
		return _err
	}

	client.RegionId = config.RegionId
	client.Protocol = config.Protocol
	client.Endpoint = config.Endpoint
	client.ReadTimeout = config.ReadTimeout
	client.ConnectTimeout = config.ConnectTimeout
	client.HttpProxy = config.HttpProxy
	client.HttpsProxy = config.HttpsProxy
	client.MaxIdleConns = config.MaxIdleConns
	return nil
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
func (client *Client) DoRequest(action *string, protocol *string, method *string, pathname *string, query map[string]*string, body interface{}, runtime *util.RuntimeOptions) (_result map[string]interface{}, _err error) {
	_err = tea.Validate(runtime)
	if _err != nil {
		return _result, _err
	}
	_runtime := map[string]interface{}{
		"timeouted":      "retry",
		"readTimeout":    tea.IntValue(util.DefaultNumber(runtime.ReadTimeout, client.ReadTimeout)),
		"connectTimeout": tea.IntValue(util.DefaultNumber(runtime.ConnectTimeout, client.ConnectTimeout)),
		"httpProxy":      tea.StringValue(util.DefaultString(runtime.HttpProxy, client.HttpProxy)),
		"httpsProxy":     tea.StringValue(util.DefaultString(runtime.HttpsProxy, client.HttpsProxy)),
		"noProxy":        tea.StringValue(util.DefaultString(runtime.NoProxy, client.NoProxy)),
		"maxIdleConns":   tea.IntValue(util.DefaultNumber(runtime.MaxIdleConns, client.MaxIdleConns)),
		"retry": map[string]interface{}{
			"retryable":   tea.BoolValue(runtime.Autoretry),
			"maxAttempts": tea.IntValue(util.DefaultNumber(runtime.MaxAttempts, tea.Int(3))),
		},
		"backoff": map[string]interface{}{
			"policy": tea.StringValue(util.DefaultString(runtime.BackoffPolicy, tea.String("no"))),
			"period": tea.IntValue(util.DefaultNumber(runtime.BackoffPeriod, tea.Int(1))),
		},
		"ignoreSSL": tea.BoolValue(runtime.IgnoreSSL),
	}

	_resp := make(map[string]interface{})
	for _retryTimes := 0; tea.BoolValue(tea.AllowRetry(_runtime["retry"], tea.Int(_retryTimes))); _retryTimes++ {
		if _retryTimes > 0 {
			_backoffTime := tea.GetBackoffTime(_runtime["backoff"], tea.Int(_retryTimes))
			if tea.IntValue(_backoffTime) > 0 {
				tea.Sleep(_backoffTime)
			}
		}

		_resp, _err = func() (map[string]interface{}, error) {
			request_ := tea.NewRequest()
			request_.Protocol = util.DefaultString(client.Protocol, protocol)
			request_.Method = method
			request_.Pathname = pathname
			request_.Headers = map[string]*string{
				"date":                    util.GetDateUTCString(),
				"host":                    client.Endpoint,
				"accept":                  tea.String("application/json"),
				"x-acs-signature-nonce":   util.GetNonce(),
				"x-acs-signature-method":  tea.String("HMAC-SHA1"),
				"x-acs-signature-version": tea.String("1.0"),
				"x-eventbridge-version":   tea.String("2015-06-06"),
				"user-agent":              util.GetUserAgent(tea.String(" aliyun-eventbridge-sdk/1.2.0")),
			}
			if !tea.BoolValue(util.IsUnset(client.RegionId)) {
				request_.Headers["x-eventbridge-regionId"] = client.RegionId
			}

			if !tea.BoolValue(util.IsUnset(body)) {
				request_.Body = tea.ToReader(util.ToJSONString(body))
				request_.Headers["content-type"] = tea.String("application/json; charset=utf-8")
			}

			if tea.BoolValue(util.EqualString(action, tea.String("putEvents"))) {
				request_.Headers["content-type"] = tea.String("application/cloudevents-batch+json; charset=utf-8")
			}

			if !tea.BoolValue(util.IsUnset(query)) {
				request_.Query = query
			}

			accessKeyId, _err := client.Credential.GetAccessKeyId()
			if _err != nil {
				return _result, _err
			}

			accessKeySecret, _err := client.Credential.GetAccessKeySecret()
			if _err != nil {
				return _result, _err
			}

			securityToken, _err := client.Credential.GetSecurityToken()
			if _err != nil {
				return _result, _err
			}

			if !tea.BoolValue(util.Empty(securityToken)) {
				request_.Headers["x-acs-accesskey-id"] = accessKeyId
				request_.Headers["x-acs-security-token"] = securityToken
			}

			stringToSign := eventbridgeutil.GetStringToSign(request_)
			request_.Headers["authorization"] = tea.String("acs:" + tea.StringValue(accessKeyId) + ":" + tea.StringValue(eventbridgeutil.GetSignature(stringToSign, accessKeySecret)))
			response_, _err := tea.DoRequest(request_, _runtime)
			if _err != nil {
				return _result, _err
			}
			result, _err := util.ReadAsJSON(response_.Body)
			if _err != nil {
				return _result, _err
			}

			tmp := util.AssertAsMap(result)
			if tea.BoolValue(util.Is4xx(response_.StatusCode)) || tea.BoolValue(util.Is5xx(response_.StatusCode)) {
				_err = tea.NewSDKError(map[string]interface{}{
					"code":    tmp["code"],
					"message": "[EventBridgeError-" + tea.ToString(tmp["requestId"]) + "] " + tea.ToString(tmp["message"]),
					"data":    tmp,
				})
				return _result, _err
			}

			_result = tmp
			return _result, _err
		}()
		if !tea.BoolValue(tea.Retryable(_err)) {
			break
		}
	}

	return _resp, _err
}

/**
 * Publish event to the aliyun EventBus
 */
func (client *Client) PutEvents(eventList []*CloudEvent) (_result *PutEventsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &PutEventsResponse{}
	_body, _err := client.PutEventsWithOptions(eventList, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Publish event to the aliyun EventBus
 */
func (client *Client) PutEventsWithOptions(eventList []*CloudEvent, runtime *util.RuntimeOptions) (_result *PutEventsResponse, _err error) {
	for _, cloudEvent := range eventList {
		if tea.BoolValue(util.IsUnset(cloudEvent.Specversion)) {
			cloudEvent.Specversion = tea.String("1.0")
		}

		if tea.BoolValue(util.IsUnset(cloudEvent.Datacontenttype)) {
			cloudEvent.Datacontenttype = tea.String("application/json; charset=utf-8")
		}

		_err = util.ValidateModel(cloudEvent)
		if _err != nil {
			return _result, _err
		}
	}
	body := eventbridgeutil.Serialize(eventList)
	_result = &PutEventsResponse{}
	_body, _err := client.DoRequest(tea.String("putEvents"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/putEvents"), nil, body, runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
 */
func (client *Client) CreateEventBus(request *CreateEventBusRequest) (_result *CreateEventBusResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &CreateEventBusResponse{}
	_body, _err := client.CreateEventBusWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Creates a new event bus within your account. This can be a custom event bus which you can use to receive events from your custom applications and services
 */
func (client *Client) CreateEventBusWithOptions(request *CreateEventBusRequest, runtime *util.RuntimeOptions) (_result *CreateEventBusResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &CreateEventBusResponse{}
	_body, _err := client.DoRequest(tea.String("createEventBus"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/createEventBus"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
 */
func (client *Client) DeleteEventBus(request *DeleteEventBusRequest) (_result *DeleteEventBusResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DeleteEventBusResponse{}
	_body, _err := client.DeleteEventBusWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Deletes the specified custom event bus in your account,You can't delete your account's default event bus
 */
func (client *Client) DeleteEventBusWithOptions(request *DeleteEventBusRequest, runtime *util.RuntimeOptions) (_result *DeleteEventBusResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DeleteEventBusResponse{}
	_body, _err := client.DoRequest(tea.String("deleteEventBus"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/deleteEventBus"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Displays details about an event bus in your account
 */
func (client *Client) GetEventBus(request *GetEventBusRequest) (_result *GetEventBusResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &GetEventBusResponse{}
	_body, _err := client.GetEventBusWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Displays details about an event bus in your account
 */
func (client *Client) GetEventBusWithOptions(request *GetEventBusRequest, runtime *util.RuntimeOptions) (_result *GetEventBusResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &GetEventBusResponse{}
	_body, _err := client.DoRequest(tea.String("getEventBus"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/getEventBus"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
 */
func (client *Client) ListEventBuses(request *ListEventBusesRequest) (_result *ListEventBusesResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListEventBusesResponse{}
	_body, _err := client.ListEventBusesWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List all the EventBus in your account, including the default event bus, custom event buses, which meet the search criteria.
 */
func (client *Client) ListEventBusesWithOptions(request *ListEventBusesRequest, runtime *util.RuntimeOptions) (_result *ListEventBusesResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListEventBusesResponse{}
	_body, _err := client.DoRequest(tea.String("listEventBuses"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/listEventBuses"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Create an EventBus rule on Aliyun
 */
func (client *Client) CreateRule(request *CreateRuleRequest) (_result *CreateRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &CreateRuleResponse{}
	_body, _err := client.CreateRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Create an EventBus rule on Aliyun
 */
func (client *Client) CreateRuleWithOptions(request *CreateRuleRequest, runtime *util.RuntimeOptions) (_result *CreateRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &CreateRuleResponse{}
	_body, _err := client.DoRequest(tea.String("createRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/createRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Deletes the specified rule.
 */
func (client *Client) DeleteRule(request *DeleteRuleRequest) (_result *DeleteRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DeleteRuleResponse{}
	_body, _err := client.DeleteRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Deletes the specified rule.
 */
func (client *Client) DeleteRuleWithOptions(request *DeleteRuleRequest, runtime *util.RuntimeOptions) (_result *DeleteRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DeleteRuleResponse{}
	_body, _err := client.DoRequest(tea.String("deleteRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/deleteRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Disables the specified rule
 */
func (client *Client) DisableRule(request *DisableRuleRequest) (_result *DisableRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DisableRuleResponse{}
	_body, _err := client.DisableRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Disables the specified rule
 */
func (client *Client) DisableRuleWithOptions(request *DisableRuleRequest, runtime *util.RuntimeOptions) (_result *DisableRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DisableRuleResponse{}
	_body, _err := client.DoRequest(tea.String("disableRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/disableRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Enables the specified rule
 */
func (client *Client) EnableRule(request *EnableRuleRequest) (_result *EnableRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &EnableRuleResponse{}
	_body, _err := client.EnableRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Enables the specified rule
 */
func (client *Client) EnableRuleWithOptions(request *EnableRuleRequest, runtime *util.RuntimeOptions) (_result *EnableRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &EnableRuleResponse{}
	_body, _err := client.DoRequest(tea.String("enableRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/enableRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Describes the specified rule
 */
func (client *Client) GetRule(request *GetRuleRequest) (_result *GetRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &GetRuleResponse{}
	_body, _err := client.GetRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Describes the specified rule
 */
func (client *Client) GetRuleWithOptions(request *GetRuleRequest, runtime *util.RuntimeOptions) (_result *GetRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &GetRuleResponse{}
	_body, _err := client.DoRequest(tea.String("getRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/getRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List all the rules which meet the search criteria
 */
func (client *Client) ListRules(request *ListRulesRequest) (_result *ListRulesResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListRulesResponse{}
	_body, _err := client.ListRulesWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List all the rules which meet the search criteria
 */
func (client *Client) ListRulesWithOptions(request *ListRulesRequest, runtime *util.RuntimeOptions) (_result *ListRulesResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListRulesResponse{}
	_body, _err := client.DoRequest(tea.String("listRules"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/listRules"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * update the specified rule.
 */
func (client *Client) UpdateRule(request *UpdateRuleRequest) (_result *UpdateRuleResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &UpdateRuleResponse{}
	_body, _err := client.UpdateRuleWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * update the specified rule.
 */
func (client *Client) UpdateRuleWithOptions(request *UpdateRuleRequest, runtime *util.RuntimeOptions) (_result *UpdateRuleResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &UpdateRuleResponse{}
	_body, _err := client.DoRequest(tea.String("updateRule"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/updateRule"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Adds the specified targets to the specified rule
 */
func (client *Client) CreateTargets(request *CreateTargetsRequest) (_result *CreateTargetsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &CreateTargetsResponse{}
	_body, _err := client.CreateTargetsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Adds the specified targets to the specified rule
 */
func (client *Client) CreateTargetsWithOptions(request *CreateTargetsRequest, runtime *util.RuntimeOptions) (_result *CreateTargetsResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &CreateTargetsResponse{}
	_body, _err := client.DoRequest(tea.String("createTargets"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/createTargets"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Delete the specified targets from the specified rule
 */
func (client *Client) DeleteTargets(request *DeleteTargetsRequest) (_result *DeleteTargetsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DeleteTargetsResponse{}
	_body, _err := client.DeleteTargetsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Delete the specified targets from the specified rule
 */
func (client *Client) DeleteTargetsWithOptions(request *DeleteTargetsRequest, runtime *util.RuntimeOptions) (_result *DeleteTargetsResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DeleteTargetsResponse{}
	_body, _err := client.DoRequest(tea.String("deleteTargets"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/deleteTargets"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List all the Targets which meet the search criteria
 */
func (client *Client) ListTargets(request *ListTargetsRequest) (_result *ListTargetsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListTargetsResponse{}
	_body, _err := client.ListTargetsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List all the Targets which meet the search criteria
 */
func (client *Client) ListTargetsWithOptions(request *ListTargetsRequest, runtime *util.RuntimeOptions) (_result *ListTargetsResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListTargetsResponse{}
	_body, _err := client.DoRequest(tea.String("listTargets"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/listTargets"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Tests whether the specified event pattern matches the provided event
 */
func (client *Client) TestEventPattern(request *TestEventPatternRequest) (_result *TestEventPatternResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &TestEventPatternResponse{}
	_body, _err := client.TestEventPatternWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Tests whether the specified event pattern matches the provided event
 */
func (client *Client) TestEventPatternWithOptions(request *TestEventPatternRequest, runtime *util.RuntimeOptions) (_result *TestEventPatternResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &TestEventPatternResponse{}
	_body, _err := client.DoRequest(tea.String("testEventPattern"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/testEventPattern"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Tests whether the specified event pattern matches the provided event
 */
func (client *Client) QueryEventTraces(request *QueryEventTracesRequest) (_result *QueryEventTracesResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &QueryEventTracesResponse{}
	_body, _err := client.QueryEventTracesWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Query the event traces by the event Id.
 */
func (client *Client) QueryEventTracesWithOptions(request *QueryEventTracesRequest, runtime *util.RuntimeOptions) (_result *QueryEventTracesResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &QueryEventTracesResponse{}
	_body, _err := client.DoRequest(tea.String("queryEventTraces"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/queryEventTraces"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Tests whether the specified event pattern matches the provided event
 */
func (client *Client) QueryEventByEventId(request *QueryEventByEventIdRequest) (_result *QueryEventByEventIdResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &QueryEventByEventIdResponse{}
	_body, _err := client.QueryEventByEventIdWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Query the event traces by the event Id.
 */
func (client *Client) QueryEventByEventIdWithOptions(request *QueryEventByEventIdRequest, runtime *util.RuntimeOptions) (_result *QueryEventByEventIdResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &QueryEventByEventIdResponse{}
	_body, _err := client.DoRequest(tea.String("queryEventByEventId"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/queryEventByEventId"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Tests whether the specified event pattern matches the provided event
 */
func (client *Client) QueryEventsByPeriod(request *QueryEventsByPeriodRequest) (_result *QueryEventsByPeriodResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &QueryEventsByPeriodResponse{}
	_body, _err := client.QueryEventsByPeriodWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Query the event traces by the event Id.
 */
func (client *Client) QueryEventsByPeriodWithOptions(request *QueryEventsByPeriodRequest, runtime *util.RuntimeOptions) (_result *QueryEventsByPeriodResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &QueryEventsByPeriodResponse{}
	_body, _err := client.DoRequest(tea.String("queryEventsByPeriod"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/queryEventsByPeriod"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Creates a new event source within your account
 */
func (client *Client) CreateEventSource(request *CreateEventSourceRequest) (_result *CreateEventSourceResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &CreateEventSourceResponse{}
	_body, _err := client.CreateEventSourceWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Creates a new event source within your account
 */
func (client *Client) CreateEventSourceWithOptions(request *CreateEventSourceRequest, runtime *util.RuntimeOptions) (_result *CreateEventSourceResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &CreateEventSourceResponse{}
	_body, _err := client.DoRequest(tea.String("createEventSource"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/createEventSource"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Delete the event source
 */
func (client *Client) DeleteEventSource(request *DeleteEventSourceRequest) (_result *DeleteEventSourceResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DeleteEventSourceResponse{}
	_body, _err := client.DeleteEventSourceWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Delete the event source
 */
func (client *Client) DeleteEventSourceWithOptions(request *DeleteEventSourceRequest, runtime *util.RuntimeOptions) (_result *DeleteEventSourceResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DeleteEventSourceResponse{}
	_body, _err := client.DoRequest(tea.String("deleteEventSource"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/deleteEventSource"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Update the event source
 */
func (client *Client) UpdateEventSource(request *UpdateEventSourceRequest) (_result *UpdateEventSourceResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &UpdateEventSourceResponse{}
	_body, _err := client.UpdateEventSourceWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Update the event source
 */
func (client *Client) UpdateEventSourceWithOptions(request *UpdateEventSourceRequest, runtime *util.RuntimeOptions) (_result *UpdateEventSourceResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &UpdateEventSourceResponse{}
	_body, _err := client.DoRequest(tea.String("updateEventSource"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/updateEventSource"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List the user defined event source within your account
 */
func (client *Client) ListUserDefinedEventSources(request *ListUserDefinedRequest) (_result *ListUserDefinedResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListUserDefinedResponse{}
	_body, _err := client.ListUserDefinedEventSourcesWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List the user defined event source within your account
 */
func (client *Client) ListUserDefinedEventSourcesWithOptions(request *ListUserDefinedRequest, runtime *util.RuntimeOptions) (_result *ListUserDefinedResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListUserDefinedResponse{}
	_body, _err := client.DoRequest(tea.String("listUserDefinedEventSources"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/listUserDefinedEventSources"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List the aliyun official event source within your account
 */
func (client *Client) ListAliyunOfficialEventSources(request *ListAliyunOfficialRequest) (_result *ListAliyunOfficialResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListAliyunOfficialResponse{}
	_body, _err := client.ListAliyunOfficialEventSourcesWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List the aliyun official event source within your account
 */
func (client *Client) ListAliyunOfficialEventSourcesWithOptions(request *ListAliyunOfficialRequest, runtime *util.RuntimeOptions) (_result *ListAliyunOfficialResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListAliyunOfficialResponse{}
	_body, _err := client.DoRequest(tea.String("listAliyunOfficialEventSources"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/listAliyunOfficialEventSources"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Create event streaming procss
 */
func (client *Client) CreateEventStreaming(request *CreateEventStreamingRequest) (_result *CreateEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &CreateEventStreamingResponse{}
	_body, _err := client.CreateEventStreamingWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * Create event streaming procss
 */
func (client *Client) CreateEventStreamingWithOptions(request *CreateEventStreamingRequest, runtime *util.RuntimeOptions) (_result *CreateEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &CreateEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("createEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/createEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * delete event streaming
 */
func (client *Client) DeleteEventStreaming(request *DeleteEventStreamingRequest) (_result *DeleteEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &DeleteEventStreamingResponse{}
	_body, _err := client.DeleteEventStreamingWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * delete event streaming
 */
func (client *Client) DeleteEventStreamingWithOptions(request *DeleteEventStreamingRequest, runtime *util.RuntimeOptions) (_result *DeleteEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &DeleteEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("deleteEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/deleteEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) GetEventStreaming(request *GetEventStreamingRequest) (_result *GetEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &GetEventStreamingResponse{}
	_body, _err := client.GetEventStreamingWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) GetEventStreamingWithOptions(request *GetEventStreamingRequest, runtime *util.RuntimeOptions) (_result *GetEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &GetEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("getEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/getEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * List the metrics of event streaming
 */
func (client *Client) ListEventStreamingMetrics(request *ListEventStreamingMetricsRequest) (_result *ListEventStreamingMetricsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListEventStreamingMetricsResponse{}
	_body, _err := client.ListEventStreamingMetricsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * List the metrics of event streaming
 */
func (client *Client) ListEventStreamingMetricsWithOptions(request *ListEventStreamingMetricsRequest, runtime *util.RuntimeOptions) (_result *ListEventStreamingMetricsResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListEventStreamingMetricsResponse{}
	_body, _err := client.DoRequest(tea.String("listEventStreamingMetrics"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/listEventStreamingMetrics"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) ListEventStreamings(request *ListEventStreamingsRequest) (_result *ListEventStreamingsResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &ListEventStreamingsResponse{}
	_body, _err := client.ListEventStreamingsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) ListEventStreamingsWithOptions(request *ListEventStreamingsRequest, runtime *util.RuntimeOptions) (_result *ListEventStreamingsResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &ListEventStreamingsResponse{}
	_body, _err := client.DoRequest(tea.String("listEventStreamings"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/listEventStreamings"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * delete event streaming
 */
func (client *Client) PauseEventStreaming(request *PauseEventStreamingRequest) (_result *PauseEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &PauseEventStreamingResponse{}
	_body, _err := client.PauseEventStreamingWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * delete event streaming
 */
func (client *Client) PauseEventStreamingWithOptions(request *PauseEventStreamingRequest, runtime *util.RuntimeOptions) (_result *PauseEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &PauseEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("startEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/pauseEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) StartEventStreaming(request *StartEventStreamingRequest) (_result *StartEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &StartEventStreamingResponse{}
	_body, _err := client.StartEventStreamingsWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) StartEventStreamingsWithOptions(request *StartEventStreamingRequest, runtime *util.RuntimeOptions) (_result *StartEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &StartEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("startEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/startEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}

/**
 * Update event streaming procss
 */
func (client *Client) UpdateEventStreaming(request *UpdateEventStreamingRequest) (_result *UpdateEventStreamingResponse, _err error) {
	runtime := &util.RuntimeOptions{}
	_result = &UpdateEventStreamingResponse{}
	_body, _err := client.UpdateEventStreamingWithOptions(request, runtime)
	if _err != nil {
		return _result, _err
	}
	_result = _body
	return _result, _err
}

/**
 * create event streaming
 */
func (client *Client) UpdateEventStreamingWithOptions(request *UpdateEventStreamingRequest, runtime *util.RuntimeOptions) (_result *UpdateEventStreamingResponse, _err error) {
	_err = util.ValidateModel(request)
	if _err != nil {
		return _result, _err
	}
	_result = &UpdateEventStreamingResponse{}
	_body, _err := client.DoRequest(tea.String("updateEventStreaming"), tea.String("HTTP"), tea.String("POST"), tea.String("/openapi/v2/updateEventStreaming"), nil, tea.ToMap(request), runtime)
	if _err != nil {
		return _result, _err
	}
	_err = tea.Convert(_body, &_result)
	return _result, _err
}
