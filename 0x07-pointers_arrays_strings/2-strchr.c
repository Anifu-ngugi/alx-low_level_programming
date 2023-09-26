#include "main.h"
#include <stddef.h>
/**
 * _strchr- a function that checks string charcter c
 * @s: pointer to sring s
 * @c: the charcter to be found
 * Return: chracter c when found else null
 **/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

