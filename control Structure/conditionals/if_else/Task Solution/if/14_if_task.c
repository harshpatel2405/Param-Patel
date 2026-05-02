// *  Input 2 angles of a triangle. If their sum is < 180, print "Third angle possible"

#include <stdio.h>

int main()
{
    int angle1, angle2;

    printf("Enter two angles of triangle : ");
    scanf("%d%d", &angle1, &angle2);

    int sum = angle1 + angle2;

    if (sum < 180)
    {
        printf("Third Angle Possible of %d degree", (180 - sum));
    }
    else
    {
        printf("Third Angle , not possible. ");
    }

    return 0;
}