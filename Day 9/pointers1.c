/*
 * lvalue expression is the one that is one the left hand side
 * of an assignment operation
 * two contexts: value context and object context
 * value context: the expression is evaluated
 * object context: we get to the memory location where the object is stored
 * lvalue expression are in object context
 */

#include <stdio.h>

int main () {

	// integer declaration
	// whenever we declare a variable, it gets some memory location	
	int x, y;

	// &x => x is an object context
	// we get the location where x resides in the memory
	// using the & operator
	// but the &x as an entire expression is in value context
	y = &x;

	// y will now store the address of the variable x

	printf("%d", y);
	return 0;
}