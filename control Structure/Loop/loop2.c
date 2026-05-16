// * sum of 1 to 10

#include <stdio.h>

int main()
{
    int i;
    int sum = 0; 
    for (i = 1; i <= 10; i++)
    {
        // printf("Sum = %d + %d = %d\n",sum,  i , sum+i);
        sum = sum + i;
    }

    printf("Sum = %d",sum);
    return 0;
}