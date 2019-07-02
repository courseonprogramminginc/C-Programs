/*
 * Understanding enum and union in C
 * and also how we can use enums to
 * know which field of the union has been stored in the memory
 */

#include <stdio.h>

enum week_day_type {NUMBER, STRING};

typedef union {
	int week_no;
	char week_str[10];
} week_day;

int main () {

	// week_day_type is our custom data type
	// that can take only the values from the list declared

	enum week_day_type currentDay = STRING;
	// printf("%d", currentDay);

	week_day tuesday = {.week_str = "TUESDAY"};
	if (currentDay == STRING) {
		printf("Current day is: %s\n", tuesday.week_str);
	}
	else {
		printf(" %d\n", tuesday.week_no);
	}

	return 0;
}
