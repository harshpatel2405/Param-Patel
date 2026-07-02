#include <stdio.h>

/*
^ 0  1  2  3  4  5  6  
^ 10 20 30 40 50 60 70
^ 10 20 40 50 60 70

left shift 
i -> i + 1
2 -> 3
3 -> 4
4 -> 5
5 -> 6

n-1



*/

int main()
{
    // * delete an element
    int n = 7;
    int index;
    int arr[n];

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    // * element to add in beginning
    printf("Enter index you want to delete : ");
    scanf("%d", &index);

    // * left shift
    for (int i = index; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}