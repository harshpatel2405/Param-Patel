// * task : ask a number from user and check whether that number is armstrong or not
// 153 => 1^3 + 5^3 + 3^3
#include <stdio.h>

int armstrong(int num);
int calculateNumberOfDigits(int num);
int basePower(int, int);

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    int ans = armstrong(n); // * With return and with args
    if (ans == n)
        printf("%d is armstrong", n);
    else
        printf("%d is not armstrong", n);

    return 0;
}

int armstrong(int num)
{
    int power = calculateNumberOfDigits(num); //  with return and with args (will return  value >0)
    int sum = 0;
    while (num > 0)
    {
        int ld = num % 10;
        int ans = basePower(ld, power); // * will store ld ^ power
        sum += ans;
        num = num / 10;
    }
    return sum;
}

int calculateNumberOfDigits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}

int basePower(int base, int power)
{
    int ans = 1;
    for (int i = 1; i <= power; i++)
        ans = ans * base;
    return ans;
}