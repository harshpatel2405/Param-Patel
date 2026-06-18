#include <stdio.h>

int main()
{
    // int arr[] = {10,20,30,40}; // * size is not mentioned, we have to provide values
    int marks[5];                      // * size is mentioned, 1. not providing values(it can be provided later)
    int age[5] = {21, 25, 36, 89, 45}; // * size is mentioned, 2. providing values

    // * print normally
    printf("%d\t", age[0]);
    printf("%d\t", age[1]);
    printf("%d\t", age[2]);
    printf("%d\t", age[3]);
    printf("%d\n", age[4]);

    // * printing using loop
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", age[i]);
    }

    // * 1. taking value from user  normally
    printf("\nEnter marks[%d] : ", 0);
    scanf("%d", &marks[0]);
    printf("Enter marks[%d] : ", 1);
    scanf("%d", &marks[1]);
    printf("Enter marks[%d] : ", 2);
    scanf("%d", &marks[2]);
    printf("Enter marks[%d] : ", 3);
    scanf("%d", &marks[3]);
    printf("Enter marks[%d] : ", 4);
    scanf("%d", &marks[4]);

    printf("%d\t", marks[0]);
    printf("%d\t", marks[1]);
    printf("%d\t", marks[2]);
    printf("%d\t", marks[3]);
    printf("%d\n\n", marks[4]);

    // * 2. taking user input using loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks[%d] : ", i);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", marks[i]);
    }

    return 0;
}