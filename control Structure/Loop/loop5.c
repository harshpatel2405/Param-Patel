// * Print cubes of numbers from 1 to 4.

/*
& cube = 3
*  i ^ cube = i*i*i
*  1 ^ 3 = 1*1*1
*  2 ^ 3 = 2*2*2
*  3 ^ 3 = 3*3*3
*  4 ^ 3 = 4*4*4
*/

#include <stdio.h>

int main()
{
    int n;
    int i;
    int power = 2;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ^ %d = %d\n", i, power, i * i * i);
    }
    return 0;
}