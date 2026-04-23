// 10. Swapping two variables without using third variables
/*
^ a = 10   b = 12
^ a = 12   b = 10
*/

#include <stdio.h>

int main()
{
    int a, b;
    int temp;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b); // 10 12

    printf("Before Swapping :: \tA : %d   B : %d\n", a, b);
    temp = a; // 10
    a = b;    // 12
    b = temp; // 10
    printf("After Swapping :: \tA : %d   B : %d\n", a, b);

    return 0;
}