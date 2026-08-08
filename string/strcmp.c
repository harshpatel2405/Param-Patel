
#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20] = "Harsh";
    char name2[20] = "Utsav";
    int same = 1;
    // * loop logic
    if (strlen(name1) == strlen(name2))
    {
        int i = 0;
        while (name1[i] != '\0')
        {
            if (name1[i] != name2[i])
            {
                same = 0;
                break;
            }
            i++;
        }

        if (same == 1)
        {
            printf("Both Strings are same");
        }
        else
        {
            printf("Both Strings are not equal based on different characters");
        }
    }
    else
    {
        printf("Both Strings are not equal based on length");
    }

    // * compare using built in method
    // int ans = strcmp(name1, name2);
    int ans = strcmp(name1, name2);

    if (ans == 0)
    {
        printf("\nBuilt In Method :: Both Strings are same");
    }
    else
    {
        printf("\nBuilt In Method :: Both Strings are not equal");
    }

    return 0;
}