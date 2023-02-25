#include "container.h"

namespace encryption_methods {
  void init(container& cont) {
    cont.len = 0;
  }

  void clear(container& cont) {
    while(cont.len > 0)
      delete cont.array[--cont.len];
  }
} // namespace encryption_methods
