#include "main.h"
/**
 * print_line- prints straight line
 * @n: number of times the n line with be printed
 * Return: return 0
 **/
void print_line(int n)
{	
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
}
