/*

1 2 3 4 5 j       i
* * * * *     row 5
* * * *       row 4
* * *         row 3
* *           row 2
*             row 1
*/

#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}