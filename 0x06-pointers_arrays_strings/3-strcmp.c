#include "main.h"
/**
 * _strcmp- function for checking comparison
 * @s2: second character for comparison
 * @s1: first character for comparison
 * Return: integer type
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

