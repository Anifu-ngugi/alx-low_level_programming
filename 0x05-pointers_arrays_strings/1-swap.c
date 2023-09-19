#include "main.h"
/**
 * swap_int- swapping the value of two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: return 0;
 **/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
