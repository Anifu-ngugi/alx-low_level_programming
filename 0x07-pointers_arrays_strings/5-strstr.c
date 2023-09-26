#include "main.h"
#include <string.h>
/**
* _strstr- a function that locates a subatring
* @haystack: a pointer pointing to a string  s of haystack
* @needle: a pointer where is within a haystack
* Return: a char otherwise null
**/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != '\0' && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack); /* Return a pointer to the beginning of the match**/
}

haystack++;
}

return (NULL); /**Return NULL if the needle is not found in the haystack**/
}

