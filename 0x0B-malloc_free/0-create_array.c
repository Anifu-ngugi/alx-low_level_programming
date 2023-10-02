#include "main.h"
#include <stdlib.h>

/**
* create_array- creates an array (initialization)
* @size: the size in bytes of the memory allocation
* @c: the character value
* Return: returns a character array
**/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}

array = malloc(size * sizeof(char));

if (array == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}

