#ifndef CYCLE_H
#define CYCLE_H

#include <string>

namespace encryption_methods {
  struct cycle {
    int key;
    std::string first_str;
    std::string second_str;
    int step;
    std::string owner;
  };
} // namespace encryption_methods

#endif // CYCLE_H
