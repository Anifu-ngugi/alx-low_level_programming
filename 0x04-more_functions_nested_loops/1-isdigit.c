#include "main.h"
/**
 * _isdigit- checks number 0 through 9
 * @c: checked character
 * Return: return 1 if its digit otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
