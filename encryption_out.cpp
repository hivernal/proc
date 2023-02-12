#include "encryption.h"

#include <fstream>

namespace encryption_methods {
  void out(replacing& encr, std::ofstream& out_file);
  void out(cycle& encr, std::ofstream& out_file);

  void out(encryption* en, std::ofstream& out_file) {
    switch (en->key) {
      case encryption::REPLACING:
        out(((r_encryption*) en)->encr, out_file);
        break;
      case encryption::CYCLE:
        out(((c_encryption*) en)->encr, out_file);
        break;
      default:
        out_file << "Incorrect method!" << std::endl;
        break;
    }
  }
} // namespace encryption_methods
