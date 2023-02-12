#include "encryption.h"
#include <fstream>

namespace encryption_methods {
  void out(replacing& encryption, std::ofstream& out_file);
  void out(cycle& encryption, std::ofstream& out_file);

  void out(encryption* encr, std::ofstream& out_file) {
    switch (encr->key) {
      case encryption::REPLACING:
        out(((r_encryption*) encr)->encryption, out_file);
      case encryption::CYCLE:
        out(((c_encryption*) encr)->encryption, out_file);
      default:
        out_file << "Incorrect method!" << std::endl;
    }
  }
}
