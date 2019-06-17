/*
 * Program to sum numbers from 1 to n.
 */

#include <stdio.h>

int main () {

	int n;
	printf("Please enter the value of n: ");
	scanf("%d", &n);

	int sumNumbersFrom1toN = 0;

	// pseudo code:
	// result = 0
	// for number = 1 to n
	//   result = result + number
	// result now gives you the sum of numbers from 1 to n

	/* 
	 * Syntax to use a for loop:
	 * for (initialization ; test expression; update expression) {
	 *		// block of statements
	 *	}
	 */

	for (int number = 1; number <= n; number += 1) {
		// sumNumbersFrom1toN = sumNumbersFrom1toN + number
		sumNumbersFrom1toN += number;
	}

	/*
	 * Dry run:
	 * Let's say user enters n = 3
	 * sumNumbersFrom1toN = 0
	 * For LOOP:
	 *   number <- 1 // number is initialized to 1
	 *   number <= 3 // condition is true
	 *   // first the loop body is executed, then the update statement is executed
	 *   sumNumberFrom1toN <- 0 + 1 = 1
	 *   // loop body has finished
	 *   number = number + 1
	 *   number = 2
	 *   // next iteration of loop starts
	 *   number <= 3, yes it is true
	 *   sumNumbersFrom1toN <- 1 + 2 = 3
	 *   number = number + 1 = 3
	 *   // next iteration of the loop
	 *   number <= 3, true
	 *   sumNumberFrom1toN <- 3 + 3 = 6
	 *   number = number + 1 = 4
	 *   // next iteration of the loop
	 *   number <= 3, NOW THE CONDITION IS FALSE
	 *   you go out of the loop
	 */

	printf("The sum of numbers from 1 to %d: %d\n", n, sumNumbersFrom1toN);

	return 0;
}