/*
 * Understanding runtime memory allocation in C
 * malloc() function
 */

#include <stdio.h>
#include <stdlib.h> // malloc, calloc, realloc, all these declared in stdlib.h

int main () {

	// create an array of size = 5
	int *arr = (int *) malloc (5 * sizeof(int));
	
	// check whether malloc returned NULL => failure
	if (NULL == arr) {
		// good practice to keep constant part on left side
		// during condition checks
		printf("Not enough memory.\n");
		return 0;
	}
	for (int i = 0; i < 5; i ++) {
		arr[i] = i + 1;
	}

	// print the array
	for (int i = 0; i < 5; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// remember to free up the allocated memory during end of the program
	free(arr);
	return 0;
}

