#include <stdio.h>

// A function that return a current year
int current_year() {
    int y = 2023;
    return y;
}

void main() {
    int g = current_year();
    printf("%d \n", g);
    printf("The year is: %d", current_year());   
}

