#include <stdio.h>

void add(int w, int s);

int main()
{
    int a = 15, b = 25;
    add(a, b); // * Actual Parameters
    return 0;
}

void add(int x, int y) // * Formal Parameters
{
    printf("Addition of %d and %d is %d", x, y, x + y);
}

// * Accept a number and print its square
// * ACCEPT A NUMBER AND PRINT FACTORS OF THAT NUMBER