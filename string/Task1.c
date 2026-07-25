
#include <stdio.h>
#include<string.h>

int main()
{
    char str[20];
    
    printf("Enter a string : ");
    scanf("%s", str);
    
    // * 1. Find the length of the string
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }
    printf("1. Length of '%s' Using Loop is %d\n", str, count);
    int length = strlen(str);
    printf("1. Length of '%s' Using In-Built Function is %d\n\n", str, length);

    return 0;
}