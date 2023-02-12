#include "encryption.h"
#include <fstream>

namespace encryption_methods {
  void in(replacing& encryption, std::ifstream& in_file);
  void in(cycle& encryption, std::ifstream& in_file);

  encryption* in(std::fstream in_file) {
    r_encryption* r_encr;
    c_encryption* c_encr;
    int key;

    in_file >> key;
    switch (key) {
      case encryption::REPLACING:
        r_encr = new r_encryption;
        r_encr->key = encryption::REPLACING;
        in(r_encr->encryption, in_file);
        return (encryption*) r_encr;

      case encryption::CYCLE:
        c_encr = new c_encryption;
        c_encr->key = encryption::CYCLE;
        in(c_encr->encryption, in_file);
        return (encryption*) c_encr;

      default:
        return 0;
    }
  }
}
