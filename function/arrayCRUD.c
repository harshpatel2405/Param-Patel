#include <stdio.h>

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void updateArray(int arr[], int size)
{
    int choice;
    int newValue;
    int index;
    int value;
    printf("1. Index\t2. Value\nSelect Your Choice : ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Index you want to update : ");
        scanf("%d", &index);

        if (index >= 0 && index < size)
        {
            printf("Enter New Value for index %d: ", index);
            scanf("%d", &newValue);

            arr[index] = newValue;
        }
        else
        {
            printf("Enter Proper Index to be updated\n");
        }
    }
    else
    {

        printf("Enter value you want to update : ");
        scanf("%d", &value);

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == value)
            {
                printf("Enter new value : ");
                scanf("%d", &newValue);

                arr[i] = newValue;
                return;
            }
        }

        printf("Enter Proper value to be deleted\n");
    }
}

int main()
{
    int arr[] = {20, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    // * read
    readArray(arr, size);

    // * update
    updateArray(arr, size);

    readArray(arr, size);
    return 0;
}