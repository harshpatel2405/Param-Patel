#include <stdio.h>

int main()
{
    int arr[] = {12, 651, 151, 561, 561, 651404, 4044, 5604, 500684, 84};
    int length = sizeof(arr) / sizeof(arr[0]);

    // * Find the largest element in an array.
    int max = arr[0]; // ^ 12
    for (int i = 1; i < length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max Element from array is %d\n", max);

    // * Search whether a given number exists in the array ,  Find the index of a given element , Count occurrences of a given number
    int target = 561;
    int count = 0;
    int isElementPresent = 0; // * flag (true and false)
    for (int i = 0; i < length; i++)
    {
        if (target == arr[i])
        {
            printf("Element is present at index %d\n", i);
            isElementPresent = 1; // * element is present
            count++;              // * will get all occurence of the target
            // * break -- will only give one occurence of the target
        }
    }

    if (isElementPresent == 0)
    {
        printf("No Such Element present in the array");
    }

    printf("\n%d appeared %d times", target, count);

    return 0;
}

// * HW -- 7 ,8 ,2 , 3