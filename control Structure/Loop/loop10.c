// * natural number starts with 1
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    //  int / int = int
    float avg = sum / n;
    printf("Sum : %f\n", sum);
    printf("Average : %f", avg);

    return 0;
}