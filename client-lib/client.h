#ifndef CLIENT_LIB_CLIENT_H_
#define CLIENT_LIB_CLIENT_H_

#include "mocked-heavy-lifter-lib/heavy_lifter.h"

class Client {
 public:
  Client() : heavy_lifter_(hl::Create(42)) {}

  // Version which takes ownership of the passed lifter.
  explicit Client(hl::HeavyLifterPtr&& heavy_lifter) : heavy_lifter_(std::move(heavy_lifter)) {}

  void RunClientAlgorithm();

 private:
  const hl::HeavyLifterPtr heavy_lifter_;
};

#endif /* CLIENT_LIB_CLIENT_H_ */
