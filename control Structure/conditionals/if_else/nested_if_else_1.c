/*
Check whether number is
    odd and negative
    odd and positive
    even and positive
    even and negative
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number  : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        if (n > 0)
        {
            printf("Even and positive");
        }
        else
        {
            printf("Even and Negative");
        }
    }
    else
    {
        if (n > 0)
        {
            printf("Odd and positive");
        }
        else
        {
            printf("Odd and Negative");
        }
    }
    return 0;
}
