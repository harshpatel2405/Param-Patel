// * Enter a number and check it is divisible by 3 and 5  
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
    {
        printf("This number is divisible by 3 and 5");
    }
    else
    {   
        printf("This number is not divisible by 3 and 5");
    }
    return 0;
}