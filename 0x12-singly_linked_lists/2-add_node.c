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
	char *new_string;
	int i;
	list_t *ptr;

	if (str == NULL)
		return (NULL);
	
	for (i = 0; i != '\0'; i++)
	{}
	new_string = strdup(str);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = new_string;
	ptr->next=NULL;

	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
