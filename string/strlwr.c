
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s", str);

    // * 1. convert into lowercase
    int i = 0;

    printf("1. Lowercase of '%s' is ", str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("%s\n", str);

    char name[] = "vasu";
    printf("Lowercase using in-built method is %s", strlwr(name));

    return 0;
}