#include <stdio.h>

int add();
int sum();

int main()
{
    int ans = add();
    printf("Ans : %d", ans);

    ans = sum();
    printf("\nAns : %d", ans);
    return 0;
}

int add()
{
    int a = 90, b = 70;
    int c = a + b;

    return c;
}

int sum()
{
    int i;
    int n = 10;
    int add = 0;
    for (i = 1; i <= n; i++)
    {
        add += i;
    }
    return add;
}