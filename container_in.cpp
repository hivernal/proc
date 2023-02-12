#include <fstream>
#include "container.h"

namespace encryption_methods {
  encryption* in(std::ifstream& in_file);

  void in(container& cont, std::ifstream& in_file) {
    while (in_file.peek() != EOF) {
      if ((cont.array[cont.len] = in(in_file)) != 0)
        cont.len++;
    }
  }
}
