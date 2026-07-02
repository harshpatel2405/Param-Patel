#include <stdio.h>

/*
^ 0  1  2  3  4  5  6  7
^ 10 20 30 40 50 60 70
^  9 10 20 30 40 50 60 70

7 -> 6
6 -> 5
5 -> 4
4 -> 3
3 -> 2
2 -> 1
1 -> 0

arr[0] = element;

right shift


*/

int main()
{
    // * Insert an element at the beginning.
    int n = 7;
    int element;
    int arr[n];

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // * element to add in beginning
    printf("Enter element you want to add in begining : ");
    scanf("%d", &element);

    // * right shift
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = element;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}