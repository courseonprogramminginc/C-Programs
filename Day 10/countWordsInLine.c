/*
 * Program to count no. of words in a line
 */

#include <stdio.h>
#include <string.h>

int main () {

	/*
	 * Solution approach:
	 * Step 1: Declare a character array,
	 * 	Take the string as input,
	 *  Initialize an integer countOfWords with 0
	 * Step 2: Iterate over all the characters of the string
	 *  If you get a space, or string has terminated ('\0')
	 *  simply increment the countOfWords
	 * Step 3:
	 *  Print the variable countOfWords	
	 */

	char line[100];
	// line points to the first character in the string
	// &line doesn't make any sense
	// in scanf, we give the address where the variable is stored
	// scanf("%s", &line); => INCORRECT

	// scanf("%s", line);
	gets(line);

	// printf("Line: %s", line);

	int countOfWords = 0;
	int lengthOfLine = strlen(line);

	for (int i = 0; i < lengthOfLine; i ++) {
		if (line[i] == ' ') {
			countOfWords ++;
		}
	}
	// take care of the last word
	countOfWords ++;

	printf("Count of words in line is: %d\n", countOfWords);
	
	return 0;
}