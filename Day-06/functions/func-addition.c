#include <stdio.h>
// Make a c Program that make a function to add numbers
void add_numbers() { // function declaration
    int a = 5;
    int b = 3;
    int s = a + b;
    printf("%d\n", s);
}

void main() {
    // To call defined function
    add_numbers();
    add_numbers();
}