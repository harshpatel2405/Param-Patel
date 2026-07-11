#include <stdio.h>

/*
Diagonal only works on square matrix
(row = column)
1 2 3 10
4 5 6 11
7 8 9 12
1 2 3 47

1. Primary -- 1 5 9
1  -- 00
5  -- 11
9  -- 22
      ij

      i == j  -> print (logic)
1
    5
        9

2. Secondary -- 3 5 7
3 -- 02
5 -- 11
7 -- 20
     ij

     i + j == row-1



*/

int main()
{
    int r = 3, c = 3;
    int arr[r][c];
    int pSum = 0;
    int sSum = 0;

    if (r == c)
    {

        // * input
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("Enter arr[%d][%d] : ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }

        // * primary diagonal
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    printf("%d\t", arr[i][j]);
                    pSum += arr[i][j];
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("Primary Digonal Sum : %d\n", pSum);

        // * secondary diagonal
        printf("\n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                {
                    printf("%d\t", arr[i][j]);
                    sSum += arr[i][j];
                }else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
        printf("Secondary Digonal Sum : %d\n", sSum);
    }
    else
    {
        printf("It should be a square matrix");
    }
    return 0;
}