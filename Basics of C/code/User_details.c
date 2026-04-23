/*
Ask user for name , city and pincode and print all details on screen

p a r a m
s u r a t
*/
#include <stdio.h>

int main()
{
    char a, b, c, d, e, f, g, h, i, j;
    int pinCode;
    float salary;

    printf("Enter name : ");
    scanf(" %c %c %c %c %c", &a, &b, &c, &d, &e);

    printf("Enter city : ");
    scanf(" %c %c %c %c %c", &f, &g, &h, &i, &j);

    printf("Enter pincode and salary : ");
    scanf("%d%f", &pinCode, &salary);

    printf("Name :  %c%c%c%c%c\n", a, b, c, d, e);
    printf("City :  %c%c%c%c%c\n", f, g, h, i, j);
    printf("Pin Code :  %d\n", pinCode);
    printf("Salary :  %f\n", salary);
    return 0;
}