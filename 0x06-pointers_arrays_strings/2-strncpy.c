#include "main.h"
/**
 * _strncpy- used for copy scr and dest no n
 * @src: source to be computed
 * @dest: destination to be computed
 * @n: number of n to be computed
 * Return: return origial_dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	/**Copy up to 'n' characters from src to dest**/
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original_dest);
}

