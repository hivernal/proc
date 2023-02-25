#include "encryption.h"

#include <fstream>

namespace encryption_methods {
  void in(replacing* encr, std::ifstream& in_file);
  void in(cycle* encr, std::ifstream& in_file);

  encryption* in(std::ifstream& in_file) {
    int key;
    in_file >> key;
    if (in_file.eof())
      return 0;

    replacing* r_encr;
    cycle* c_encr;
    switch (key) {
      case encryption::REPLACING:
        r_encr = new replacing;
        r_encr->key = encryption::REPLACING;
        in(r_encr, in_file);
        return (encryption*) r_encr;
      case encryption::CYCLE:
        c_encr = new cycle;
        c_encr->key = encryption::CYCLE;
        in(c_encr, in_file);
        return (encryption*) c_encr;
      default:
        return 0;
    }
  }
} // namespace encryption_methods
