#include "container.h"

#include <fstream>

namespace encryption_methods {
  void out(const encryption* en, std::ofstream& out_file);

  void out_filtered(const container& cont, int type, std::ofstream& out_file) {
    out_file << "Container contains " << cont.len << " elements." << std::endl;
    for (size_t i = 0; i < cont.len; ++i) {
      if (type == cont.array[i]->key) {
        out_file << i << ": ";
        out(cont.array[i], out_file);
      }
    }
  }
}
