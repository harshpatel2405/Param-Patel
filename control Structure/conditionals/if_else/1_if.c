// check this number is positive

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    // * both if are working indepedently
    if (n > 0)
    {
        printf("Number is Positive");
    }

    if (n < 0)
    {
        printf("Number is negative");
    }

    return 0;
}