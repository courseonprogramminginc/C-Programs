/*
 * Program to understand data types in C
 */

#include <stdio.h>

int main () {

	int x = 3;

	printf("int: %d\n", x);

	char ch = 'Z';
	printf("char: %c\n", ch);

	double d = 32.515512515151515213131312321412412412421412412451245151241231234214521351535324123424234452352523;
	printf("double: %f\n", d);

	float f = 32.515512515151515213131312321412412412421412412451245151241231234214521351535324123424234452352523;
	printf("float: %f\n", f);

	printf("Printing the size of the variables:\n\n");
	printf("size of int: %lu\n", sizeof(x));
	printf("size of char: %lu\n", sizeof(ch));
	printf("size of float: %lu\n", sizeof(d));
	printf("size of double: %lu\n", sizeof(f));
	return 0;
}