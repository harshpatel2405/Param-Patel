// * Print odd numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}