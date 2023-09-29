#include "main.h"
/**
 * _puts- prints strings followed by a new line
 * @str: the parameter to be computed
 * Return: retur void 0
 **/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
