
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];

    printf("Enter a string : ");
    scanf("%s", str); // Harsh

    // * 1. Reverse -- last index to 0
    int k = 0;
    char revStr[20];

    printf("1. Reverse of '%s' is ", str);
    for (int i = strlen(str) - 1; i >= 0; i--) // 4 - 0
    {
        revStr[k++] = str[i];
    }

    printf("%s\n", revStr);

    char name[] = "vasu";
    printf("Reverse using in-built method is %s", strrev(name));

    return 0;
}