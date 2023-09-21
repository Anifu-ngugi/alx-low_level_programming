#include "main.h"
/**
 * _strcat- a function for concatinating
 * @src: source to be computed
 * @dest: destination to be computed
 * Return: Return destination (dest)
 **/
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /**storing the original pointer to dest **/
	 /** moving dest to the end of string **/
	while (*dest != '\0')
	{
		dest++;
	}
	/**coping dest to source**/
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (original_dest);
}
