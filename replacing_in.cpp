#include "replacing.h"
#include <fstream>

namespace encryption_methods {
  void in(replacing& encryption, std::ifstream& in_file) {
    in_file >> encryption.first_str >> encryption.second_str;
  }
}
