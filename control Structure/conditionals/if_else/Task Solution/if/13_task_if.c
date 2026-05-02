// * Ask user for their name. If it is equal to "admin", print "Welcome Admin"

#include <stdio.h>

int main()
{
    char a, b, c, d, e;

    printf("Enter Your name : ");
    scanf(" %c %c %c %c %c", &a, &b, &c, &d, &e);

    if (a == 'a' && b == 'd' && c == 'm' && d == 'i' && e == 'n')
    {
        printf("Welcome, Admin");
    }
    else
    {
        printf("Only Admin can access");
    }
    return 0;
}