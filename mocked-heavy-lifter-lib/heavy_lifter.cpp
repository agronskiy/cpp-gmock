#include "mocked-heavy-lifter-lib/heavy_lifter.h"

#include "glog/logging.h"

namespace hl {

class HeavyLifterImpl final : public HeavyLifter {
 public:
  explicit HeavyLifterImpl(int some_member) : some_member_(some_member) {}

  void DoHeavyLifting() final {
    LOG(INFO) << "Doing heavy lifting with member " << some_member_ << "!";
  }

  int DoLiftingWithReturn() {
    const int res = 100;
    LOG(INFO) << "Doing heavy lifting and returning " << res << "!";
    return res;
  }

  void DoLiftingWithParameter(int param) {
    LOG(INFO) << "Doing heavy lifting with parameter " << param << "!";
  }

 private:
  int some_member_;
};

HeavyLifterPtr Create(int some_init_param) {
  return std::make_unique<HeavyLifterImpl>(some_init_param);
}

}  // namespace hl
