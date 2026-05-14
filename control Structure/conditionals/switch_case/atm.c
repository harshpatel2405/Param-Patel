#include <stdio.h>

int main()
{
    int balance = 25000;
    int atmOperations;
    int amount;

start:
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit");
    printf("\nSelect your Choice : ");
    scanf("%d", &atmOperations);

    switch (atmOperations)
    {
    case 1:
        printf("Enter amount to be depositted : ");
        scanf("%d", &amount);
        balance = balance + amount;

        printf("%d depositted Successfully...\n\n", amount);
        goto start;
        break;

    case 2:
        printf("Enter amount to be Withdraw : ");
        scanf("%d", &amount);

        if (amount <= balance)
        {
            balance = balance - amount;
            printf("%d withdrawn Successfully...\n\n", amount);
        }
        else
        {
            printf("Insufficient Balance\n\n");
        }
        goto start;
        break;
    case 3:
        printf("Current Accout Balance : %d\n\n", balance);
        goto start;
        break;

    case 4:
        printf("Exitting the ATM\n");
        break;

    default:
        printf("Choose Correct Operation\n\n");
        goto start;
    }
    return 0;
}