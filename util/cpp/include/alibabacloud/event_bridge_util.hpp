// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EVENTBRIDGEUTIL_H_
#define ALIBABACLOUD_EVENTBRIDGEUTIL_H_

#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <iostream>

using namespace std;

namespace Alibabacloud_EventBridgeUtil {
class Client {
public:
  static string getStringToSign(shared_ptr<Darabonba::Request> request);
  static string getSignature(shared_ptr<string> stringToSign,
                             shared_ptr<string> secret);
  static boost::any serialize(const shared_ptr<void> &events);
  static bool startWith(shared_ptr<string> origin, shared_ptr<string> prefix);

  Client(){};
};
} // namespace Alibabacloud_EventBridgeUtil

#endif
