/*
 * Program to multiply numbers from 1 to n
 * using while loop
 */

#include <stdio.h>

int main () {

	// variable to store result
	int result = 1;

	int n;
	scanf("%d", &n);

	// Pseudo code:
	// result <- 1
	// number <- 1
	// while (number <= n) 
	//   multiply number to result
	//   increment number by 1

	int number = 1;
	while (number <= n) {
		result *= number;
		number ++;
	}

	printf("The product of numbers from 1 to %d is: %d\n", n, result);
	return 0;
}