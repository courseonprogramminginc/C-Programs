/*
 * Program to understand if else if ladder in C
 */

#include <stdio.h>

int main () {

	int marks;
	scanf("%d", &marks);

	if (marks >= 90) {
		printf("A grade.\n");
	}
	else if (marks < 90 && marks >= 80) {
		printf("A- grade.\n");
	}
	else if (marks < 80 && marks >= 70) {
		printf("B grade.\n");
	}
	else if (marks < 70 && marks >= 60) {
		printf("B- grade.\n");
	}
	else if (marks < 60 && marks >= 50) {
		printf("C grade.\n");
	}
	else {
		printf("D grade.\n");
	}

	return 0;
}