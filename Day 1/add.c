/*
 * Program to add two numbers
 */

#include <stdio.h>

int add(int first, int second) {
	return first + second;
}

int main () {

	int firstNumber;
	int secondNumber;

	printf("Please enter the first number: ");
	scanf("%d", &firstNumber);

	printf("Please enter the second number: ");
	scanf("%d", &secondNumber);

	int result = add(firstNumber, secondNumber);
	printf("Sum of two numbers is: %d\n", result);
	return 0;
}