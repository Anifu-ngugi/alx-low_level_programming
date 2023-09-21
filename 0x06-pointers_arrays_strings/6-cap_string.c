#include "main.h"

/**
* cap_string - capitalize words of a string
* @str: letter to be computed
* Return: return char
**/
char *cap_string(char *str)
{
char separators[] = " \t\n,;.!?\"(){}";
int capitalize_next = 1;

while (*str != '\0')
{
int is_separator = 0;
int i;
for (i = 0; separators[i] != '\0'; i++)
{
if (*str == separators[i])
{
is_separator = 1;
break;
}
}
if (is_separator)
{
capitalize_next = 1;
}
else if (capitalize_next)
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
capitalize_next = 0;
}
str++;
}
return (str);
}

