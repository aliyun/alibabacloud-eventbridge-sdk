#include "gtest/gtest.h"
#include <darabonba/core.hpp>
#include <alibabacloud/event_bridge_util.hpp>
#include "mock.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(tests_Client, test_getStringToSign) {
  Darabonba::Request req;
  req.method = "GET";
  req.pathname = "/";

  ASSERT_EQ(string("GET\n\n\n\n/"),
            Alibabacloud_EventBridgeUtil::Client::getStringToSign(make_shared<Darabonba::Request>(req)));

  req.headers = {
      {"accept", "application/json"},
      {"content-md5", "md5"},
      {"content-type", "application/json"},
      {"date", "date"},
  };
  ASSERT_EQ(string("GET\nmd5\napplication/json\ndate\n/"),
            Alibabacloud_EventBridgeUtil::Client::getStringToSign(make_shared<Darabonba::Request>(req)));

  req.headers["x-acs-custom-key"] = "any value";
  ASSERT_EQ(string("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/"),
            Alibabacloud_EventBridgeUtil::Client::getStringToSign(make_shared<Darabonba::Request>(req)));

  req.query = {
      {"key", "val ue with space"}
  };
  ASSERT_EQ(string("GET\nmd5\napplication/json\ndate\nx-acs-custom-key:any value\n/?key=val ue with space"),
            Alibabacloud_EventBridgeUtil::Client::getStringToSign(make_shared<Darabonba::Request>(req)));
}

TEST(tests_Client, test_getSignature) {
  shared_ptr<string> stringtosign = make_shared<string>("stringtosign");
  shared_ptr<string> secret = make_shared<string>("secret");
  ASSERT_EQ(string("OmuTAr79tpI6CRoAdmzKRq5lHs0="),
            Alibabacloud_EventBridgeUtil::Client::getSignature(stringtosign, secret));
}

vector<uint8_t> string_to_bytes(const string &val) {
  vector<uint8_t> vec(val.begin(), val.end());
  return vec;
}

TEST(tests_Client, test_serialize) {
  shared_ptr<vector<shared_ptr<CloudEvent>>> events = make_shared<vector<shared_ptr<CloudEvent>>>();
  // case 1 : text content
  shared_ptr<CloudEvent> event1 = make_shared<CloudEvent>(
      map<string, boost::any>({
                                  {"datacontenttype", boost::any(string("text/plain"))},
                                  {"data", string_to_bytes("test1")}}));
  // case 2 : json with empty data
  shared_ptr<CloudEvent> event2 = make_shared<CloudEvent>(
      map<string, boost::any>({
                                  {"datacontenttype", boost::any(string("text/json"))},
                                  {"extensions",
                                   boost::any(map<string, boost::any>({{"foo", boost::any(string("bar"))}}))}}));
  // case 3 : data is json string
  shared_ptr<CloudEvent>
      event3 = make_shared<CloudEvent>(
      map<string, boost::any>({{"datacontenttype", boost::any(string("text/json"))},
                               {"data", string_to_bytes(R"({"foo":"bar"})")}}));
  // case 4 : data is non-standard json string
  shared_ptr<CloudEvent>
      event4 = make_shared<CloudEvent>(
      map<string, boost::any>({{"datacontenttype", boost::any(string("text/json"))},
                               {"data", string_to_bytes(R"(\{"foo":"bar"}\)")}}));
  // case 5 : datacontenttype is empty string
  shared_ptr<CloudEvent>
      event5 = make_shared<CloudEvent>(
      map<string, boost::any>({{"datacontenttype", boost::any(string(""))},
                               {"data", string_to_bytes("test1")}}));
  events->push_back(event1);
  events->push_back(event2);
  events->push_back(event3);
  events->push_back(event4);
  events->push_back(event5);

  boost::any res = Alibabacloud_EventBridgeUtil::Client::serialize(events);
  vector<map<string, boost::any>> result = boost::any_cast<vector<map<string, boost::any>>>(res);

  // assert case1
  map<string, boost::any> result1 = result[0];
  ASSERT_EQ(string("text/plain"),boost::any_cast<string>(result1["datacontenttype"]));
  ASSERT_EQ(string("dGVzdDE="),boost::any_cast<string>(result1["data_base64"]));

  // assert case2
  map<string, boost::any> result2 = result[1];
  ASSERT_EQ(string("text/json"),boost::any_cast<string>(result2["datacontenttype"]));
  ASSERT_EQ(string("bar"),boost::any_cast<string>(result2["foo"]));

  // assert case3
  map<string, boost::any> result3 = result[2];
  ASSERT_EQ(string("text/json"),boost::any_cast<string>(result3["datacontenttype"]));
  map<string,boost::any> data = boost::any_cast<map<string,boost::any>>(result3["data"]);
  ASSERT_EQ(string("bar"),boost::any_cast<string>(data["foo"]));

  // assert case4
  map<string, boost::any> result4 = result[3];
  ASSERT_EQ(string("text/json"),boost::any_cast<string>(result4["datacontenttype"]));
  ASSERT_EQ(string(R"(\{"foo":"bar"}\)"),boost::any_cast<string>(result4["data"]));

  // assert case5
  map<string, boost::any> result5 = result[4];
  ASSERT_EQ(string("application/json"),boost::any_cast<string>(result5["datacontenttype"]));
  ASSERT_EQ(string("test1"),boost::any_cast<string>(result5["data"]));
}

TEST(tests_Client, test_startWith) {
  shared_ptr<string> str = make_shared<string>("x-test-string");
  shared_ptr<string> sec = make_shared<string>("x-test");
  ASSERT_TRUE(Alibabacloud_EventBridgeUtil::Client::startWith(str, sec));

  sec = make_shared<string>("test-string");
  ASSERT_FALSE(Alibabacloud_EventBridgeUtil::Client::startWith(str, sec));
}
