#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
* print_list - a function that prints the length of string
* @h: the  head of the node
* Return: the length of linked list
**/
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h != NULL)

if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%lu] %s\n", strlen(h->str), h->str);
}

h = h->next;
node_count++;


return (node_count);
}
