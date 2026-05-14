/*
 *       Enter triangle angles a, b, c:
 *   	If valid (a + b + c = 180), check:
 *   		All equal → Equilateral
 *   		Any two equal → Isosceles
 *   		All different → Scalene
 *   		Else → Not a triangle
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three angles of triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b + c == 180)
    {
        if (a == b && a == c)   
        {
            printf("Equilateral");
        }
        else if (a == b || a == c | b == c)
        {
            printf("Isosceles");
        }
        else if (a != b && a != c)
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Not a Triangle");
    }
    return 0;
}