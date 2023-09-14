#include "main.h"
/**
 * print_diagonal- draws a diagonal line in the terminal
 * @n: prints the number of line per space
 * Return: void 0 (success)
 */
void print_diagonal(int n)
{
	int k; /*for _ */
	int l; /*for $ */

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0 ; k <= n ; k++)
		{
			for (l = 0 ; l <= k ; l++)
				_putchar(32);
		}
	}
	 _putchar(92);
	_putchar('\n');
}
