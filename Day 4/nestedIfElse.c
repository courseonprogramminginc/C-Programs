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

	// nested if else
	if (count > 0) {
		double average = (1.0*total)/(1.0*count);
		// the below if else is nested inside the above if
		if (average < 80) 
			printf("The class is doing badly.\n");
		else 
			printf("The class is doing good.\n");
	}
	else 
		printf("No students in the class.\n");
	
	return 0;
}