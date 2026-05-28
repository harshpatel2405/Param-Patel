// * Print ASCII values of characters A to Z.

#include <stdio.h>

int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c - %d\t", ch, ch);
    }

    return 0;
}

// char -> %d -> ascii(int)

// int -> %c -> character
// printf("\n%c", 120); // * x