// * Enter a character. If it is a digit (0–9), print "It is a digit"

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);

    if(ch >= '0' && ch <= '9') // * ASCII (ch >= 48 && ch <= 57)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;
}