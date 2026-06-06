#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Row %d - ", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}

//  find factors of 112 / n
// * find factors of all numbers between 1 and n