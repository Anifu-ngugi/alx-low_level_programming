#include <stdio.h>
/**
 * main-entry point
 *
 * Description:using continue to skip certain letters
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch == 'q' ||  ch == 'e')
	{
		continue;

	}
	putchar (ch);
}
putchar('\n');  /* Print a newline*/
return (0);
}
