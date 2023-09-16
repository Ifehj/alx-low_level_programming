#include "lists.h"

/**
 * dlistint_len - prints all elements of a doubly linked list
 * @h: Pointer to first node in the list.
 *
 * Return: Number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int node_num = 0;
	current = h;

	while (current)
	{
		node_num++;
		current = current->next;
	}
	return (node_num);
}
