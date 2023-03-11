#include "container.h"

namespace encryption_methods {
size_t str_size(const encryption* en);

  void sort(container& cont) {
    for (size_t i = 0; i < cont.len - 1; ++i) {
      for (size_t j = i + 1; j < cont.len; ++j) {
        if (str_size(cont.array[i]) < str_size(cont.array[j])) {
          encryption *tmp = cont.array[i];
          cont.array[i] = cont.array[j];
          cont.array[j] = tmp;
        }
      }
    }
  }
} // namespace encryption_methods
