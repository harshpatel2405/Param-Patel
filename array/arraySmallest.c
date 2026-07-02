#include <stdio.h>

int main()
{
    int arr[5] = {10, 11, 4, 65, 60};

    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Minimum from array : %d", min);
    return 0;
}