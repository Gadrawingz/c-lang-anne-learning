#include <stdio.h>
void main() {

    char first_name[] = "Gad";
    char last_name[] = "Iraduf.";

    // First method
    printf("%s %s \n", first_name, last_name);

    // Second method
    printf("%s ", first_name);
    printf("%s \n", last_name);
}