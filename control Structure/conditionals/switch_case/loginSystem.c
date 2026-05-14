/*
Login System (with 3 attempts)
*/

#include <stdio.h>

int main()
{
    int suId, suPwd;
    int lpId, lpPwd;
    int attempts = 0;

    printf("-----------\nSignup Page\n-----------\n");
    printf("Enter Signup ID : ");
    scanf("%d", &suId);
    printf("Enter Signup Password : ");
    scanf("%d", &suPwd);

start:
    printf("\n----------\nLogin Page\n----------\n");
    printf("Enter Login ID : ");
    scanf("%d", &lpId);
    printf("Enter Login Password : ");
    scanf("%d", &lpPwd);

    if (lpId == suId && lpPwd == suPwd)
    {
        printf("Login Successfull..\n");
        attempts++;
    }
    else
    {
        printf("Invalid Credentials..try Again\n");
        attempts++;
        if (attempts >= 3)
        {
            printf("Account Blocked...Try Again after 15 minutes..\n");
        }
        else
            goto start;
    }

    printf("Number of Attempts : %d\n", attempts);

    return 0;
}