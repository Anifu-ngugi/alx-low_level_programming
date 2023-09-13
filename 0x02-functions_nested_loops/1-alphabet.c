#include "main.h"
/**
 * main - entry point
 *
 * Description:print alphabets in lowercase
 *
 * Return:always 0 (success)
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a' ; k <= 'z' ; k++)
	{
		_putchar(k);
	}
_putchar('\n');
}
