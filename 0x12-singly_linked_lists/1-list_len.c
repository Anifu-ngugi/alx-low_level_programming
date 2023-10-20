#include "lists.h"
#include <stddef.h>
/**
 * list_len- function to calculate the length of length of linked_list
 * @h: the head of the node
 * Return: the number of length of element
 **/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}

