/*
 * Program to understand pointer arithmetic
 */

#include <stdio.h>

int main () {

	int arr[5] = {1, 2, 3, 4, 5};

	// p points to the 3rd element in the array
	int *p = &arr[2], *q;
	// p points to element 3 in the array

	printf("Value pointed by p: %d\n", *p);

	q = p + 1;
	// q now points to??? => 4th element in the array
	printf("Value pointed by q: %d\n", *q);

	*q = 100;
	// 4th element in the array gets updated to 100
	printf("Value pointed by q: %d\n", arr[3]);

	int n = 5;
	// firstPointer points to the first element
	int *firstPointer = &arr[0];

	// firstPointer + 1 points to the 2nd element
	// firstPointer + n points to (n + 1)th element!!
	int *nthPointer = firstPointer + (n-1);
	printf("The value pointed by (n-1)th pointer: %d\n", *nthPointer);

	firstPointer++;
	printf("The value pointed by firstPointer is: %d\n", *firstPointer);
	return 0;
}