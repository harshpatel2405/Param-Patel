#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char copyString[20];
    printf("Enter a string : ");
    scanf("%[^\n]", str);

    int i = 0;
    while (str[i] != '\0')
    {
        copyString[i] = str[i];
        i++;
    }
    copyString[i] = '\0';

    printf("Copied String : %s\n", copyString);

    char str1[30] = "Data is Gold";
    char copyString1[30];

    printf("Copied String using in-built function : %s\n", copyString1);
    strcpy(copyString1, str1);
    printf("Copied String using in-built function : %s\n", copyString1);

    return 0;
}