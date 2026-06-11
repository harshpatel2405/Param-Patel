/*
1 2 3 4
* * * *    1
* * * *    2
* * * *    3
* * * *    4
* * * *    5
*/

#include <stdio.h>

int main()
{
    int r = 4, c = 4;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}