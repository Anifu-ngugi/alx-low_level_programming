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
char x = '0';
char y = 'a';

while (x <= '9')
{
	putchar(x);
	x++;
}
while (y <= 'f')
{
	putchar(y);
	y++;
}

putchar('\n');/*new changes*/
return (0);
}
