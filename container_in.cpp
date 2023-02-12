#include "container.h"

#include <fstream>

namespace encryption_methods {
  encryption* in(std::ifstream& in_file);

  void in(container& cont, std::ifstream& in_file) {
    while (!in_file.eof() && cont.len < container::MAX_SIZE) {
      if ((cont.array[cont.len] = in(in_file)) != 0)
        cont.len++;
    }
  }
} // namespace encryption_methods
