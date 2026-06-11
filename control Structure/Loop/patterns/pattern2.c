/*

1 2 3 4 5 j       i
*             row 1
* *           row 2
* * *         row 3
* * * *       row 4
* * * * *     row 5
*/

#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}