#include "main.h"
/**
* _strspn- func that gets length of a prefic substring
* @s: a pointer to the string you want to search within
* @accept: a pointer to the string you want to search for s
* Return: number of bytes of the string (unsigned int)
**/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;
int found;
while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
found = 1;
break;
}
}
if (!found)
{
break;
}
count++;
s++;
}

return (count);
}
