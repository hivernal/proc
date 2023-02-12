#include "container.h"

#include <iostream>
#include <fstream>

namespace encryption_methods {
  void init(container& cont);
  void clear(container& cont);
  void in(container& cont, std::ifstream& in_file);
  void out(container& cont, std::ofstream& out_file);
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "incorrect command line! Waited: command infile outfile" 
              << std::endl;
    return EXIT_FAILURE;
  }
  std::ifstream in_file(argv[1]);
  if (!in_file.is_open()) {
    std::cout << "Error to open input file" << std::endl;
    return EXIT_FAILURE;
  }
  std::ofstream out_file(argv[2]);
  if (!out_file.is_open()) {
    std::cout << "Error to open output file" << std::endl;
    return EXIT_FAILURE;
  }

  std::cout << "Start"<< std::endl;
  encryption_methods::container cont;
  encryption_methods::init(cont);
  encryption_methods::in(cont, in_file);
  out_file << "Filled container. " << std::endl;
  encryption_methods::out(cont, out_file);
  encryption_methods::clear(cont);
  out_file << "Empty container. " << std::endl;
  std::cout << "Stop"<< std::endl;
  in_file.close();
  out_file.close();
  return EXIT_SUCCESS;
}
