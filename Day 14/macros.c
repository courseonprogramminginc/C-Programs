/*
 * Program to understand macros in C
 */

#include <stdio.h>

#define AREA(l, b) (l*b)
#define sqr1(y) y*y
#define sqr2(y) (y)*(y)

int main () {

	int l1 = 10, l2 = 5;
	int area = AREA(l1, l2);
	printf("Area: %d\n", area);
	
	int macro1Res = sqr1(5+3);
	int macro2Res = sqr2(5+3);
	printf("Square of (5+3) using\nMacro 1: %d\nMacro 2: %d\n", macro1Res, macro2Res);
	return 0;
}
