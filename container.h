#ifndef CONTAINER_H
#define CONTAINER_H

#include "encryption.h"

namespace encryption_methods {
  struct container {
    enum {MAX_SIZE = 100};
    int len;
    void* array[MAX_SIZE];
  };
} // namespace encryption_methods

#endif // CONTAINER_H
