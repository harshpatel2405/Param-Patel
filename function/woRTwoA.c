#include <stdio.h>

//  * Function Declaration
void greet();
void prime();

int main()
{
    // * Function Calling
    greet();
    prime();
    prime();
    prime();
    prime();
    prime();
    return 0;
}

// * Function definition
void greet()
{
    printf("Welcome User\n");
}

void prime()
{
    int n;
    int count = 0;
    printf("Enter a number to check if the number is prime or not ? : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d is prime\n", n);
    }
    else
    {
        printf("%d is not prime\n", n);
    }
}

