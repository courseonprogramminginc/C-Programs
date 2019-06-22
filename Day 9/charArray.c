/*
 * Example of character array
 */

#include <stdio.h>

int main () {

	// specifically, null character '\0'
	// is required at the end of character array in C
	
	/*
		char name[] = {'K', 'y', 'a', 'm', 'a', ' ', 'P', 'a', 'v', 'a', 'n', 'k', 'a', 'l', 'y', 'a', 'n', '\0'};
	*/
	
	char name[] = "Kyama Pavankalyan";
	// print the first letter of the name
	printf("%c\n", name[0]);

	// print the entire name
	printf("%s\n", name);
	return 0;
}