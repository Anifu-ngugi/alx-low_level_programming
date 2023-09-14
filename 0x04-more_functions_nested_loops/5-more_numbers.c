#include "main.h"
/**
* more_numbers- prints 1-14  10 times
* Return: Return void
*/
void more_numbers(void)
{
int m;

int n = 0;

while (n <= 9)
{
m = 0;
while (m <= 14)
{
if (m <= 9)
{
_putchar('0' + m);
}
else
{
_putchar('0' + (m / 10));
_putchar('0' + (m % 10));
}
m++;
}
_putchar('\n');
n++;
}
}
