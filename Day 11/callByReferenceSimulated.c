/*
 * Program to understand simulated call by reference.
 */

#include <stdio.h>

// in call by reference, we take the memory locations
// i.e. the references to the actual paramters
// in the formal paramters as the input

// C does not allow us to take in references as the input
// in a function, so we simulate that behavior
// by using pointers
// C supports simulated call by reference
void update(int *a, int *b) {
	*a = *a + 1;
	*b = *b + 1;
	return ;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main () {

	int val1 = 2, val2 = 4;
	update(&val1, &val2);

	printf("Updated values: \nval1: %d\nval2: %d\n", val1, val2);
	
	swap(&val1, &val2);

	printf("Swapped values: \nval1: %d\nval2: %d\n", val1, val2);
	return 0;
}