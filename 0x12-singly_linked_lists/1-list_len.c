#include "lists.h"
/**
 * list_len - finds th length of a list.
 * @h: head node
 * Return: The length of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
