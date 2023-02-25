#include "cycle.h"

#include <fstream>

namespace encryption_methods {
  void out(const cycle& encr, std::ofstream& out_file) {
    out_file << "Cycle method: step = " << encr.step 
             << "; first string = " << encr.first_str
             << "; second string = " << encr.second_str << std::endl;
  }
} // namespace encryption_methods
