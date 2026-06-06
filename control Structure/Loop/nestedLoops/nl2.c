// * factors of number between 1 and n
#include <stdio.h>

int main()
{
    int n;

    printf("Enter value for n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d - ", i);
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                printf("%d, ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
// * print multiplication of numbers between  1 to n 