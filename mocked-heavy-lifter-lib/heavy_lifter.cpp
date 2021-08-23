#include "mocked-heavy-lifter-lib/heavy_lifter.h"

#include "glog/logging.h"

namespace hl {
class HeavyLifterImpl final : public HeavyLifter {
 public:
  explicit HeavyLifterImpl(int some_member) : some_member_(some_member) {}

  void DoHeavyLifting() final {
    LOG(INFO) << "Doing heavy lifting with member " << some_member_ << "!";
  }

 private:
  int some_member_;
};

HeavyLifterPtr Create(int some_init_param) {
  // NOTE: the actual created object is `hl::HeavyLifterImpl`, but it is implicitly conferted
  // to the base class `hl::HeavyLifter`!
  return std::make_unique<HeavyLifterImpl>(some_init_param);
}

}  // namespace hl
