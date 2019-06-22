/*
 * An introduction to array
 */

#include <stdio.h>

int main () {

	// in the statement below, 5 is an initializer
	int ordinaryVariable = 5;

	// in the statement below, {1, 2, 3, 4, 5} is an
	// initializer list
	int n[5] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i ++) {
		printf("%d ", n[i]);
	}
	printf("\n");

	// less elements in initializer list
	int a[5] = {1, 2, 3};
	for (int i = 0; i < 5; i ++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	// we can omit the size if we know the complete initializer list
	int c[] = {1, 2, 3};
	for (int i = 0; i < 3; i ++) {
		printf("%d ", c[i]);
	}
	printf("\n");
	
	return 0;
}