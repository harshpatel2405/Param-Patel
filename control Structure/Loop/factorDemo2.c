// * sum and multiplication of factors of n

#include <stdio.h>

int main()
{
    int n;
    int i;
    int sum = 0;
    int mul = 1;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            mul *= i;
        }
    }

    printf("Sum of Factors of %d are %d\n",n, sum);
    printf("Multiplication of Factors of %d are %d\n",n, mul);
    return 0;
}