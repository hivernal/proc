#include "replacing.h"

#include <fstream>

namespace encryption_methods {
  void in(replacing& encr, std::ifstream& in_file) {
    in_file >> encr.first_str >> encr.second_str;
  }
} // namespace encryption_methods
