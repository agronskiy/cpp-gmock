#include "client-lib/client.h"

#include "glog/logging.h"
#include "googlemock/include/gmock/gmock.h"
#include "googletest/include/gtest/gtest.h"
#include "mocked-heavy-lifter-lib/heavy_lifter.h"
#include "mocked-heavy-lifter-lib/testing/heavy_lifter_mock.h"

using hl::testing::HeavyLifterMock;

using testing::_;
using testing::DoAll;
using testing::Return;
using testing::SetArgReferee;

class TestFixture : public testing::Test {
 protected:
  void SetUp() override {
    // This creates a _mock_ version.
    heavy_lifter_ptr_.reset(new HeavyLifterMock);
  }

  static HeavyLifterMock& GetMockedObjectFromPtr(hl::HeavyLifterPtr& ptr) {
    return *dynamic_cast<HeavyLifterMock*>(ptr.get());
  }

  hl::HeavyLifterPtr heavy_lifter_ptr_;
};

TEST_F(TestFixture, CheckHeavyLiftingNoCall) {
  EXPECT_CALL(GetMockedObjectFromPtr(heavy_lifter_ptr_), DoHeavyLifting()).Times(0);

  Client obj = Client(std::move(heavy_lifter_ptr_));
}

TEST_F(TestFixture, CheckHeavyLiftingOneCall) {
  EXPECT_CALL(GetMockedObjectFromPtr(heavy_lifter_ptr_), DoHeavyLifting()).Times(1);

  Client obj = Client(std::move(heavy_lifter_ptr_));
  obj.RunClientAlgorithm();
}

int main(int argc, char** argv) {
  google::InstallFailureSignalHandler();
  testing::InitGoogleMock(&argc, argv);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
