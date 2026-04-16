/*
* Datatype
* Format Specifiers - are used for printing values for and of datatypes
& always inside double quotes
& and its value after double quotes after a comma

* int - %d
* float - %f
* char - %c
* double - %lf

^ out of double quote of printf and we will be using variables
*/

#include <stdio.h>

int main()
{
    printf("My age is 22 + 5\n");     //& normal
    printf("My age is %d\n", 22);     //& with format specifiers
    printf("My age is %d\n", 22 + 5); //& with format specifiers

    printf("My marks are %d more than akash and now my new total is %d\n", 25, 65 + 25);

    printf("Area of rectangle with length %f cm and breadth %f cm is %f cm2\n", 12.0, 15.0, 12.0 * 15);

    printf("My grade is %c" , 'A');
    return 0;
}