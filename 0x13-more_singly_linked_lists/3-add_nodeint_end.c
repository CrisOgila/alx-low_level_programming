#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of listint_t
 * @head:Pointer to the address of the head of the listint_t
 * @n: The integer for trhe new node to contain
 * Return: NULL, if func fails, otherwise address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	(void)last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
