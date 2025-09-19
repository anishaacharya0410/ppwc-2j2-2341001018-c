//WAP to understand the use of all data types
#include <stdio.h>
#include <stdbool.h>  // For using bool type

int main() {
    // Integer type
    int age = 21;
    // Float type
    float height = 5.5;
    // Double type
    double weight = 52.75;
    // Character type
    char grade = 'A';
    // Boolean type
    bool isStudent = true;

    // Print the values
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Weight: %.2lf\n", weight);
    printf("Grade: %c\n", grade);
    printf("Is Student: %s\n", isStudent ? "true" : "false");

    return 0;
}
