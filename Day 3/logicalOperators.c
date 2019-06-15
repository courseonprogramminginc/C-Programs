/*
 * Program to understand usage of logical operators in C.
 */

#include <stdio.h>

int main () {

	int x;
	scanf("%d", &x);

	/*
	if (x < 1) {
		printf("Rude message.\n");
	}
	if (x > 10) {
		printf("Rude message.\n");
	}
	The above piece of code has redundancy.!
	*/

	/* OR logical operator
	 * double pipe || refers to OR in C
	 */
	if (x < 1 || x > 10) {
		printf("Rude message.\n");
	}

	/* AND logical operators
	 * double ampersand && refers to AND in C
	 * think about: when can the entire condition be true?
	 * when x is in between 1 and 10
	 * let me say x is less than 1
	 * if first condition returns false
	 * do we need to check 2nd condition??
	 * only if the first condition returns true
	 * we will have to check the second one
	 */

	if (x >= 1 && x <= 10) {
		printf("Polite message.\n");
	}

	return 0;
}