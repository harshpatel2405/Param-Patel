#include <stdio.h>

int main()
{
    int choice;
    printf("'y' for yes\n'n' for no\nEnter your choice : ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'Y':
    case 'y':
        printf("You Want to go ahead.So you are going ahead");
        break;

    case 'N':
    case 'n':
        printf("You don't want to continue. Have a nice day");
        break;

    default:
        printf("Enter 'y' or 'n' only");
        break;
    }
    return 0;
}