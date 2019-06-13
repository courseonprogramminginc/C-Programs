/*
 * Understand the Unary operators in C
 */

#include <stdio.h>

int main() {
  
  int x = 4;

  // post increment
  int y = x++;

  printf("\nPOST INCREMENT: \n");
  printf("Value of y: %d\n", y);
  printf("Value of x: %d\n", x);

  // pre increment
  int z = ++x;

  printf("\nPRE INCREMENT: \n");
  printf("Value of z: %d\n", z);
  printf("Value of x: %d\n", x);
  return 0;	
}
