
// C program to demonstrate the use of void pointers
#include <stdio.h>

int main() {
    
    int value = 45;
    
    void* my_pointer = &value;
    printf("%d \n", *(int*)my_pointer);

    return 0;
}
