#include "main.h"
#include <string.h>

/**
* binary_to_uint - a function that converts binary to unsigned int
* @b: const charcter of string
* Return: returns converted number
**/
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
unsigned int len;
int c;
len = strlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
return (0);
if (b[c] == '1')
{
i += k;
}
k *= 2;
}
return (i);
}
