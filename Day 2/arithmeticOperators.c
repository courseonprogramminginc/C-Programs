/*
 * Understand the arithmetic operators in C
 */

#include <stdio.h>

int main() {
  
  int x, y;
  printf("Please enter number1: ");
  scanf("%d", &x);
  printf("Please enter number2: ");
  scanf("%d", &y);

  // add two numbers
  int addResult = x + y;

  // subtract two numbers
  int subtractResult = x - y;

  // multiply the numbers
  int multiplyResult = x * y;

  // divide the numbers
  int divideResult = x / y;

  printf("Add: %d\n, Subtract: %d\n, Multiply: %d\n, Divide: %d\n", addResult, subtractResult, multiplyResult, divideResult);

  int moduloResult = x % y;
  printf("Remainder of x divided by y: %d\n", moduloResult);

  return 0;	
  	
}
