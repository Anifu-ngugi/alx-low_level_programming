#include <stdio.h>

/**
 * main - prints all the sum of the multipes of 3 and 5 below 1024
 *
 * Return: void
 */
int main(void)
{
	int b, i = 0;

	while (b < 1024)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			i += b;
		}
		b++;
	}
	printf("%d\n", i);

	return (0);
}
