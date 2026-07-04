#include <stdio.h>

int main()
{
    int n = 5;
    int arr[n];
    int index = -1;
    int newValue;
    int i;
    int choice;
    int value;

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("1. Update by ID\n2. Update by value\nEnter your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter index you want to update : ");
        scanf("%d", &index);
    }
    else if (choice == 2)
    {
        printf("Enter value you want to update : ");
        scanf("%d", &value);
    }

    for (i = 0; i < n; i++) // * n < n
    {
        if (index == i || value == arr[i])
        {
            printf("Enter new value : ");
            scanf("%d", &newValue);

            arr[i] = newValue;
            break;
        }
    }

    if (i == n)
    {
        printf("index/element not found");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
    return 0;
}


// * insert , delete , update , read 