/*
 * Understand the Logical operators in C
 */

#include <stdio.h>

int main() {
  
  int x = 4;

  int y = 3;

  // (expression 1) == (expression 2)
  // this means we are checking whether both give the same result
  int z = (x == y);
  printf("X equals Y: %d\n", z);

  return 0;	
}
