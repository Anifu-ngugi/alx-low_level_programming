#include <stdio.h>

/**
 * main-entry point
 *
 * Description: A program using putchar to display alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');  /* Print a newline*/

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');  /* Print a newline*/

    return 0; /* Return 0 to indicate success*/
}

