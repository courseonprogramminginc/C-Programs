/*
 * A program to swap two numbers
 */

#include <stdio.h>

// Incorrect
void swap1 (int x, int y) {
	int temp;
	// to save the original value of x
	temp = x;
	// to get value of y in x
	x = y;
	// to get original x's value in y
	y = temp;
}

// Correct
void swap2(int *x, int *y) {
	int temp = *x; // c = a
	*x = *y; // a = b
	*y = temp; // b = c
}

int main () {

	int x, y;
	scanf("%d %d", &x, &y);

	// call function => function's name and the arguments to it
	// swap1(x, y);

	swap2(&x, &y);
	printf("x = %d, y = %d", x, y);

	return 0;
}