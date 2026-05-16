// * print 1 to 10

#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 10; i++) // * i = 11   ->  11 <= 10 -> false
    {
        printf("%d\t",i); // * 1    2   3   4   5   6   7   8   9   10  
    }
    return 0;
}