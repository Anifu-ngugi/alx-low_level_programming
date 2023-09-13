#include "main.h"
/**
 * print_alphabet_x10-prints alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{

	int j;
	char i = 'a';
   	
	for(j = 0 ; j <= 10 ; j++)

	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');

	}
	

}
