#include <fstream>
#include "container.h"

namespace encryption_methods {
  void out(encryption* encr, std::ofstream& out_file);

  void out(container& cont, std::ofstream& out_file) {
    for (size_t i = 0; i < cont.len; i++) {
      out_file << i << ": ";
      out((encryption*) (cont.array[i]), out_file);
    }
  }
}
