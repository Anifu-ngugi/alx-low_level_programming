#include "main.h"
/**
 * _puts- prints strings followed by a new line
 * @str: the parameter to be computed
 * Return: retur void 0
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');

}
