/*
 * Program to understand bitwise operators
 */

#include <stdio.h>

int main () {

	/*
	 * What does the word bitwise mean?
	 * Basically, we are operating bit by bit on the operands
	 */

	/*
	 * Binary representation of a number
	 * 5 => 101 => 2^0 + 2^2 = 1 + 4 = 5

	 * Left shift operator
	 * helps us to multiply the number by powers of 2
	 * 0101 << 1 => 1010 => 2^3 + 2^1 = 10

	 * a << b means left shift the bits in 'a' by b ('b' times)

	 * 01010 << 1 => 10100 => 2^4 + 2^2 = 20
	 * 101 << 2 => 10100
	 */

	int number = 5;
	printf("%d", number << 2); // Expected Output: 20
	
	return 0;
}