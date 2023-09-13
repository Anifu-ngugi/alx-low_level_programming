#include "main.h"
/**
 * print_sign- checks the sign of an integer
 * @n: is been checked
 * Return:1 for positive number, -1 for negative number 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
