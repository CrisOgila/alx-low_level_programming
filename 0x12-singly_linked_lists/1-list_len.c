#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - finds th length of a list.
 * @h: head node
 * Return: The length of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
