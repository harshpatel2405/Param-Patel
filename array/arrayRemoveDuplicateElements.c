/*
Remove duplicate elements.

10 20 20 10 40 50 10 20

10 20 40 50
*/

#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int newArr[n];
    int k = 0;

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < k; j++)
        {
            if (arr[i] == newArr[j])
            {
                break;
            }
        }

        if (j == k)
        {
            newArr[k++] = arr[i];
        }
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d\t", newArr[i]);
    }
    return 0;
}