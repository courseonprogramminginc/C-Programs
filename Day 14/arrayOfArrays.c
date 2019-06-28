/*
 * Program to print month name given the number (1-12)
 * using array of arrays concept in C
 */

#include <stdio.h>

int main () {

	// month_name is an array of arrays
	// it can have different length strings in each row
	char *month_names[] = {
		"January", "February", "March", "April", "May",
		"June", "July", "August", "September",
		"October", "November", "December" };
	printf("Please enter the month no (1-12): ");
	int month_no;
	scanf("%d", &month_no);

	// check for validity of the input
	if (month_no >= 1 && month_no <= 12) {
		printf("Month is: %s\n", month_names[month_no - 1]);
	} else {
		printf("Invalid input\n");
	}

	return 0;
}
