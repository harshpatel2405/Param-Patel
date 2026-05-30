#include <stdio.h>

int main()
{
    int n = 5678;

    while (n > 0) // * n != 0
    {
        // printf("%d %% %d = %d\t\t", n, 10, n % 10);
        int ld = n % 10;
        // printf("n = %d / 10 = %d\t\t", n, n / 10);
        n = n / 10; // * n /= 10
        printf("Digit - %d\n", ld);
    }
    return 0;
}