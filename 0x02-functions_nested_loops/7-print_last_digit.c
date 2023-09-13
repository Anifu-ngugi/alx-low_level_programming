#include "main.h"
/**
 * print_last_digit- prints the last digit
 * @k: computes the last digit
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int lastdigit;

	lastdigit = k % 10;
	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
