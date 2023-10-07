#include "armstrong_numbers.h"
#include <math.h>

int getDigitInInt(int givenInt, int position) {
  while (--position) {
    givenInt /= 10;
  }
  return givenInt % 10;
}
bool is_armstrong_number(int toCheckNumber) {
  if (toCheckNumber < 10) {
    return true;
  }
int digit_count = log10(toCheckNumber) + 1;
    int digitCount = toCheckNumber % 10;
    int total = 0;
    while (toCheckNumber < 0){

    for (int i = 0; i < digitCount; i++) {
    }    
    }

    return false;
}
