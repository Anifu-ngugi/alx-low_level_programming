#include "main.h"
#include <string.h>
/**
* _strpbrk- a functin that searches a string in a set of bytes
* @s: the number of string in c
* @accept: the value to be cheacked
* Return: the return cahr accept otherwise null
**/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s); /** Found a character in accept**/
}
a++;
}
s++;
}
return (NULL); /** No character in accept found**/
}
