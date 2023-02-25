#include "replacing.h"

#include <fstream>

namespace encryption_methods {
  void out(const replacing& encr, std::ofstream& out_file) {
    out_file << "Replacing method: first string = " 
             << encr.first_str << "; second string = " 
             << encr.second_str << std::endl;
  }
} // namespace encryption_methods
