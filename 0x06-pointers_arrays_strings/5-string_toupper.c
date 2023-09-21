#include "main.h"
/**
 * string_toupper- changes lowercase to uppercase
 * @str: computed letter
 * Return: return 0 void
 **/
char *string_toupper(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (original_str);
}
