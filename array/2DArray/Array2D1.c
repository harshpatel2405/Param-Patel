#include <stdio.h>

int main()
{
    int arr[3][3];
    int i , j;

    // * input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        } // * column
    } // * row    00 01 02 10 11 12 20 21 22

    // * display
    printf("Normal Printing\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
        } // * column
    } // * row   

    // * display
    printf("\nMatrix Printing\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        } // * column
        printf("\n");
    } // * row  

    return 0;
}
