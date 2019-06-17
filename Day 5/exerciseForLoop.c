/*
 * A simple execise based on for loop
 */

#include <stdio.h>

int main () {

	int n;
	for (n = 9; n != 0; n --) {
		printf("%d ", n--);
	}

	/* When the test condition evaluates to false
	 * the loop stops
	 */

	/* Dry run: helps get a better idea
	/* For loop:
		1. Perform the initialization: n = 9
		2. Peform the check, n != 0 TRUE
		3. First execute the loop body
		   Print n-- (Postfix unary decrement) 
		   [postfix: use and update]
		   [prefix: update and use]
		   First the value of n is used, then updated
		   9 is printed
		   n = 8
		4. The loop update statement is executed
		   n = 7
		5. 7 is printed
		   n = 6 (from the loop body)
		   n = 5 (from the loop update statement)
		6. 5 is printed
		7. 3 is printed
		8. 1 is printed
		   n = 0 (from the loop body)
		   n = -1 (from the loop update)
		9. n != 0 condition is checked, it evalues to true
		   n is negative
		   Its always going to decrement
		   Loop never stops.....
		   INFINITE LOOP!!!!!!!
	*/
	return 0;
}