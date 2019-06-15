/*
 * Program to understand how to use if conditional statement in C
 */

#include <stdio.h>

int main () {

	/*
	 * Syntax of If statement:
	 * if (condition) {
		// block of statements
	 }
	 */

	int marks;
	printf("Please enter the marks: ");
	scanf("%d", &marks);

	// if marks > 95
	if (marks > 95) {
		printf("Students is brilliant.\n");
	}

	// if marks < 30
	if (marks < 30) {
		printf("Student is poor.\n");
	}

	// if marks >= 30 and marks <= 95
	if (marks >= 30 && marks <= 95) {
		printf("Student is average.\n");
	}

	return 0;
}