/*
 * Program to understand usage of break statement
 * inside loops.
 */

#include <stdio.h>

int main () {

	// break during second iteration of the loop
	/*
	for (int i = 0; i < 10; i ++) {
		if (i == 1) {
			break;
		}
		printf("%d ", i);
	}
	*/

	for (int multiple = 1; multiple <= 10; multiple ++) {
		for (int number = 12; number <= 16; number ++) {
			if (number == 15) {
				break;
			}
			printf("%4d", number * multiple);
		}

		printf("\n");
	}

	// break just inside if is useless
	/*
	int n = 5;
	if (n == 6) {
		break;
	}
	*/
	
	return 0;
}