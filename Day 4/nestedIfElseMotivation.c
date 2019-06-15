/*
 * Program to understand nested if else in C
 */

#include <stdio.h>

int main () {

	int count; // count of no. of students
	int total; // total of marks of all the students

	printf("Enter the no. of students: ");
	scanf("%d", &count);

	printf("Enter the total of their marks: ");
	scanf("%d", &total);

	printf("Floating point value of count:%f\n", 1.0*count);
	double average = (1.0*total)/(1.0*count);
	// int average = total/count;

	printf("Average: %f\n", average);
	if (average < 80) {
		printf("The class is doing badly.\n");
	}
	else {
		printf("The class is doing good.\n");
	}

	// The above program can give unexpected output for count = 0
	return 0;
}