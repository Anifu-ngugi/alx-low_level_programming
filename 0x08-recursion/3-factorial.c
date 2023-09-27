#include "main.h"
/**
 * factorial- a function that works out fractorial
 * @n: parametr for computation
 * Return: retiurn factorial with a int datatype
 **/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
