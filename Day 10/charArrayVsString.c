/*
 * Program to understand difference between
 * character array and string
 */

#include <stdio.h>
#include <string.h>

int main () {

	// char array need not have NULL character at the end
	// but string in C should have a NULL character '\0' at the end

	// string
	char hello[] = "hello";

	// print it to the user
	// printf("%s\n", hello);

	char name[100];
	// how to take string as input from the user?
	scanf("%s", &name);

	printf("%s %s!\n", hello, name);

	printf("Length of your name is: %d\n", strlen(name));
	return 0;
}