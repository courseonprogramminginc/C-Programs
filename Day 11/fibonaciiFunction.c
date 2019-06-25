/*
 * Function to generate fibonacci sequence
 * [Function without return and without arguments]
 */

#include <stdio.h>

void generateFibonacci() {

	// let's ask the user for how many numbers to be printed
	int n;
	scanf("%d", &n);

	long long a = 0, b = 1;
	printf("1st fib. number: %lld\n", a);
	printf("2nd fib. number: %lld\n", b);

	long long c; // i-th fib number
	// i-th fibonacci number
	for (int i = 3; i <= n; i ++) {
		c = a + b;
		printf("%dth fib. number: %lld\n", i, c);
		// update a and b accordingly
		a = b;
		b = c;
	}

}

int main () {

	generateFibonacci();

	return 0;
}