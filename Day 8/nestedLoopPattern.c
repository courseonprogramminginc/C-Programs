/*
 * A program to print the pattern:
 		*
 		* * 
 		* * *
 		....
 */

#include <stdio.h>

int main () {

	int n;
	scanf("%d", &n);

	/* Using nested loops:
	 *  // outer loop: number of rows
	 *	for (int i = 1; i <= n; i ++) {
	 *		// inner loop: print i character
	 *		for (int j = 1; j <= i; j ++) {
	 *			printf("* ");
	 *		}
	 *		// after i-th row is printed entirely, we need to print '\n'
	 *		printf("\n");
	 * 	}
	*/

	// Using just one loop

	int lineNo = 1;
	int count = 0;
	while (lineNo <= n) {
		if (count < lineNo) {
			printf("* ");
			count ++;
		} else {
			printf("\n");
			count = 0;
			lineNo ++;
		}
	}

	return 0;
}