#include "replacing.h"
#include <fstream>

namespace encryption_methods {
  void out(replacing& encryption, std::ofstream& out_file) {
    out_file << "Replacing method: first string = " 
             << encryption.first_str << "; second string = " 
             << encryption.second_str << std::endl;
  }
}
