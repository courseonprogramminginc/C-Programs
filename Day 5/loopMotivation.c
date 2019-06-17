/*
 * Program to print numbers from 1 to 10 to the screen
 */

#include <stdio.h>

int main () {

	/*
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("4\n");
	printf("5\n");
	printf("6\n");
	printf("7\n");
	printf("8\n");
	printf("9\n");
	printf("10\n");
	*/

	// variable to store the number printed to the screen
	int number = 1;

	// loop entry bounded by a condition
	// entry controlled loop, the condition is checked
	// before running the loop for the first time
	while (number <= 10) {
		// once you enter the loop
		// execute the loop body

		printf("%d\n", number);

		// update the value of number
		number += 1;
	}

	return 0;
}