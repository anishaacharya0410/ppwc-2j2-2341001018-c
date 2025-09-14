//write a program in c to show all the datatypes in one code
#include <stdio.h>
#include <stdbool.h>  // For using bool type

int main() {
    // data types
    int myInt = 10;
    float myFloat = 3.14;
    double myDouble = 2.71828;
    char myChar = 'A';
    bool myBool = true;

    // Displaying values and sizes
    printf("Integer: %d (Size: %zu bytes)\n", myInt, sizeof(myInt));
    printf("Float: %f (Size: %zu bytes)\n", myFloat, sizeof(myFloat));
    printf("Double: %lf (Size: %zu bytes)\n", myDouble, sizeof(myDouble));
    printf("Character: %c (Size: %zu bytes)\n", myChar, sizeof(myChar));
    printf("Boolean: %d (Size: %zu bytes)\n", myBool, sizeof(myBool));

    return 0;
}