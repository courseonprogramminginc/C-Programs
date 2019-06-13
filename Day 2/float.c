#include <stdio.h>

int main() {
   float c = 5.0;
   printf ("Temperature in Fahrenheit is %f", (9/5.0)*c + 32);
   // if the operands are integers
   // division will perform integer division
   // Mathematically, 9/5 = 1.8, it will truncate the value after decimal point
   // In C: 9/5 = 1
   return 0;
}
