/*
 * Update values in structure fields
 */

#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

// passing in a pointer to turtle
void happy_birthday(turtle *t) {
    // *t.age = *t.age + 1; // THIS IS INCORRECT
    // BECAUSE IT EVALUATES TO *(t.age), But (t.age) is not a pointer
    // (*t).age = (*t).age + 1;
    t->age = t->age + 1;
    // t->age means get to the structure that t points to and 
    // fetch the age field
    printf("Happy Birthday %s! You are now %i years old!\n",
    t->name, t->age);
}

int main() {
    turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
    happy_birthday(&myrtle);
    printf("%s's age is now %i\n", myrtle.name, myrtle.age);
    return 0;
}

