#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: Pointer to first node in the list.
 * @index: Index at which to find the node, starting from 0.
 *
 * Return: Node, or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	if (!head)
		return (NULL);

	while (i <= (index - 1))
	{
		current = current->next;
		i++;
	}

	return (current);
}
