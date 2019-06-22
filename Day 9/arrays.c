/*
 * An introduction to arrays
 * Reverse 10 numbers entered by the user
 */

#include <stdio.h>

int main () {

	// array declaration, 10 integers which are collectively
	// referred by the variable n
	int n[10];

	// the indexes start from 0 and till (size-1)
	for (int i = 0; i < 10; i ++) {
		scanf("%d", &n[i]);
	}

	for (int i = 9; i >= 0; i --) {
		printf("%d ", n[i]);
	}

	return 0;
}