/*
 * Program to understand usage of goto
 */

#include <stdio.h>

int main () {

	for (int i = 0; i < 10; i ++) {
		for (int j = 0; j < 10; j ++) {
			for (int k = 0; k < 10; k ++) {
				for (int l = 0; l < 10; l ++) {

					// requirement:
					// you want to terminate all the loops
					// when i = 5, j = 5, k = 5, l = 5

					if (i == 5 && j == 5 && k == 5 && l == 5) {
						// break; this will just terminate the inner loop
						goto end;
					}

				}
			}
		}
	}

	end:
	return 0;
}