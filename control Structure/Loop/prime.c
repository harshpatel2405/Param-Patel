// * check whether the entered number is prime or not
// * prime number has exactly two factors -- 11 -> 1 , 11

#include <stdio.h>

int main()
{
    int n;
    int i;
    int count = 0;

    printf("Enter a number to check it is prime : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
            count++;
        }
    }

    if (count == 2)
    {
        printf("\n%d is prime", n);
    }
    else
    {
        printf("\n%d is not prime", n);
    }
    return 0;
}