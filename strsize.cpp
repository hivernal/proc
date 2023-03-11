#include "encryption.h"

namespace encryption_methods {
  size_t str_size(const encryption* en) {
    switch (en->key) {
      case encryption::REPLACING:
        return((replacing*) en)->first_str.size();
      case encryption::CYCLE:
        return((cycle*) en)->first_str.size();
      /* case encryption::STRTONUM:
        return((strtonum*) en)->str.size(); */
      default:
        return 0;
    }
  }
}

