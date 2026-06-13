/*
^ Upper Pyramid   n = 5
1 2 3 4 5 j       i          n - i
    *        row 1     4     5 - 1
   * *       row 2     3     5 - 2
  * * *      row 3     2
 * * * *     row 4     1
* * * * *    row 5     0

 * in every row how many columns are there  - i columns
 * i -> i columns
*/

#include <stdio.h>

int main()
{
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        // * space
        for(int k = 1; k <= (n-i);k++)
        {
            printf(" ");
        }

        //  * stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}