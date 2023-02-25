#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include "replacing.h"
#include "cycle.h"

namespace encryption_methods {
  struct encryption {
    int key;
    enum {REPLACING = 1, CYCLE};
  };
} // namespace encryption_methods

#endif // ENCRYPTION_H
