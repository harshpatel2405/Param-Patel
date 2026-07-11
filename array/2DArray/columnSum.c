#include <stdio.h>

/*
1 2 3
4 5 6
7 8 9

12  15  18
   ji
1  00
4  10
7  20


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
        int columnSum = 0;
        for (int j = 0; j < c; j++)
        {
            columnSum += arr[j][i];
        }
        printf("%d\n", columnSum);
    }

    return 0;
}