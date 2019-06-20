/*
 * Program to find sum of first n primes
 */

#include <stdio.h>

// write our own functions
// our first very own function to check whether a number is prime
// syntax:
/* functionReturnType functionName(paramterType paramterName, ...) {
		function body;		
   }
*/

int isPrime(int number) {
	for (int divisor = 2; divisor <= number/2; divisor ++) {
		if (number % divisor == 0) {
			return 0;
		}
	}
	return 1;
}

int main () {

	int n;
	scanf("%d", &n);

	int result = 0; // to store the sum of the primes
	int currentNumber = 2; // current number being checked for prime
	int countedPrimes = 0; // no of primes already counted
	while (countedPrimes < n) {
		// if current number is prime
		//   add the current no. to result if it's a prime
		// increase the current no.

		// how do we call a function?
		// functionName(function Parameters)
		if (isPrime(currentNumber) == 1) {
			result += currentNumber;
			countedPrimes ++;
		}

		currentNumber ++;
	}

	printf("%d\n", result);
	return 0;
}