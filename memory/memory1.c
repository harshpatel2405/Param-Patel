#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    // 4 int blocks are allocated in memory -- unitialised  -- garbage
    // ptr = (int *)malloc(4 * sizeof(int));
    ptr = (int *)calloc(4, sizeof(int));

    printf("Ptr : %d\n", *(ptr + 0));
    printf("Ptr : %d\n", *(ptr + 1));
    printf("Ptr : %d\n", *(ptr + 2));
    printf("Ptr : %d\n", *(ptr + 3));

    printf("Enter element : ");
    scanf("%d", &ptr[0]);
    scanf("%d", &ptr[1]);
    scanf("%d", &ptr[2]);
    scanf("%d", &ptr[3]);

    printf("Ptr : %d\n", *(ptr + 0));
    printf("Ptr : %d\n", *(ptr + 1));
    printf("Ptr : %d\n", *(ptr + 2));
    printf("Ptr : %d\n", *(ptr + 3));

    ptr = (int *)realloc(ptr, 6 * sizeof(int));

    free(ptr);

    return 0;
}