#include "encryption.h"

#include <fstream>

namespace encryption_methods {
  void out(const replacing& encr, std::ofstream& out_file);
  void out(const cycle& encr, std::ofstream& out_file);

  void out(const encryption* en, std::ofstream& out_file) {
    switch (en->key) {
      case encryption::REPLACING:
        out(*(replacing*) en, out_file);
        break;
      case encryption::CYCLE:
        out(*(cycle*) en, out_file);
        break;
      default:
        out_file << "Incorrect method!" << std::endl;
        break;
    }
  }
} // namespace encryption_methods
