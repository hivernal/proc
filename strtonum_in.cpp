#include "strtonum.h"

#include <fstream>

namespace encryption_methods {
  void in(strtonum* encr, std::ifstream& in_file) {
    in_file >> encr->str >> encr->num;
  }
}
