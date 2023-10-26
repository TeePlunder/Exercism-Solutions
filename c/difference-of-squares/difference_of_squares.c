#include "difference_of_squares.h"
#include <math.h>
unsigned int square_of_sum(unsigned int number){
  unsigned int sum = 0; 

  for(unsigned int i = 0; i <= number; i++) {
    sum += i;
  }

  return pow(sum, 2);
}
