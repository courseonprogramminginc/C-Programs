/*
 * Program to understand
 * nested structures in C
 */

#include <stdio.h>
struct exercise {
    const char *description;
    float duration;
};
struct meal {
    const char *ingredients;
    float weight;
};
struct preferences {
    struct meal food;
    struct exercise exercise;
};
struct fish {
    const char *name;
    const char *species; int teeth;
    int age;
    struct preferences care;
};

void label(struct fish f) {
	printf("Name: %s\n", f.name);
	printf("Species: %s\n", f.species);
	printf("%d years old, %d teeth\n", f.age, f.teeth);
	printf("Feed with %f lbs of %s ", f.care.food.weight, f.care.food.ingredients);
	printf("and allow to %s for %f hours.\n", f.care.exercise.description,
						f.care.exercise.duration);
	return;
}
int main () {
	// initialization has to be done in the same order
	// as declared in the structure
	struct fish snappy = {"Snappy", "Piranha", 69, 4, { {"meat", 0.2},
							{"swim in the jacuzzi", 7.5} } };
	label(snappy);
	return 0;
}
