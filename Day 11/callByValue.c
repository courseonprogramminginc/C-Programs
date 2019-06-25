/*
 * Program to understand call by value mechanism.
 * The actual paramters value are copied and passed
 * to the formal parameters
 * any change in the formal parameters will not get
 * reflected to the acutal parameters
 */

// declaration
// a and b are formal parameters
void update(int a, int b);

// definition
// why didn't val1 and val2 get changed?
// because value of val1 gets copied to a
// and value of val2 gets copied to b
// so any change that is happening 
// is happpening to the variables a and b 
// instead of val1 and val2
void update (int a, int b) {
	a += 1;
	b += 1;
	return ; // return nothing (void)
}

#include <stdio.h>

int main () {

	int val1 = 2, val2 = 4;
	// val1 and val2 are actual parameters
	update(val1, val2);

	printf("Updated values:\nval1: %d\nval2: %d\n", val1, val2);
	return 0;
}