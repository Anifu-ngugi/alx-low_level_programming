#include "main.h"
/**
* _strlen_recursion- function for length of a value
* @s: char to be computed
* Return: a int value(length of the string
**/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
