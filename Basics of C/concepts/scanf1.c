#include <stdio.h>

// * scanf("%d", &age);  -- input
// * & -> ampersand (address of)

// * it is a int data type and store the value given by user in the address of age variable
// * printf("%d", age);  -- fetch / get the value of the variable

int main()
{
    int age;
    float marks;
    char grade;

    printf("Enter your age : ");
    scanf("%d", &age);

    printf("Enter your marks : ");
    scanf("%f", &marks);

    printf("\nYour age is %d\n", age);
    printf("Your marks are %f\n", marks);

    // *  you can take input anywhere in the program 

    printf("Enter Grade : ");
    scanf(" %c", &grade);
    // scanf("%c", &grade); // enter, tab , space

    printf("Your grade is %c", grade);
    return 0;
}