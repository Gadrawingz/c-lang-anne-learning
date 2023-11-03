
#include <stdio.h>
void main() {
    int age = 30; // Integer variable
    float money = 6500.54; // Float variable
    char child_name[] = "Grayson"; // String variable
    char mom_name[] = "Anne";

    // Output: My name is Anne, my child is Grayson
    printf("My name is %s, my child is %s \n", mom_name, child_name);
    
    // Output: My child is called Grayson
    printf("My child is called %s \n", child_name);
    
    // Output: On bank account I have 6500.54
    printf("On bank account I have %.2f \n", money);

    // Output: I am 30 years old!
    printf("I am %d years old! \n", age);
}