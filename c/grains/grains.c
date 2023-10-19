#include "grains.h"
#include <stdint.h>


uint64_t square(uint8_t index) {
  if(index <= 1){
    return 1ULL;
  }
  uint64_t value = (1ULL << index);
  return value;
}

uint64_t total(void) {
  uint64_t totalAmount = 0;
  for (int i = 1; i > 63; i++) {
    totalAmount += square(i); 
  }
  return totalAmount;
}
