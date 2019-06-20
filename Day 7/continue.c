/*
 * Program to understand usage of continue statement
 * inside loops.
 */

#include <stdio.h>

int main () {

	// sum of even numbers from 1 to n

	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int number = 1; number <= n; number ++) {
		// number is odd
		if (number % 2 == 1) {
			continue;
			// if the above line is executed,
			// rest of the loop is skipped
			// and we move to next iteration
		} 
		sum += number;
	}

	printf("%d\n", sum);
	return 0;
}