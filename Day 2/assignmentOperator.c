/*
 * Understand the assignment operators in C
 */

#include <stdio.h>

int main() {
  
  int x, y;
  printf("Please enter number1: ");
  scanf("%d", &x);
  printf("Please enter number2: ");
  scanf("%d", &y);

  // add two numbers
  int result = x + y;
  // the above statement computes the result of (x + y)
  // and assigns that result to the variable named 'addResult'

  // a += b is equivalent to a = a + b
  // a -= b is equivalent to a = a - b
  // a *= b is equivalent to a = a * b
  // a /= b is equivalent to a = a / b

  int z;
  printf("Please enter third number: ");
  scanf("%d", &z);
  
  // result = result + z;
  result += z;

  printf("Final sum of three numbers: %d\n", result);

  // unary operator: works on a single value

  // we want to add one to the result
  // result = result + 1;
  result ++;
  // result = result - 1;
  result --;
  printf("Result: %d\n", result);
  return 0;	
  	
}
