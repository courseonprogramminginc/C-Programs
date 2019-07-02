/*
 * Program to understand void pointers in C
 */

#include <stdio.h>

int main () {

	void *ptr;
	int a = 3;
	// make the pointer ptr point to an integer
	ptr = &a;
	// must type case void pointer to dereference it
	printf("The value stored in object pointed by ptr is: %d\n",*((int*)ptr));
	return 0;
}
