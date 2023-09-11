#include <stdio.h>

/**
* main-entry point
*
* Description: A program using putchar to display alphabets in lowercase
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)

{

putchar(ch);


}
putchar('\n');/*new changes*/
return (0);
}
