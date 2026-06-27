#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    // * 4 byte each element -- 5 elements -> 20 bytes

    // * Find the length of an array.
    // * sizeof operator -- special operator -- returns size of that element in bytes
    // printf("Array Size : %d\n", sizeof(arr));
    // printf("Int Size : %d\n", sizeof(int));
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Length of Array : %d\n", length); // & arr[0] is first element

    // * Print the array in reverse order -- simple version
    // ^ print length-1 to 0
    printf("Printing %d to 0 -- ", length - 1);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    // * Print the array in reverse order -- advanced version -- value change
    /*   0  1  2  3  4  5
        10 20 30 40 50 60

        low <= high
        low = 0, high = length - 1  -- swap  0   5
        low++ , high--   -> swap             1   4
        low++, high--    -> swap             2   3

        60 50 40 30 20 10
    */
    int low = 0;
    int high = length - 1;
    while (low <= high)
    {
        //* swap using third variable
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
    printf("\nPrinting 0 to %d -- ", length - 1);
    for (int i = 0; i <= length - 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    // * Replace the first element with 100 and print the array.
    arr[0] = 100;
    printf("\nAfter replacing first element with 100 -- ");
    for (int i = 0; i <= length - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}