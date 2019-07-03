/*
 * Program to understand calloc function
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

	// array of size N = 2000
	int N = 2000;
	char *str = (char *)calloc(N, sizeof(char));

	for (int i = 0; i <= 1000; i++) {
		if (i == 20) {
			str[i] = '\0';
		}
		else {
			str[i] = 'a';
		}
	}
	str[1001] = '\0';

	// strcpy(str, "Hello World");
	printf("String is: %s\n", str);

	return 0;
}
