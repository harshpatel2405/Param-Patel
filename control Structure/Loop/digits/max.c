#include <stdio.h>

int main()
{
    int n;
    int max;

    printf("Enter a number : ");
    scanf("%d", &n);

    max = n % 10;

    while (n > 0)
    {
        int ld = n % 10;
        if (max < ld)
        {
            max = ld;
        }
        n = n / 10;
    }

    printf("max is %d", max);
    return 0;
}