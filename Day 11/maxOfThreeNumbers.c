/*
 * Function to return the maximum of three numbers
 */

// input to the function: three integers
// output of the function: integer

// declaration
// having a declaration above the #include statements is fine
// but defining the function above #include can lead to errors
// in case you are using a function which is present in those header files
// which are included below to the definition

int maxOfThree(int a, int b, int c);

#include <stdio.h>

int main () {

	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	int maximum = maxOfThree(num1, num2, num3);
	
	printf("The maximum of the three is: %d\n", maximum);
	return 0;
}

// definition below the main function
int maxOfThree(int a, int b, int c) {
	int maximum = a;

	// when can be 'b' the maximum
	if (b > maximum) {
		maximum = b;
	}

	// when can 'c' be the maximum
	if (c > maximum) {
		maximum = c;
	}

	return maximum;
}