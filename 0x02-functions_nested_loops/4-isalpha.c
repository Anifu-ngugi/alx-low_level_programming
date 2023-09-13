#include "main.h"
/**
 * _isalpha- checks where alphabets are uppercase
 * @c: the character being checked
 * Return: 1 when uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
