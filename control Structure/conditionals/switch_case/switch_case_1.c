/*
 * 1. Summer
 * 2. Monsoon
 * 3. Winter
 * 4. Spring
 */

#include <stdio.h>

int main()
{
    int choice;

    printf("1. Summer\n2. Monsoon\n3. Winter\n4. Spring\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice) // int or char
    {
    case 2:
        printf("Season : Monsoon");
        break;
    case 3:
        printf("Season : Winter");
        break;
    case 1:
        printf("Season : Summer");
        break;
    case 4:
        printf("Season : Spring");
        break;
    default:
        printf("Select choice between 1 to 4 only");
        break;
    }
    return 0;
}