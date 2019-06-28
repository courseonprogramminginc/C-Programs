/*
 * Program to compute avg of three numbers
 */

#include <stdio.h>

int main () {

	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
		
	double avg = (double) (num1 + num2 + num3)/3;
	printf("Average of these numbers is: %f\n", avg);
	return 0;
}
