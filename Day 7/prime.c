/*
 * Program to check whether number input from the user
 * is a prime number or not!
 */

#include <stdio.h>

int main () {

	int number;
	scanf("%d", &number);

	// we need to check whether the number is a prime or not
	// prime no. is the one which has only 1 and the number
	// itself as its divisors

	// ex: n = 2, 3, 5, 7, 11, 13, 17, ...

	// there are infinitely many primes!!!

	// Shubham's idea:
	// we can start a loop of 'divisor' from 2 to n/2, 
	// if the number is divisbile by divisor => no. is not prime
	// why do we check only till n/2, because
	// a number n cannot be divided by number > n/2 except itself

	int count = 0;
	for (int divisor = 2; divisor <= number/2; divisor ++) {
		if (number % divisor == 0) {
			count ++;
			printf("Number is not prime\n");
			break;
		}
	}

	if (count == 0) {
		printf("Number is prime.\n");
	}

	return 0;
}