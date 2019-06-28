/*
 * Program to understand constants in C
 */

#include <stdio.h>

// #define PI 3.141

int main () {

	const float PI = 3.141;
	// float const PI = 3.141;
	int radius = 3;

	// PI = 3.14; // it will generator an error, that constant cannot be modified
	float area = PI*radius*radius;
	printf("Area: %f\n", area);
	return 0;
}
