
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s", str);

    // * 1. convert into uppercase
    int i = 0;

    printf("1. Uppercase of '%s' is ", str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s\n", str);

    char name[] = "vasu";
    printf("Uppercase using in-built method is %s", strupr(name));

    return 0;
}