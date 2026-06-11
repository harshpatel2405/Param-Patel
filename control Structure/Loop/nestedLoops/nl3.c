// * find prime numbers between 1 and 100
// * find factorial of number between 1 and 100
// * find digits of numbers between 1 and 100
#include <stdio.h>

int main()
{
    int sp = 45, ep = 150;

    for (int i = sp; i <= ep; i++)
    {
        int num = i;
        printf("%d - ", num);

        int sum = 0;
        while (num > 0)
        {
            int ld = num % 10;
            printf("%d , ", ld);
            sum += ld;
            num = num / 10;
        }
        printf("\tSum = %d\n", sum);
    }
    return 0;
}