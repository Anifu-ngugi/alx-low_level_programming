#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: return void
 **/
void print_chessboard(char (*a)[8])
{
	unsigned int i, k = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			k = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - k]);
	}
	_putchar('\n');
}
