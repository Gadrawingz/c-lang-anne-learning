#include <stdio.h>
void main() {
    
    double some = 123123123.45;
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
    long int d = 99998L;


    printf("Value 1: %lf \n", some);  
    printf("Value 1: %i \n", size_of_int);   
    printf("Value 1: %i \n", size_of_char); 
    printf("Value 1: %i \n", size_of_double); 
}

