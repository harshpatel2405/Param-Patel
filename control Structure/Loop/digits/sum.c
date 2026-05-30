#include <stdio.h>

int main()
{
    int n = 5678;
    int sum = 0;

    while (n > 0) // * n != 0
    {
        int ld = n % 10;

        // printf("Sum = %d + %d = %d\n", sum, ld, sum + ld);
        sum += ld;

        n = n / 10;
    }

    printf("Sum = %d", sum);
    return 0;
}