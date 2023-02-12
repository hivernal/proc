#include "cycle.h"

#include <fstream>

namespace encryption_methods {
  void in(cycle& encr, std::ifstream& in_file) {
    in_file >> encr.step >> encr.first_str >> encr.second_str;
  }
} // namespace encryption_methods
