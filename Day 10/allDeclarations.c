/*
 * Program to understand how to remember
 * what different declarations mean in C
 */

#include <stdio.h>

int main () {

	int *pi; 
	// above line means that *pi is an integer
	// pi is a pointer to an integer

	int a[5]; 
	// above line means that a[5] is an integer
	// thus, a is an array of of integer

	char *argv[];
	// argv[] is a character pointer
	// what is argv?
	// it is an array of character pointers
	return 0;
}