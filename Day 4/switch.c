/*
 * Program to understand switch case statements
 */

#include <stdio.h>

int main () {

	int dayNumber;
	scanf("%d", &dayNumber);

	/*
		if (dayNumber == 1) {
			printf("Its a Monday, funday!"\n);
		}
		else if (dayNumber == 2) {
			printf("Tuesday!\n");
		}
		else if (dayNumber == 3) {
			printf("Wednesday\n");
		}
		else if (dayNumber == 4) {
			printf("Thursday\n");
		}...
	*/

	// Switch case statements
	switch(dayNumber) {
		case 1:
			printf("Monday!\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("You have entered invalid day number.!\n");
			break;
	}

	return 0;
}