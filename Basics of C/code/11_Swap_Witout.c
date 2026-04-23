#include <stdio.h>

int main()
{
    int a, b;
    int temp;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b); // 10 12

    printf("Before Swapping :: \tA : %d   B : %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping :: \tA : %d   B : %d\n", a, b);

    return 0;
}