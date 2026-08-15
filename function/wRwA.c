#include <stdio.h>

int sum(int n);

int main()
{
    int ans = sum(10);
    printf("Sum : %d", ans);
    return 0;
}

int sum(int n)
{
    int add = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        add += i;
    }

    return add;
}

Print sum of even numbers from 1 to n