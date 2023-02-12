#include "container.h"

namespace encryption_methods {
  void init(container& cont) {
    cont.len = 0;
  }

  void clear(container& cont) {
    for (int i; i < cont.len; ++i)
      delete (encryption*) cont.array[i];
    cont.len = 0;
  }
}
