// * perfect
// * 28 -> 1 + 2 + 4 + 7 + 14  = 28  (1 to 14)
// * 6  -> 1 + 2 + 3           = 6   (1,2,3,4,5)

// * 28 -> 1 + 2 + 4 + 7 + 14 = 28

#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d -> ", n);

    for (i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("%d + ", i);
            sum += i;
        }
    }

    printf("\b\b= %d\n", sum);

    if (sum == n)
    {
        printf("%d is perfect number", n);
    }
    else
    {
        printf("%d is not perfect number", n);
    }

    return 0;
}