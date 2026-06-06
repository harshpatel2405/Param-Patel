#include <stdio.h>

int main()
{
    int n;
    int rev = 0;
    int temp;

    printf("Enter a number : ");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    if (rev == temp)
    {
        printf("%d is palindrome Number", temp);
    }
    else
    {
        printf("%d is not palindrome Number", temp);
    }
    return 0;
}

find max and min from a number 
find the difference of them
print sqaure of the difference