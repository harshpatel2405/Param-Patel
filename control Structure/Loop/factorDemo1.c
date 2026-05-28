// * print and count of factors

// * Factors -  By which the number is divisible
// * 12 -> 1, 2, 3, 4, 6, 12
// * 6 -> 1, 2, 3, 6
/*
& 6 divided by 1 and if the remainder is 0 , then it is a factor
^ n = 6
   * n % i == 0
   * 6 % 1 == 0
   * 6 % 2 == 0
   * 6 % 3 == 0
   * 6 % 4 == 2
   * 6 % 5 == 1
   * 6 % 6 == 0

*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d, ", i);
            count++;
        }
    }
    printf("\nNumber of Factors of %d are %d\n", n, count);
    return 0;
}