/*
 * Program to understand the static variables in C
 */


#include <stdio.h>

/* Function declaration */
void display();

int main() {
    
    display();
    display();
    display();
    // printf("Can we access n2: %d\n", n2);
    return 0;
}

/* Function definition */
void display() {
    int n1 = 10;
    // value of a static variable persists across different function calls
    static int n2 = 10;

    printf("Local n1 = %d, Static n2 = %d\n", n1, n2);

    n1++; // Increment local variable
    n2++; // Increment static variable
}

