#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && k < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
