/*
 * Defining our own
 * data types using structures
 */

#include <stdio.h>

struct fish {
	char *name;
	char *species;
	int teeth;
	int age;
};

// prints all the details of a fish
void catalog(struct fish f) {
	printf("Fish details:\n");
	// to access a particular field/attribute of a structure
	// we use the '.' operator
	// to access name : f.name
	printf("Name: %s\n", f.name);
	printf("Species: %s\n", f.species);
	printf("Teeth: %d\n", f.teeth);
	printf("Age: %d\n", f.age);
}

int main () {

	// create a variable of type fish
	struct fish snappy = {"Snappy", "SpecieA", 69, 13};
	catalog(snappy);
	return 0;
}
