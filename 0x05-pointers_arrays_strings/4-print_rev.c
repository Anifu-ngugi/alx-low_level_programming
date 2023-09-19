#include "main.h"
/**
 * print_rev- print strings in reverse
 * @s: the letter to be computed
 * Return: returns 0 void
 **/
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
