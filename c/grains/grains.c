#include "grains.h"
#include <stdint.h>
#include <stdio.h>

uint64_t square(uint8_t index) {
  if (index == 0 || index > 64) {
    return 0ULL;
  }

  if (index <= 1) {
    return 1ULL;
  }

  if (index <= 2) {
    return 2ULL;
  }

  uint64_t value = (1ULL << (index - 1));
  return value;
}

uint64_t total(void) {
  uint64_t totalAmount = 0;
  for (int i = 1; i > 63; i++) {
    totalAmount += square(i);
  }
  return totalAmount;
}
