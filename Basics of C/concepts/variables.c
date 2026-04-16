/*
* Variables are the containers which will store data

* every container / variable is given a name

* Rules for naming variables :
*    1. first character -  (a-z), (A-Z), _ (underscore), $ (dollar)
*    2. Second character onwards -  (a-z), (A-Z), _ (underscore), $ (dollar) , (0 - 9)
*    3. variable name should not be same as reserved 32 keywords

* datatype variable_name;
* datatype variable_name = value;
*/
#include <stdio.h>

int main()
{
    // * declaration
    int a = 12; // * initialisation
    int b;
    int c, d;
    // int #age, 1age; // *invalid variable names

    b = 45;    //* value
    c = a + b; //* formula
    d = a - c; //* formula

    // int age; // * garbage value
    int age = 22;
    float marks = 45;
    char grade = 'A';

    printf("My age is %d\n", age);
    printf("\nMy marks are %f", marks);
    printf("\nMy grade is %c", grade);
    return 0;
}