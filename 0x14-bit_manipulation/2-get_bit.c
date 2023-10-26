#include "main.h"

/**
 * get_bit - get a vlue of bits using  an index
 * @n: first paramater
 * @index: second paramater
 * the value of the bit at index index or -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
	return (-1);
	}
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}
