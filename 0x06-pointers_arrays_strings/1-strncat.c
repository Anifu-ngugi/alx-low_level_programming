#include "main.h"
/**
 * _strncat- computes cont for specified NO: n
 * @src: source to be computed
 * @dest: destination to be computed
 * @n: specified number of times
 * Return: Return dest(original dest)
 **/
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}
