#include "main.h"
/**
 *_islower- checks where lower case or uppercase
 *
 *
 * @c:the character to be checked
 * Return: 1 when it lowercase 0 anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
