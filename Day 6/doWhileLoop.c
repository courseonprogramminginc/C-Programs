/*
 * Program to add numbers entered by users
 * as long as -1 is not entered
 * using do while loop.
 */

#include <stdio.h>

int main () {

	int n = 0; // variable which is input by the user
	int sum = 0;
	do {
		sum += n;
		// do body
		scanf("%d", &n);
	} while (n != -1) ;

	printf("%d\n", sum);

	// Dry run:
	// sum += 0

	// User enters n = 1
	// n != -1 => True
	// sum += 1 

	// User enters n = 2
	// n != -1 => True
	// sum += 2

	// User enters n = -1
	// n != -1 => False
	// go outside the loop, we don't add -1 now!
	return 0;
}