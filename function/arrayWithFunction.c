#include <stdio.h>

// * Sum of Array Elements
void sumOfArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    printf("Sum : %d", sum);
    a[0] = 111;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("main arr[0] : %d\n", arr[0]);

    //  without return type and with args
    // sumOfArray(arr, size);
    sumOfArray(&arr[0], size);

    printf("\nmain arr[0] : %d\n", arr[0]);
    return 0;
}

/*
#include <stdio.h>

// * Sum of Array Elements
void sumOfArray( int demo)
{
    demo =11;
}

int main()
{
    int demo = 12;

    printf("%d\n",demo);  * 12
    //  without return type and with args
    sumOfArray( demo);  * 12

    printf("%d\n",demo);

    return 0;
}

*/