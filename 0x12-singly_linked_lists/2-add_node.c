#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"lists.h"

/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; i != '\0'; i++)
	{}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	
	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
