#include <stdio.h>
// Make a c Program that returns a value
int age_func() {
    int x = 45;
    return x;
}

void main() {
    // To call defined function
    int age1 = age_func();
    int age2 = age_func();

    printf("%d \n", age1);
    printf("%d \n", age2);
}