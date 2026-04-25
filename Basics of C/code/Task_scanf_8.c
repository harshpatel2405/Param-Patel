// Input time in format HH:MM and print hours and minutes separately.

#include <stdio.h>

int main()
{
    int h, m;
    printf("Enter hours and minutes in hh:mm format : ");
    scanf("%d:%d", &h, &m);

    printf("%d : %d", h, m);
    return 0;
}