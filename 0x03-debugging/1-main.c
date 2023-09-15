#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
putchar(i);/*when using  puchar use putchar('0' + 1 ) ) */
/*failure to increment causes the infinite loop*/
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
