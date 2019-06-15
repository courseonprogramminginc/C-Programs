/*
 * Program to understand ASCII values
 */

#include <stdio.h>

int main () {

	char ch = 'c';

	// type cast the value of character ch into an integer value
	int asciiOfCh = ch;
	printf("%d\n", asciiOfCh);

	/*
	 * char values have an associated ASCII value
	 * a-z : 97 to 122
	 * A-Z : 65 to 90

	 * char takes one byte => 0-255 (it can hold a range of 256 values)
	 */

	return 0;
}