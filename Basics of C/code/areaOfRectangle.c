#include <stdio.h>

int main()
{
    int length, breadth;
    int area;

    printf("Enter length and breadth : ");
    scanf("%d%d", &length, &breadth);

    area = length * breadth;

    printf("Area Of Rectangle with length %d cm and width %d cm is %d cm2", length, breadth, area);
    return 0;
}