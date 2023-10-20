#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adding a node
 * @head: arguments for the head
 * @str: arguments for what to enter
 * Return: the list for adding
 **/
list_t *add_node(list_t **head, const char *str) 
{
	list_t *new_node;
    if (str == NULL || *str == '\0')
        return (NULL); 

    new_node = malloc(sizeof(list_t));

    if (new_node == NULL)
        return (NULL); 

    new_node->str = strdup(str); 

    if (new_node->str == NULL) {
        free(new_node); 
        return (NULL);
    }
	new_node->next = *head; 
	*head = new_node;

    return (new_node); 
}
