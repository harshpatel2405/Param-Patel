#include <stdio.h>

/*
row 0 - i
1 2 3   6

1 -- 00
2 -- 01
3 -- 02
     ij



4 5 6   15
7 8 9   24


*/

int main()
{
    int r = 3, c = 3;
    int arr[r][c];

    // * input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // * row sum

    for (int i = 0; i < r; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
            rowSum += arr[i][j];
        }
        printf("%d\n", rowSum);
    }

    return 0;
}