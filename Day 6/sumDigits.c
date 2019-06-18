/*
 * Program to find sum of digits of a number
 * using while loop
 */

#include <stdio.h>

int main () {

	// input 1234
	// 1+2+3+4 = 10

	// basically, your brain does the following:
	// sees all the digits in the number
	// and adds them up one by one

	// basically, to write a program
	// we need to loop oer all the digits in the number
	// and add them to the result variable

	// How do find out a specific digit in the number?
	// last digit => remainder when divided by 10
	// 1234 % 10 => 4, add to result, result = 4
	// 1234/10 = 123 (integer division)
	// 123 % 10 => 3, add to result, result = 4+3 = 7
	// 123/10 = 12
	// 12 % 10 => 2, add to result, result = 7+2 = 9
	// 12/10 = 1
	// 1 % 10 => 1, add to result, result = 9+1 = 10
	// 1/10 = 0 (stop at this point)

	// Pseudo code:
	// number as input
	// result <- 0
	// while (number > 0) 
	//    find the last digit (number % 10)
	//    add the last digit to the result (result += lastDigit)
	//    divide number by 10 (number /= 10)
	// print(result)

	int number;
	scanf("%d", &number);

	int result = 0;
	while (number > 0) {
		// lastDigit is a local variable
		int lastDigit = number % 10;
		result += lastDigit;
		number /= 10;
	}

	// line below won't work, the scope of variable
	// is limited to the part where it is declared

	// lastDigit is declared inside the while loop
	// so it can't be accessed outside the while loop
	// printf("%d", lastDigit);

	printf("The sum of digits in the number is: %d\n", result);
	return 0;
}