#include <stdio.h>
/**
 * main-entry point
 *
 * Description:using continue to skip certain letters
 *
 * Return:Always 0 (success))
 */

int main(void)
{
for (int i = 0; i <= 8; i++)
{
for (int j = i + 1; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);

if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}

