#include "client-lib/client.h"

#include "glog/logging.h"

void Client::RunClientAlgorithm() {
  // Calling `heavy_lifter_` to run some long operation.
  heavy_lifter_->DoHeavyLifting();

  int result = heavy_lifter_->DoLiftingWithReturn();

  heavy_lifter_->DoLiftingWithParameter(result * result);
}
