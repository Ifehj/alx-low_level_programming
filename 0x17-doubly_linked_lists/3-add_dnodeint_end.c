#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: Pointer to first node in the list.
 * @n: Data for the new node.
 *
 * Return: Pointer to the newly added node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (temp)
		while (temp->next)
			temp = temp->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;

	if (*head == NULL)
		*head = new_node;
	else
		temp->next = new_node;

	return (new_node);
}
