#include "main.h"
/**
 * print_numbers- prints numbers form 0 to 9
 * Return: returns void 0 (success)
 **/
void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar('0' + i);
i++;
}
_putchar('\n');
}
