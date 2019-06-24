/*
 * Program to understand array value rule
 */

#include <stdio.h>

int main () {

	// there are no array value types
	int arr[5] = {5, 10, 15, 20, 25};

	// arr is a pointer to the first element of the array

	printf("Value of arr: %d\n", *arr);

	// access the 3rd element: arr[2]
	// arr[2] is nothing but *(arr + 2)

	printf("Value of 3rd element: %d\n", *(arr + 2));

	int n = 4;
	// 5th element: arr[4]
	printf("Value of *(arr + n): %d\n", *(arr + n));

	// Can you say that *(arr + n) is equivalent to arr[n] ?
	return 0;
}