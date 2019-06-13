/*
 * This is our first program.
 * It will print hello world to the screen.
 */

#include <stdio.h>
#include <math.h>

int main () {

	int firstVariable = - pow(2, 31);
	// firstVariable = 2;

	printf("Value of the variable is: %d\n", firstVariable);

	// integer can store 4 bytes = 32 bits
	// it can store 2^32 values!!!

	// but they also can store negative numbers
	// -(2^31) to (2^31 - 1)

	// 1 byte = 8 bits
	// every bit = either 0 or 1
	// how many possible bit combinations we have
	// for 32 bits?

	// 2 bits
	// -(2^1) to (2^1 - 1)
	// -1 to +1, -2, -1, 0, 1

	// 2 bits => 00, 01, 10, 11 (4 possible combinations)
	// 3 bits => 000, 001, 010, 011, 100, 101, 110, 111 (8 in total)
	// n bits => 2^n combinations
	return 0;
}