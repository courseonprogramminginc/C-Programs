/*
 * C++ program to understand reference variables
 */

#include <stdio.h>

int main () {

	int var1 = 10;
	// rVar1 is a reference to var1
	int& rVar1 = var1;
	rVar1 += 10;
	// value of var1 will be changed to 20
	printf("Value of var1: %d\n", var1);
	return 0;
}
