// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SAMPLE_H_
#define ALIBABACLOUD_SAMPLE_H_

#include <alibabacloud/event_bridge.hpp>
#include <iostream>
#include <vector>

using namespace std;

namespace Alibabacloud_Sample {
class Client {
public:
  static Alibabacloud_EventBridge::Client createClient();
  static void
  createEventBusSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  deleteEventBusSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  getEventBusSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  listEventBusesSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  createEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  deleteEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  enableEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  disableEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  getEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  listEventRulesSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  updateEventRuleSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  testEventPattern_False(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  testEventPattern_True(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  createTargetsSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  removeTargetsSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  listTargetsSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void PutEvents(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void
  queryEventTracesSample(shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void queryEventByEventIdSample(
      shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void queryEventsByPeriodSample(
      shared_ptr<Alibabacloud_EventBridge::Client> client);
  static void main(shared_ptr<vector<string>> args);

  Client(){};
  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sample

#endif
