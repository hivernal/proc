#include "strtonum.h"

#include <fstream>

namespace encryption_methods {
  void out(const strtonum* encr, std::ofstream& out_file) {
    out_file << "Str to num method: string = " << encr->str 
             << "; number = " << encr->num << std::endl;
  }
}
