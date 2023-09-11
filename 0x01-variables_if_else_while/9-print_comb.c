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
int i;

for (i = 0 ; i < 10 ; i++)
{
putchar('0' + i);

if (i < 9)
{
putchar(', ');
}
else
{
putchar('$');
}
}
putchar('\n');
return (0);
}
