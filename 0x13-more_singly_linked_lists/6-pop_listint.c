#include "lists.h"
/**
 * pop_listint - delete the first node of a list
 * @head: the pointer to the list
 * Return : The popped integer
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *tmp;
	listint_t *current;

	if (*head == NULL)
		return (0);
	current = *head;
	node = current->n;
	tmp = current->next;
	free(current);
	*head = tmp;
	return (node);
}
