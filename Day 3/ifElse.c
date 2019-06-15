/*
 * Program to understand how to use if else conditional statement in C
 */

#include <stdio.h>

int main () {

	int x;
	scanf("%d", &x);

	// x = 100
	if (x < 1 || x > 10) {
		printf("Rude message.\n");
	}
	else {
		printf("Polite message.\n");
	}
	// statement just below if
	
	return 0;
}