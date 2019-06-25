/*
 * Program to understand recursion 
 */

#include <stdio.h>

// Never ending recursive function!!
void recNeverEnding() {
	// printf("1");
	recNeverEnding();
}

// recursive function to print all natural numbers
// from 1 to n
void printAllNaturalNumbers(int n) {
	// base condition, tell us when to terminate the 
	// sequence of recursive calls
	if (n <= 0) {
		return ;
	}
	printf("%d\n", n);
	printAllNaturalNumbers(n - 1);
}

int main () {

	// recNeverEnding();
	int n = 10;
	printAllNaturalNumbers(n);

	return 0;
}