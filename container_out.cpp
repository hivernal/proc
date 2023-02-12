#include "container.h"

#include <fstream>

namespace encryption_methods {
  void out(encryption* en, std::ofstream& out_file);

  void out(container& cont, std::ofstream& out_file) {
    out_file << "Container contains " << cont.len << " elements." << std::endl;
    for (size_t i = 0; i < cont.len; ++i) {
      out_file << i << ": ";
      out((encryption*) (cont.array[i]), out_file);
    }
  }
}
