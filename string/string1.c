#include <stdio.h>

int main()
{
    char name[] = {'P', 'a', 'r', 'a', 'm', ' ', 'P', 'a', 't', 'e', 'l', '\0'};

    char name2[] = "Harsh Patel";

    printf("Name : %s\n", name2);

    // name2 = "Param Patel";

    char str[10];

    printf("Enter your name : ");
    // scanf("%s", name); // * does not include space 
    scanf("%[^\n]", name); // * includes spaces as well in input 

    printf("My name is %s", name);
    return 0;
}