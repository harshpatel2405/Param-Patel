#include <stdio.h>

int main()
{
    int n = 5678;
    int count = 0;

    while (n != 0) // * n > 0
    {
        count++;
        n = n / 10;
    }

    printf("Digits : %d",count);
    return 0;
}