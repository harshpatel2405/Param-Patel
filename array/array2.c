#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // * sum and multiplication of array elements
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mul *= arr[i];
    }

    // * print odd elements of array 
    // * print even elements of array 

    printf("Sum : %d\n", sum);
    printf("Multiplication : %d\n", mul);

    // * display
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}