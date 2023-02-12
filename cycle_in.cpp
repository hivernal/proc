#include "cycle.h"
#include <fstream>

namespace encryption_methods {
  void in(cycle& encryption, std::ifstream& in_file) {
    in_file >> encryption.step >> encryption.first_str >> encryption.second_str;
  }
}
