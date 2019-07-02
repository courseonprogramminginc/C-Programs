/*
 * Using void pointers to create a generic function
 */

// TRY TO DEBUG THIS PROGRAM, IT GIVES INCORRECT OUTPUT

#include <stdio.h>

// add function takes in two numbers and prints the result
// type = 1 => int, type = 2 => float
void add(void *num1, void *num2, int type) {
	if (type == 1) {
		int val1 = *((int *)num1);
		int val2 = *((int *)num2);
		printf("The sum is: %d\n", val1 + val2);
	} else if (type == 2) {
		float val1 = *((float *)num1);
		float val2 = *((float *)num2);
		printf("The sum is: %f\n", val1 + val2);
	}
	return ;
}

int main () {
	void *a, *b, *c, *d;

	int num1 = 2;
	a = &num1;

	int num2 = 3;
	b = &num2;

	float num1f = 2.35;
	float num2f = 5.1;
	c = &num1f;
	d = &num2f;

	// add two integers
	add(&a, &b, 1);
	// add two floats
	add(&c, &d, 2);

	return 0;
}
