#include <stdio.h>

int main()
{
    int n = 5678;
    int rev = 0;

    while (n > 0)
    {
        int ld = n % 10;
        printf("rev = %d * 10 + %d = %d\n",rev,ld,(rev*10+ld));
        rev = rev * 10 + ld;
        n /= 10;
    }
    printf("Reverse = %d\n",rev);
    return 0;
}