#ifndef MOCKED_HEAVY_LIFTER_LIB_HEAVY_LIFTER_H_
#define MOCKED_HEAVY_LIFTER_LIB_HEAVY_LIFTER_H_

#include <memory>

namespace hl {

class HeavyLifter {
 public:
  // NOTE: requires definition! Destructor can't be pure virtual.
  virtual ~HeavyLifter() = default;

  // Actual pure virtual interface.
  virtual void DoHeavyLifting() = 0;

  virtual int DoLiftingWithReturn() = 0;

  virtual void DoLiftingWithParameter(int) = 0;
};

using HeavyLifterPtr = std::unique_ptr<HeavyLifter>;

HeavyLifterPtr Create(int some_init_param);

}  // namespace hl

#endif /* MOCKED_HEAVY_LIFTER_LIB_HEAVY_LIFTER_H_ */
