// * find prime numbers between 1 and 100

#include <stdio.h>

int main()
{
    int sp = 1000, ep = 100000;

    for (int i = sp; i <= ep; i++)
    {
        int num = i;
        int count = 0;
        for (int j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                count++;
            }
        } // * inner loop

        if (count == 2)
        {
            printf("%d\t", num);
        }
    } // * outer loop

    return 0;
}