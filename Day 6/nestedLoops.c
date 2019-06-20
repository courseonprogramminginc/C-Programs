/*
 * Program to print multiplication table
 * of numbers from 1 to 5 (generalized to n)
 * using nested loops.
 */

#include <stdio.h>

int main () {

	/*
		1  2  3  4  5  
		2  4  6  8  10 
		3  6  9  12 15
		4  8  12 16 20
		..
		10 20 30 40 50
	*/

	// what are we looping on?
	// print the first multiples of all numbers in the first line
	// print the second multiples of all numbers in the second line
	// ...
	// print the 10th multiple of all numbers in last line

	// outer loop: we loop on the i-th multiple (i=1 to 10)
	// inner loop: all numbers 
	
	/* 
		pseudo code:
		
		// outer loop
		for (multiple = 1 to multiple = 10) {
			// inner loop
			for (number = 1 to number = 5) {
				print(number*multiple)
			}
		}

	*/

	int n;
	scanf("%d", &n);

	// outer loop takes care of all the multiples from 1 to 10
	for (int multiple = 1; multiple <= 10; multiple ++) {

		// inner loop takes care of all numbers from 1 to n
		// %4d in the printf means that for the integer which
		// is to be replaced by %d, the amount of space
		// is fixed, i.e. 4 characters
		for (int number = 1; number <= n; number ++) {
			printf("%4d", number * multiple);
		}

		printf("\n");
	}

	return 0;
}