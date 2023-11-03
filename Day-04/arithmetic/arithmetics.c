#include <stdio.h>
void main() {
    
    float d = 9;
    int h = 3;

    // Multiplication (*)
    int multiply = d * h;
    printf("%d \n", multiply); // 27

    // Division(/)
    float division = d / 2; // 
    printf("%.2f \n", division); // 4.50

    // Modulus(%): it equal to remainder
    int mod1 = 12 % 8;
    int mod2 = 4763 % 4700;
    printf("%d \n", mod1); // 4
    printf("%d \n", mod2); // 63
}