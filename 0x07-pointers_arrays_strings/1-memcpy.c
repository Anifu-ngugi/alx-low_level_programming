#include "main.h"
#include <string.h>
/**
 * _memcpy- copies memory area
 * @src: pointer to where its vaue is copied from
 * @dest: pointer to where the vlaue is copied to
 * @n: the number of bytes to be copied
 * Return: Rturns destination
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest <= src || dest >= (src + n))
	{
		return (memcpy(dest, src, n));
	}
	else
	{
	char *d = dest;

	char *s = src;

	while (n--)
	{
	*d++ = *s++;
	}
	return (dest);
}
}
