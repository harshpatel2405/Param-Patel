#include <stdio.h>

int main()
{
    float base, altitude;
    float area;

    base = 10;
    altitude = 30;

    area = base * altitude / 2;

    printf("Area Of Triangle with base %f cm and altitude %f cm is %f cm2", base, altitude, area);
    return 0;
}

// * Task : Find volume of cylinder  pi * r * r * h