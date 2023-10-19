#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index) {
  if(index <= 1){
    return 1ULL;
  }
  uint64_t value = (1ULL << index);
  return value;
}

// uint64_t total(void) {
//
// }
