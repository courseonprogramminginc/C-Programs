/*
 * Function to sum all the elements in 
 * an integer array
 */

#include <stdio.h>

// array and the size both as input
int sumOfArray1(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i ++) {
		sum += arr[i];
	}
	return sum;
}

// only array as input
// can we compute the size?
int sumOfArray2(int arr[]) {
	// will the line below give the correct size?
	// sizeof(arr) returns 4 or 8 depending on the machine
	// since arr is treated like a pointer, sizeof(arr) = 4 or 8
	// 4, machine is 32 bit architecture
	// 8, machine is 64 bit
	int size = sizeof(arr)/sizeof(int);
	// size = 2
	printf("Size of function returned: %d\n", size);
	int sum = 0;
	for (int i = 0; i < size; i ++) {
		sum += arr[i];
	}
	return sum;
}

int main () {	
	
	int arr[] = {8,8,8,8,8,8,8,8};
	// will the line below give n = 8?
	int n = sizeof(arr)/sizeof(int);  
	int sum1 = sumOfArray1(arr, n);
	int sum2 = sumOfArray2(arr);
	printf("Sum from 1st function: %d\n", sum1);
	printf("Sum from 2nd function: %d\n", sum2);
	return 0;  
}

