#ifndef MOCKED_HEAVY_LIFTER_LIB_TESTING_HEAVY_LIFTER_MOCK_H_
#define MOCKED_HEAVY_LIFTER_LIB_TESTING_HEAVY_LIFTER_MOCK_H_

#include "googlemock/include/gmock/gmock.h"
#include "googletest/include/gtest/gtest.h"
#include "mocked-heavy-lifter-lib/heavy_lifter.h"

// NOTE: the inner namespace is put under `testing`, just to not pollute the `hl` one.
namespace hl {
namespace testing {
// Mock class for HeavyLifter
class HeavyLifterMock : public HeavyLifter {
 public:
  virtual ~HeavyLifterMock() = default;

  MOCK_METHOD0(DoHeavyLifting, void());
};
}  // namespace testing
}  // namespace hl

#endif /* MOCKED_HEAVY_LIFTER_LIB_TESTING_HEAVY_LIFTER_MOCK_H_ */
