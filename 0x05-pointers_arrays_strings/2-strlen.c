#include "main.h"
/**
 * _strlen- gives the length of string
 * @s: the value to be computed
 * Return: return an int value
 **/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return(length);
}
