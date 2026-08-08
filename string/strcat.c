
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Harsh ";
    char str2[20] = "Patel";

    char concatString[40];
    int k = 0;
    int i = 0;
    while (str1[i] != '\0')
    {
        concatString[k++] = str1[i];
        i++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        concatString[k++] = str2[i];
        i++;
    }

    concatString[k] = '\0';

    printf("Loop Method : %s\n", concatString);

    char name[] = "vasu";
    char surname[] = " Shah";
    strcat(name, surname);
    printf("Concat using in-built method is %s\n", name);

    return 0;
}