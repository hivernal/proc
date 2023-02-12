#include "cycle.h"
#include <fstream>

namespace encryption_methods {
  void out(cycle& encryption, std::ofstream& out_file) {
    out_file << "Cycle method: step = " << encryption.step 
             << "; first string = " << encryption.first_str
             << "; second string = " << encryption.second_str << std::endl;
  }
}
