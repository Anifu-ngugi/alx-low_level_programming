#include "main.h"
/**
 * print_rev- print strings in reverse
 * @s: the letter to be computed
 * Return: returns 0 void
 **/
void print_rev(char *s)
{
	int i, j, length;

	i = 0;

	while (s[i] != '\0') /** this is for checking the length of the string character **/
	{
		i++;
	}

	length = i;  /**the length we get after finding the length **/

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
