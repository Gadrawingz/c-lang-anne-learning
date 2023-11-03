/*
Make a C program stores the following values in variables and print them:
- Variable "letter_n" stores "N"
- Variable "discount" stores 600.54
- Variable "age" stores 57
*/

#include <stdio.h>
void main() {
    char letter_n = 'N';
    double discount = 600.54;
    int age = 57;
    printf("The value is: %d \n", age); // 57
    printf("%.2f \n", discount); // 600.54
    printf("%c \n", letter_n); // N
}
